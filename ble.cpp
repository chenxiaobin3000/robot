/**
 * describe:    蓝牙控制
 * author:      创想酷玩
 * data:        2024-07-01
 */
#include "ble.h"
#include <Arduino.h>
#include <BLEDevice.h>
#include <BLEServer.h>
#include <BLEUtils.h>
#include "robot.h"

BLEServer *pServer = NULL;        // BLEServer指针 pServer
bool deviceConnected = false;     // 本次连接状态
bool oldDeviceConnected = false;  // 上次连接状态
#define SERVICE_UUID "ce2fae2d-1936-4167-a325-dcba95f5cca7"
#define CHARACTERISTIC_UUID "98c95def-0031-44ae-bce8-44d30c9711c1"

CRobot *robot = NULL;

class MyServerCallbacks : public BLEServerCallbacks {
  void onConnect(BLEServer *pServer) {
    deviceConnected = true;
  }

  void onDisconnect(BLEServer *pServer) {
    deviceConnected = false;
  }
};

class MyCallbacks : public BLECharacteristicCallbacks {
  void onWrite(BLECharacteristic *pCharacteristic) {
    String rxValue = pCharacteristic->getValue();  //接收信息

    if (rxValue.length() > 0) {  //向串口输出收到的值
      for (int i = 0; i < rxValue.length(); i++) {
        if (rxValue[i] == 'a') {
          robot->straight();
        } else if (rxValue[i] == 'b') {
          robot->straight();
        }
      }
      Serial.println();
    }
  }
};

void initBLE() {
  // 创建一个 BLE 设备
  BLEDevice::init("robot");  //在这里面是ble的名称

  // 创建一个 BLE 服务
  pServer = BLEDevice::createServer();
  pServer->setCallbacks(new MyServerCallbacks());  //设置回调
  BLEService *pService = pServer->createService(SERVICE_UUID);

  // 创建一个 BLE 特征
  BLECharacteristic *pRxCharacteristic = pService->createCharacteristic(CHARACTERISTIC_UUID, BLECharacteristic::PROPERTY_WRITE);
  pRxCharacteristic->setCallbacks(new MyCallbacks());  //设置回调

  pService->start();                   // 开始服务
  pServer->getAdvertising()->start();  // 开始广播

  robot = new CRobot();
  robot->reset();
}

void loopBLE() {
  // deviceConnected 已连接
  if (deviceConnected) {
  }

  // disconnecting  断开连接
  if (!deviceConnected && oldDeviceConnected) {
    delay(500);                   // 留时间给蓝牙缓冲
    pServer->startAdvertising();  // 重新广播
    oldDeviceConnected = deviceConnected;
  }

  // connecting  正在连接
  if (deviceConnected && !oldDeviceConnected) {
    // do stuff here on connecting
    oldDeviceConnected = deviceConnected;
  }

  //
  digitalWrite(2, HIGH);
  robot->straight();
  digitalWrite(2, LOW);
  delay(100);
}
