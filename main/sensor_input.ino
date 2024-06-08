void sensorInput() {
  for (int i = 0; i < 8; i++) {
    if ((analogRead(sensorPin[i])) < sensorThreshold) {
      sensorValues[i] = 0;
    } else {
      sensorValues[i] = 1;
    }
    //Serial.print(analogRead(sensorPin[i]));
    Serial.print(sensorValues[i]);
    Serial.print(" ");
  }
  Serial.println(" ");
  if(sensorPin[0] == 1)
  {
    lastSensor = 0;
  }
  else if(sensorPin[7] == 1)
  {
    lastSensor = 7;
  }
}