/*  Vulintus_Arduino_Toolbox.h

    copyright Vulintus, Inc., 2023

    An Arduino-compatible toolbox of various handy functions commonly used in 
    Vulintus sketches.

    UPDATE LOG:
      2023-11-06 - Drew Sloan - File first created.

*/

#ifndef VULINTUS_ARDUINO_TOOLBOX_H
#define VULINTUS_ARDUINO_TOOLBOX_H

#include <Arduino.h>

void Print_FW_Filename(void);           //Print the sketch filename from the macro.
void Print_FW_Date(void);               //Print the sketch upload date from the macro.
void Print_FW_Time();                   //Print the sketch upload time from the macro.

#endif 								    //#ifndef VULINTUS_ARDUINO_TOOLBOX_H