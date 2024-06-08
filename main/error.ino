void calculateError() {
  int weightedSum = 0;
  int sum = 0;
  for (int i = 0; i < 8; i++) {
    weightedSum += ((i + 1) * 10 * sensorValues[i]);
    sum += sensorValues[i];
  }
  if (sum != 0) {
    /*if ((sensorValues[0] == 0 && sensorValues[1] == 0 && sensorValues[2] == 0 && sensorValues[3] == 1 && sensorValues[4] == 1 && sensorValues[5] == 1 && sensorValues[6] == 1) || (sensorValues[0] == 0 && sensorValues[1] == 0 && sensorValues[2] == 1 && sensorValues[3] == 1 && sensorValues[4] == 1 && sensorValues[5] == 1 && sensorValues[6] == 1)) {
      rightTurn();
    } else if ((sensorValues[0] == 1 && sensorValues[1] == 1 && sensorValues[2] == 1 && sensorValues[3] == 1 && sensorValues[4] == 0 && sensorValues[5] == 0 && sensorValues[6] == 0) || (sensorValues[0] == 1 && sensorValues[1] == 1 && sensorValues[2] == 1 && sensorValues[3] == 1 && sensorValues[4] == 1 && sensorValues[5] == 0 && sensorValues[6] == 0)) {
      leftTurn();
    } else if ((sensorValues[0] == 1 || sensorValues[1] == 1 || sensorValues[2] == 1 || sensorValues[3] == 1 || sensorValues[4] == 1) && (sensorValues[5] == 0) && (sensorValues[6] == 1)) {
      longRightTurn();
    } else if ((sensorValues[0] == 1) && (sensorValues[1] == 0) && (sensorValues[2] == 1 || sensorValues[3] == 1 || sensorValues[4] == 1 || sensorValues[5] == 1 || sensorValues[6] == 1)) {
      longLeftTurn();
    } else if ((sensorValues[1] == 1 && sensorValues[2] == 1 && sensorValues[3] == 1 && sensorValues[4] == 1 && sensorValues[5] == 1) || (sensorValues[0] == 1 && sensorValues[1] == 0 && sensorValues[2] == 0 && sensorValues[3] == 0 && sensorValues[4] == 0 && sensorValues[5] == 0 && sensorValues[6] == 1)) {
      rightTurn();
    } else {
      err = (weightedSum / sum) - 40;
    }*/
    error = (weightedSum / sum) - 45;
  } else {
    if (lastSensor == 0) {
      rightTurn();
    } else if (lastSensor == 7) {
      leftTurn();
    } 
  }

}