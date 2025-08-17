#include "alphabot_drivers.h"
#include "line_follower.h"

#define NUM_SENSORS 5
int sensorValues[NUM_SENSORS];
Line_follower__main_out _res;
Line_follower__main_mem _mem;
#define Side_left_IR 8
#define Side_right_IR 11

unsigned long previoustime=millis();

void setup()
{
  init_devices();
  forward();
  pinMode(Side_left_IR, INPUT);
  pinMode(Side_right_IR, INPUT);
  Serial.begin(115200);
}

void loop()
{
  AnalogRead(sensorValues);

  char ir = ir_read();
  int ir_left = 0, ir_right = 0;
  if (ir == 'b') { 
    ir_left = 1;
    ir_right = 1;
  } else if (ir == 'l') {
    ir_left = 1;
  } else if (ir == 'r') {
    ir_right = 1;
  }
  int side_left_ir = digitalRead(Side_left_IR);
  int side_right_ir = digitalRead(Side_right_IR);
  unsigned long currenttime=millis();
  bool sec=0;
  if(currenttime-previoustime>=500)
  {
	sec=1;
	previoustime=currenttime;
  }
  Line_follower__main_step(sensorValues[0], sensorValues[1], sensorValues[2], sensorValues[3], sensorValues[4], ir_left, ir_right, side_left_ir, side_right_ir, sec, &_res, &_mem);
  Serial.print(_res.v_l);
  Serial.print(" ");
  Serial.print(_res.v_r);
  Serial.print(" ");

  // _res.v_l = 0;
  // _res.v_r=0;


  Serial.print(sensorValues[0]);
  Serial.print(" ");
  Serial.print(sensorValues[1]);
  Serial.print(" ");
  Serial.print(sensorValues[2]);
  Serial.print(" ");
  Serial.print(sensorValues[3]);
  Serial.print(" ");
  Serial.print(sensorValues[4]);
  Serial.print(" ");
  Serial.print(ir_left);
  Serial.print(" ");
  Serial.print(ir_right);
  Serial.print(" ");
  Serial.print(_res.dir);
  Serial.print(" ");
  Serial.print(side_left_ir);
  Serial.print(" ");
  Serial.print(side_right_ir);
  Serial.print(" ");

  Serial.println(" ");

  if(_res.dir == 3){
	left();
  }
  else if(_res.dir == 4){
	right();
  }
  else if(_res.dir == 5){
	backward();
  }
  else if(_res.dir == 6){
    forward();
  }
  else if(_res.dir == 0){
    stop();
  }
  else	forward();
  
  SetSpeed(abs(_res.v_l), abs(_res.v_r));

  delay(20);
}