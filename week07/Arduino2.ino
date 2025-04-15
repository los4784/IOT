#include <SimpleTimer.h> // SimpleTimer 라이브러리 포함
SimpleTimer timerCnt; // SimpleTimer 객체 생성

unsigned long loopCnt = 0; // 루프 실행 횟수를 저장하는 전역 변수

void timerCntFunc() {
  Serial.println(loopCnt); // 루프 실행 횟수 시리얼 모니터에 출력
  loopCnt = 0; // 루프 실행 횟수 초기화
}

void setup() {
  Serial.begin(115200); // 시리얼 통신 초기화 (보드 레이트: 115200)
  Serial.println();

  timerCnt.setInterval(1000, timerCntFunc); // milli-sec, func / 1000ms(1초)마다 timerCntFunc() 함수 실행
}

void loop() {
  timerCnt.run(); // SimpleTimer 타이머 실행
  loopCnt++; // 루프 실행 횟수 증가
}
