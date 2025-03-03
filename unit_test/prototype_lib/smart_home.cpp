#include <iostream>
#include "smart_home.h"

Device::Device(const std::string& deviceName, double energy, bool deviceStatus)
    : name(deviceName), energyConsumption(energy), powerStatus(false){}

void Device::turnOn()
{
    powerStatus = true;
    std::cout << "Turning on " << std::endl;
}
void Device::turnOff()
{
    powerStatus = false;
    std::cout << "Turning off " << std::endl;
}
void Device::showStatus()
{
    std::cout << "Device " << name << std::endl;
    std::cout << "EnergyConsumption " << energyConsumption << "W" << std::endl;
    std::cout << "PowerStatus " << (powerStatus ? "ON" : "OFF") << std::endl;
}

void SmartHome::addDevice(const std::string& deviceName, double energy, bool deviceStatus)
{
    std::shared_ptr<Device> newDevice = std::make_shared<Device>(deviceName, energy, false);
    devices.push_back(newDevice);
    std::cout << "Device " << deviceName << " Added to the smart home system " << std::endl;
}
void SmartHome::removeDevice(const std::string& deviceName)
{
    for (auto it = devices.begin(); it != devices.end(); ++it)
    {
        if ((*it)->getName() == deviceName)
        {
            devices.erase(it);
            std::cout << "Device " << deviceName << " Removed from the smart home system " << std::endl;
            return;
        }
    }
    std::cout << "Device " << deviceName << " Not Found " << std::endl;
}
void SmartHome::listDevices()
{
    std::cout << "Devices in the smart home system " << std::endl;
    for (const auto& device : devices)
    {
        device->showStatus();
        std::cout << "----------" << std::endl;
    }
}
/*
int main()
{
    SmartHome myHome;

    myHome.addDevice("Living Room", 10.0, false);
    myHome.addDevice("Ceiling Room", 20.0, false);
    myHome.addDevice("Air Conditioner", 1000.0, false);

    myHome.listDevices();
    myHome.addDevice("Washing Machine", 500.0, false);
    myHome.listDevices();

    myHome.removeDevice("Ceiling Room");

    return 0;
}
*/