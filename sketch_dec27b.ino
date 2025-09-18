#include <ESP32Servo.h>  // 使用 ESP32 相容的 Servo 库

#define SERVO_PIN 14  // 定義伺服控制訊號的 GPIO

Servo myServo;  // 建立伺服物件
int angle = 0;   // 初始化角度為 0 度

void setup() {
  Serial.begin(115200);
  Serial.println("伺服馬達自動轉動開始");

  myServo.attach(SERVO_PIN);  // 連接伺服到指定 PIN
  myServo.write(angle);  // 設定伺服初始角度
  Serial.printf("伺服初始角度設為：%d\n", angle);
}

void loop() {
  // 轉動到 90 度
  myServo.write(90);  // 設定伺服角度為 90
  Serial.println("伺服轉動到 90 度");
  delay(5000);  // 停留 1 秒鐘

  // 回到 0 度
  myServo.write(0);  // 設定伺服角度為 0
  Serial.println("伺服回到 0 度");
  delay(5000);  // 停留 1 秒鐘

  // 如果不需要繼續循環，可以在這裡加上停止循環的程式碼
  // 例如：while(true); 這樣程式就會停在此
}