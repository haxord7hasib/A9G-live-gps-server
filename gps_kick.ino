void gpskick() {

int i = 1;
String str;
    
  while (i) {
 
    Serial2.println("AT+LOCATION=2");
    delay(500);
    while (Serial2.available() <= 0);
    if (Serial2.find("AT+LOCATION=2")) {
      str = Serial2.readString();
      //SerialUSB.println(str);
      i = 0;
    }
    delay(500);
  }
  lognitude = str.substring(4,13);
  latitude =  str.substring(14,23);
   

  
}
