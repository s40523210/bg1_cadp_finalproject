#include <Stepper.h>
#define STEPS 2048


Stepper stepper(STEPS, 8, 10, 9, 11);

void setup()
{
stepper.setSpeed(5);     // 將馬達的速度設定成150RPM 最大  150~160
}

void loop()
{
Serial.begin(9600);
Serial.println("+0.5"); //透過序列視窗看到馬達現在轉角
stepper.step(2048);//正半圈
delay(1);
/*stepper.step(-1024);//反半圈
delay(1000);
Serial.println("-0.5"); //透過序列視窗看到馬達現在轉角
stepper.step(2048);//正1圈
delay(1000);
stepper.step(-2048);//反1圈
delay(1000);
stepper.step(3072);//正1圈半
delay(1000);
stepper.step(-3072);//反1圈半
delay(1000);
stepper.step(4096);//正2圈
delay(1000);
stepper.step(-4096);//反2圈
delay(1000);*/
}

