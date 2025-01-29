#ifndef SMART_HOME_H
#define SMART_HOME_H
#include <iostream>
#include <vector>
#include <memory>

class Device
{
private:
    std::string name;
    double energyConsumption;
    bool powerStatus;

public:
    Device(const std::string& deviceName, double energy, bool deviceStatus);

    void turnOn();
    void turnOff();
    void showStatus();
    std::string getName() const { return name; };
};

class SmartHome
{
private:
    std::vector<std::shared_ptr<Device>> devices;
public:
    void addDevice(const std::string& deviceName, double energy, bool powerStatus);
    void removeDevice(const std::string& deviceName);
    void listDevices();
};

#endif //SMART_HOME_H
