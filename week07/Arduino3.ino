int a1 = 2;
int a2 = 3;
int a3 = 0; // a3 변수 초기화

void setup() {
  Serial.begin(115200);
  Serial.println();

  //아래 a1,a2,a3는 인수(argument)임
  sum(a1, a2, a3);
  Serial.println(a3); // sum 함수 호출 후 a3 값 출력
}

void loop() {
  // 필요하다면 a3 값을 loop() 함수 안에서 반복적으로 출력 가능
  // Serial.println(a3); 
  // delay(1000); // 1초마다 출력 (선택 사항)
}

//아래 a,b,c는 매개 변수(parameter)임
void sum(int a, int b, int& c) {
  c = a + b; // a와 b의 합을 c에 저장
}
