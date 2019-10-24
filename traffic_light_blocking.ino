/*
Pseudocode for a traffic light
*/

//all traffic lights
int red_led = 1;
int yellow_led = 2;
int green_led = 3;

//some time (in milliseconds)
int red_phase_time = 10000;
int red_yellow_phase_time = 5000;
int green_phase_time = 10000;
int green_blinking_time = 1000;
int green_blinking_interval = 5;

void setup(){
  pinMode(red_led, OUTPUT);
  pinMode(yellow_led, OUTPUT);
  pinMode(green_led, OUTPUT);
}
void loop(){
  //red phase
  digitalWrite(red_led,HIGH);
  delay(red_phase_time);

  //red-yellow phase
  digitalWrite(yellow_led,HIGH);
  delay(red_phase_time);
  digitalWrite(red_led,LOW);
  digitalWrite(yellow_led,LOW);

  //green phase
  digitalWrite(green_led, HIGH);
  delay(green_phase_time);
  digitalWrite(green_led,LOW);

  //green blinking
  for (int i = 0; i < yellow_blinking_interval; i++) {
    digitalWrite(green_led,HIGH);
    delay(green_blinking_time);
    digitalWrite(green_led,LOW);
    delay(green_blinking_time);
  }
}
