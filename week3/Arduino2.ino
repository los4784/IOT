int Vo = A0;                // 아날로그 입력 핀
int V_LED = 2;              // LED 핀
float Vo_value=0;           // Vo_value 변수 선언
float Voltage = 0;          // 전압 변수
float dustDensity = 0;      // 먼지 밀도 변수

void setup(){
  Serial.begin(9600);       // 시리얼 통신 시작
  pinMode(V_LED, OUTPUT);  // LED 핀을 출력으로 설정
  pinMode(Vo, INPUT);
}

void loop()
{
  digitalWrite(V_LED, LOW);              // V_LED를 LOW로 설정, LED를 켬
  delayMicroseconds(280);                 // 280 마이크로초 대기
  Vo_value = analogRead(Vo);             // 아날로그 값 읽기
  delayMicroseconds(40);                  // 40 마이크로초 대기
  digitalWrite(V_LED, HIGH);             // V_LED를 HIGH로 설정
  delayMicroseconds(9680);                // 9680 마이크로초 대기

  Serial.println(Vo_value);               // Vo_value 출력

  Voltage = Vo_value * 5.0 / 1023.0;  // Vo_value를 사용하여 전압 계산
  dustDensity = (Voltage - 0.5) / 0.005;  // 먼지 밀도 계산

  Serial.print("dust: ");
  Serial.println(dustDensity);  // 먼지 밀도 출력


  delay(1000);                            // 1초 대기
}
