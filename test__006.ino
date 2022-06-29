// ボタンのピン番号
int BUTTON = 2;
// ボタンの値
int buttonValue = 0;

void setup() {
  // ボタンを入力モードに設定
  pinMode(BUTTON, INPUT);
  // シリアル通信の準備
  Serial.begin(9600);
}

void loop() {
  // ボタンの入力値を取得
  buttonValue = digitalRead(BUTTON);
  if (buttonValue == HIGH) {
    Serial.print("1");
    Serial.println();
  } else {
    Serial.print("0");
    Serial.println();
  }

  // 適度な間隔を開ける
  delay(100);
}