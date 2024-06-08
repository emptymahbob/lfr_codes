int sensorValues[8];
int sensorPin[] = { A7, A6, A5, A4, A3, A2, A1, A0 };
int sensorThreshold = 935;

double Kp = 3, Ki = 2.5, Kd = 2;
double integral, derivative;
int error, lastError, baseSpeed = 100, leftMotorSpeed, rightMotorSpeed;
int lastSensor;

#define lms 5
#define lmb 6
#define lmf 7
#define rmf 10
#define rmb 9
#define rms 11

void setup() {
  Serial.begin(9600);
  for (int i = 0; i < 7; i++) {
    pinMode(sensorPin[i], INPUT);
  }
  pinMode(rms, OUTPUT);
  pinMode(rmb, OUTPUT);
  pinMode(rmf, OUTPUT);
  pinMode(lmf, OUTPUT);
  pinMode(lmb, OUTPUT);
  pinMode(lms, OUTPUT);  
}

void loop() {
  sensorInput();
  calculateError();
  pid();
  motor(leftMotorSpeed, rightMotorSpeed);
  //motor(100,100);
}
