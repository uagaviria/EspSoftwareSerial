EspSoftwareSerial

Implementaci�n de la librer�a serial de software Arduino para el ESP8266

La misma funcionalidad que la biblioteca AVR correspondiente, pero varias instancias pueden estar activas al mismo tiempo. Se admite una velocidad de hasta 115200 baudios. El constructor tambi�n tiene un tama�o de b�fer de entrada opcional.

Tenga en cuenta que debido al hecho de que el ESP siempre tiene otras actividades en curso, habr� alguna inexactitud en los tiempos de interrupci�n. Esto puede conducir a errores de bits cuando se tiene un tr�fico de datos pesado en altas velocidades de transmisi�n.

# Esquema EspSoftwareSerial pines� [![i2circuit Status](https://travis-ci.org/esp8266/arduino-esp8266fs-plugin.svg?branch=master)](https://i2circuit.com)

SoftwareSerial EspSerial(14, 12, false, 256); // RX � TX

![Screenshot]( 20170722_173520-1.jpg)



