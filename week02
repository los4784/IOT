#define TRIG 13
#define ECHO 12

int led_r = 7; // 지역 변수
int led_g = 8;

void setup()
{
  Serial.begin(9600);
  pinMode(led_r, OUTPUT); // 7번을 output 모드로 함
  pinMode(led_g, OUTPUT);
  pinMode(TRIG, OUTPUT);
  pinMode(ECHO, INPUT);
}

void loop()
{
  long duration,distance;
  
  digitalWrite(TRIG, LOW);
  delayMicroseconds(2); //delay(2)
  digitalWrite(TRIG, HIGH);
  delayMicroseconds(10);
  digitalWrite(TRIG, LOW);
  
  duration = pulseIn(ECHO, HIGH);
  
  distance = duration * 17/1000;
  Serial.println(duration );
  Serial.print("\nDistance : ");
  Serial.print(distance);
  Serial.println(" Cm");
  
  digitalWrite(led_r, HIGH);
  delay(1000); // Wait for 1000 millisecond(s) 1초
  digitalWrite(led_r, LOW);
  delay(1000);
  
  digitalWrite(led_g, HIGH);
  delay(1000);
  digitalWrite(led_g, LOW);
  delay(1000);
}
