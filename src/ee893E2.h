/***************************************************************************/
/* headerfile for "ee893E2.cpp" module */
/***************************************************************************/
/*
Read functions for measurement values of the EE893 Sensor via E2 interface.

Disclaimer:
This application example is non-binding and does not claim to be complete with regard
to configuration and equipment as well as all eventualities. The application example
is intended to provide assistance with the EE893 sensor module design-in and is provided "as is".
You yourself are responsible for the proper operation of the products described.
This application example does not release you from the obligation to handle the product safely
during application, installation, operation and maintenance. By using this application example,
you acknowledge that we cannot be held liable for any damage beyond the liability regulations
described.
*/

#ifndef ee893E2_H
#define ee893E2_H

#include "Arduino.h"
#include "e2Interface.h"


// constant definition
//-----------------------------------------------------------------------------
#define CB_TYPELO 0x11 					//controlbyte for reading sensortype low-byte
#define CB_TYPESUB 0x21 				//controlbyte for reading sensor-Subtype
#define CB_AVPHMES 0x31 				//controlbyte for reading available physical measurements
#define CB_TYPEHI 0x41 					//controlbyte for reading sensortype high-byte
#define CB_STATUS 0x71 					//controlbyte for reading statusbyte
#define CB_MV1LO 0x81 					//controlbyte for reading measurement value 1 low-byte
#define CB_MV1HI 0x91 					//controlbyte for reading measurement value 1 high-byte
#define CB_MV2LO 0xA1 					//controlbyte for reading measurement value 2 low-byte
#define CB_MV2HI 0xB1 					//controlbyte for reading measurement value 2 high-byte
#define CB_MV3LO 0xC1 					//controlbyte for reading measurement value 3 low-byte
#define CB_MV3HI 0xD1 					//controlbyte for reading measurement value 3 high-byte
#define CB_MV4LO 0xE1 					//controlbyte for reading measurement value 4 low-byte
#define CB_MV4HI 0xF1 					//controlbyte for reading measurement value 4 high-byte


// declaration of functions
//-----------------------------------------------------------------------------

class EE893E2
{	

public:	
EE893E2(void);
EE893E2(int _SDA, int _SCL);

uint8_t readMeasValue(float &value,unsigned char controlBytes[], int scaleFactor);
uint8_t readSensorType(unsigned int &sensorType);
uint8_t readSensorSubType(uint8_t &sensorSubType);
uint8_t readAvailablePhysicalMeasurements(uint8_t &availablePhysicalMeasurements);
uint8_t readCo2Raw(float &Co2);
uint8_t readCo2Mean(float &Co2);
uint8_t readStatus(void);
void getErrorString(unsigned char e2Status, char errorString[]);
};

#endif
