//This code will excute on Arduino IDE

//servo calibration using PCA9685 (16 CHANEL SERVO DRIVER)

#include<Wire.h>                       // foe I2C protocal
#include<Adafruit_PWMServoDriver.h>   // Library to interface with PCA9685
  

//servo calibration using PCA9685 (16 CHANEL SERVO DRIVER)

#include<Wire.h>                       // foe I2C protocal
#include<Adafruit_PWMServoDriver.h>   // Library to interface with PCA9685
  

Adafruit_PWMServoDriver pwm = Adafruit_PWMServoDriver();  // Create PWM driver object

// set as per your servo
#define servo_min 150   // 205 steps ~ 1ms (150 to aviod mechanical error)
#define servo_max 500   //  410 steps ~ 2ms (500 to aviod mechanical error)

int step;

void setup() {

  Serial.begin(9600);
  pwm.begin();           // communication start between arduino and PCA9685
  pwm.setPWMFreq(50);   // standard frequency for mg90s servo or sg90 servo
  step = map(90,0,180,servo_min,servo_max);  // calculate step for 90 degree of each servo 

}

void loop() {
   // Calibrate all 12 servo channels to 90°
  for(int ch=0;ch<12;ch++){   
    
    pwm.setPWM(ch,0,step);    // set all 12 servo to 90 degree 

  }

  while(1);  //stop after 1 calibration 

}
