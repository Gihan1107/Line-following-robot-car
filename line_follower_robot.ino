#define in1 9
#define in2 8
#define in3 7
#define in4 6
#define enA 10
#define enB 5
int M1_Speed = 100; // speed of motor 1
int M2_Speed = 105; // speed of motor 2
int LeftRotationSpeed = 100; // Left Rotation Speed
int RightRotationSpeed = 100; // Right Rotation Speed
void setup() {
pinMode(in1,OUTPUT);
pinMode(in2,OUTPUT);
pinMode(in3,OUTPUT);
pinMode(in4,OUTPUT);
pinMode(enA,OUTPUT);
pinMode(enB,OUTPUT);
pinMode(A0, INPUT); // initialize Left sensor as an input
pinMode(A1, INPUT);
pinMode(A2, INPUT); // initialize Left sensor as an input
pinMode(A3, INPUT);
pinMode(A4, INPUT); // initialize Left sensor as an input

Serial.begin(9600); //for debugging

delay(3000);
}
void loop() {
int SENSOR_1 = digitalRead(A0);
int SENSOR_2 = digitalRead(A1);
int SENSOR_3 = digitalRead(A2);
int SENSOR_4 = digitalRead(A3);
int SENSOR_5 = digitalRead(A4);



if(SENSOR_1==1 && SENSOR_2==1 && SENSOR_3==0 && SENSOR_4==1 && SENSOR_5==1) 
  {
    forward(); //FORWARD
  }
else if(SENSOR_1==1 && SENSOR_2==1 && SENSOR_3==0 && SENSOR_4==0 && SENSOR_5==0) 
  {
    right(); //Move Right
  }
else if(SENSOR_1==0 && SENSOR_2==0 && SENSOR_3==0 && SENSOR_4==1 && SENSOR_5==1) 
  {
    left(); //Move Left
  }

else if(SENSOR_1==1 && SENSOR_2==1 && SENSOR_3==1 && SENSOR_4==0 && SENSOR_5==0) 
  {
    right(); 
  }

else if(SENSOR_1==0 && SENSOR_2==0 && SENSOR_3==1 && SENSOR_4==1 && SENSOR_5==1) 
  {
    left();
  }
else if(SENSOR_1==1 && SENSOR_2==1 && SENSOR_3==1 && SENSOR_4==0 && SENSOR_5==1) 
  {
    right(); 
  }

else if(SENSOR_1==1 && SENSOR_2==0 && SENSOR_3==1 && SENSOR_4==1 && SENSOR_5==1) 
  {
    left(); 
  }
else if(SENSOR_1==1 && SENSOR_2==1 && SENSOR_3==1 && SENSOR_4==1 && SENSOR_5==0) 
  {
    right(); 
  }

else if(SENSOR_1==0 && SENSOR_2==1 && SENSOR_3==1 && SENSOR_4==1 && SENSOR_5==1) 
  {
    left(); 
  }

}

void forward()
{
digitalWrite(in1, HIGH);
digitalWrite(in2, LOW);
digitalWrite(in3, HIGH);
digitalWrite(in4, LOW);
analogWrite(enA, M1_Speed);
analogWrite(enB, M2_Speed);
}
void backward()
{
digitalWrite(in1, LOW);
digitalWrite(in2, HIGH);
digitalWrite(in3, LOW);
digitalWrite(in4, HIGH);
analogWrite(enA, M1_Speed);
analogWrite(enB, M2_Speed);
}
void right()
{
digitalWrite(in1, LOW);
digitalWrite(in2, HIGH);
digitalWrite(in3, HIGH);
digitalWrite(in4, LOW);
analogWrite(enA, LeftRotationSpeed);
analogWrite(enB, RightRotationSpeed);
}
void left()
{
digitalWrite(in1, HIGH);
digitalWrite(in2, LOW);
digitalWrite(in3, LOW);
digitalWrite(in4, HIGH);
analogWrite(enA, LeftRotationSpeed);
analogWrite(enB, RightRotationSpeed);
}
void Stop()
{
digitalWrite(in1, LOW);
digitalWrite(in2, LOW);
digitalWrite(in3, LOW);
digitalWrite(in4, LOW);
}
