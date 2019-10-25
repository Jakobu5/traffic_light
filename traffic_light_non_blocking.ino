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
int green_blinking_interval = 4;
int yellow_phase_time = 1000;

//non blocking variables
int traffic_light_state=0;
/*
* state of the traffic_light:
* 0 = red_phase
* 1 = red_yellow_phase
* 2 = green_phase
* 3 = green_blinking_phase
* 4 = yellow_phase
*/

void setup(){
  pinMode(red_led, OUTPUT);
  pinMode(yellow_led, OUTPUT);
  pinMode(green_led, OUTPUT);
}
void loop(){

}

void traffic_light(){

}
