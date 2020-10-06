#include "RTC.h" 
APM3_RTC myRTC;

#define led_46 46
#define led_37 37
#define led_44 44
#define led_47 47

void setup()
{
    pinMode(led_46,OUTPUT);
    digitalWrite(led_46,HIGH);
    pinMode(led_37,OUTPUT);
    digitalWrite(led_37,HIGH);
    pinMode(led_44,OUTPUT);
    digitalWrite(led_44,HIGH);
    pinMode(led_47,OUTPUT);
    digitalWrite(led_47,HIGH);

    Serial.begin(115200);
    Serial.println("edge-template to test arduino-cli");

    myRTC.setToCompilerTime();

    myRTC.getTime();
    Serial.print("[");
    Serial.printf("%02d:", myRTC.hour);
    Serial.printf("%02d:", myRTC.minute);
    Serial.printf("%02d", myRTC.seconds);
    Serial.println("]");

    digitalWrite(led_46,LOW);
    digitalWrite(led_37,LOW);
    digitalWrite(led_44,LOW);
    digitalWrite(led_47,LOW);

}

void loop()
{
    digitalWrite(led_47,HIGH);
    delay(100);
    digitalWrite(led_47,LOW);
    delay(500);
}
