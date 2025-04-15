void setup() {
  Serial.begin(115200); // 시리얼 통신 초기화 (보드 레이트: 115200)
  Serial.println();      // 시리얼 모니터에 빈 줄 출력
}

void loop() {
  static unsigned long loopCnt = 0; // 루프 실행 횟수를 저장하는 정적 변수
  static unsigned long nexmil = millis() + 1000; // 다음 1초 간격 시간을 저장하는 정적 변수

  loopCnt++; // 루프 실행 횟수 증가

  if (millis() > nexmil) { // 1초가 경과했는지 확인
    nexmil = millis() + 1000; // 다음 1초 간격 시간 업데이트
    Serial.println(loopCnt);   // 1초 동안의 루프 실행 횟수 시리얼 모니터에 출력
    loopCnt = 0;              // 루프 실행 횟수 초기화
  }
}
