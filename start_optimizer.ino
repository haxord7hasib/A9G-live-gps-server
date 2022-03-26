void optimizer() {


    Serial2.println("AT");
    delay(5000);
    Serial2.println("AT+RST=1");
    delay(7000);
    Serial2.println("AT+CGATT=1");
    delay(3000);
    Serial2.println("AT+CGDCONT=1,\"IP\",\"wap\"");
    delay(3000);
    Serial2.println("AT+CGACT=1,1");
    delay(3000);
    Serial2.println("AT+AGPS=1");
    Serial2.println("AT+CSQ");  // 
}
