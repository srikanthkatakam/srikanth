#include "mbed.h"
#include "DHT.h"
 
Serial pc(USBTX, USBRX);
 DHT sensor(D2);
 
 int main() {
     while(1){
     sensor.read();
     pc.printf("Temperature: %d, Humidity: %d\r\n", sensor.getCelsius(), sensor.getHumidity());
     wait(1);
     }
     
 }