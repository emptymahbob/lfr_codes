void Break(int d) {
  digitalWrite(lmf, HIGH);
  digitalWrite(lmb, HIGH);
  digitalWrite(rmf, HIGH);
  digitalWrite(rmb, HIGH);
  delay(d);
}

void rightTurn() {
//Break(1000);
  motor(200, 200);
  delay(70);
  Break(100);
  motor(200, -200);
  delay(70);

    sensorInput();
  while (sensorValues[0] + sensorValues[1] + sensorValues[2] + sensorValues[3] + sensorValues[4] + sensorValues[5] == 0) {
    sensorInput();
  }
  delay(20);
  Break(100);
}

void leftTurn() {
//Break(1000);
  motor(200, 200);
  delay(70);
  Break(100);
  motor(-200, 200);
  delay(70);
  sensorInput();
  while (sensorValues[1] + sensorValues[2] + sensorValues[3] + sensorValues[4] + sensorValues[5] + sensorValues[6] == 0) {
    sensorInput();
  }
  delay(20);
  Break(100);
}


void longRightTurn() {
  motor(200, 200);
  delay(90);
  Break(100);
  motor(200, -200);
  delay(40);
  sensorInput();
  while (sensorValues[0] + sensorValues[1] + sensorValues[2] + sensorValues[3] + sensorValues[4] + sensorValues[5] == 0) {
    sensorInput();
  }
  Break(100);
}




void longLeftTurn() {
  motor(200, 200);
  delay(90);
  Break(100);
  motor(-200, 200);
  delay(40);
  sensorInput();
  while (sensorValues[1] + sensorValues[2] + sensorValues[3] + sensorValues[4] + sensorValues[5] + sensorValues[6] == 0) {
    sensorInput();
  }
  Break(100);
}