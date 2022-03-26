void send_data() {


#if 1
  if(millis()-timeCount>30000) //60000ms
  {
 
  String cmdString= "AT+HTTPGET=\"http://api.thingspeak.com/update.json?api_key=" + apiKey + "&field1=" + (String)lognitude +"&field2=" + (String)latitude+ "&field3=0.0&field4=0.0" + "\"";
  Serial2.println(cmdString);
  delay(5000);
    timeCount=millis();//refresh
  }
#endif
}
