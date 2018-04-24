#ifndef DHT_H
#define DHT_H
 
#include "mbed.h"
 
#define DHTLIB_OK                0
#define DHTLIB_ERROR_CHECKSUM   -1
#define DHTLIB_ERROR_TIMEOUT    -2
 

class DHT
{
public:
    // Construct the sensor object.
    DHT(PinName const &p);
    
    // Update the humidity and temp from the sensor.
    int read();
    
    // Get the temp(f) from the saved object.
    float getFahrenheit();
    
    // Get the temp(c) from the saved object.
    int getCelsius();
    
    // Get the humidity from the saved object.
    int getHumidity();
 
private:
    /// percentage of humidity
    int _humidity;
    /// celsius
    int _temperature;
    /// pin to read the sensor info on
    DigitalInOut _pin;
    /// times startup (must settle for at least a second)
    Timer _timer;
};
 
#endif
