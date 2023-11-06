/*  Vulintus_Arduino_Toolbox.cpp

    copyright Vulintus, Inc., 2023

    An Arduino-compatible toolbox of various handy functions commonly used in 
    Vulintus sketches.

    UPDATE LOG:
      2023-11-06 - Drew Sloan - File first created.

*/


//Print the sketch filename from the macro.
void Print_FW_Filename() {
  char s[] = __FILE__;                    //Grab the filename from the macro.
  uint8_t b = sizeof(s);                  //Find the number of characters in the filename.
  while ((b > 0) && (s[b] != '\\')) {     //Loop until a forward slash is found.
    b--;                                  //Step backward through the filename.
  }   
  char *u = &s[++b];                      //Create a pointer to start at the filename.
  Serial.println(u);                      //Print the filename.
}


//Print the sketch upload date from the macro.
void Print_FW_Date() {
  char s[] = __DATE__;                    //Grab the upload date from the macro.
  Serial.println(s);                      //Print the upload date.
}


//Print the sketch upload time from the macro.
void Print_FW_Time() {
  char s[] = __TIME__;                  //Grab the upload time from the macro.
  Serial.println(s);                      //Print the upload date.
}