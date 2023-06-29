// Code generated by Arduino IoT Cloud, DO NOT EDIT.

#include <ArduinoIoTCloud.h>
#include <Arduino_ConnectionHandler.h>

const char DEVICE_LOGIN_NAME[]  = "0f43fdc2-9ca1-4e33-915e-729bba88a4cf";

const char SSID[]               = SECRET_SSID;    // Network SSID (name)
const char PASS[]               = SECRET_OPTIONAL_PASS;    // Network password (use for WPA, or use as key for WEP)
const char DEVICE_KEY[]  = SECRET_DEVICE_KEY;    // Secret device password

void onL1Change();
void onL2Change();
void onL3Change();
void onL4Change();

CloudSwitch l1;
CloudSwitch l2;
CloudSwitch l3;
CloudSwitch l4;

void initProperties(){

  ArduinoCloud.setBoardId(DEVICE_LOGIN_NAME);
  ArduinoCloud.setSecretDeviceKey(DEVICE_KEY);
  ArduinoCloud.addProperty(l1, READWRITE, ON_CHANGE, onL1Change);
  ArduinoCloud.addProperty(l2, READWRITE, ON_CHANGE, onL2Change);
  ArduinoCloud.addProperty(l3, READWRITE, ON_CHANGE, onL3Change);
  ArduinoCloud.addProperty(l4, READWRITE, ON_CHANGE, onL4Change);

}

WiFiConnectionHandler ArduinoIoTPreferredConnection(SSID, PASS);