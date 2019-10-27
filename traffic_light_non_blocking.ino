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
unsigned long time_since_phase_switch=0;
unsigned long curr_time=0;
unsigned long old_curr_time=0;
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
  //getting the current runtime
  curr_time = millis();
  //adding new the time_since_phase_switch
  time_since_phase_switch = time_since_phase_switch + (curr_time - old_curr_time);
  //checking the state with switch:
  //in case calculate the time
  switch (traffic_light_state) {
    case 0: break;
      if (time_since_phase_switch > red_phase_time) {
        /* code */
      }
    case 1: break;
    case 2: break;
    case 3: break;
    case 4: break;
    default:
  }

}
