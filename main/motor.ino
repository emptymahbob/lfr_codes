void motor(int lmspeed, int rmspeed) {
  if (lmspeed > 0) {
    if (lmspeed > 250) {
      rmspeed = rmspeed - (lmspeed - 250);
      lmspeed = 250;
    }
    digitalWrite(lmf, HIGH);
    digitalWrite(lmb, LOW);
  } else if (lmspeed < 0) {
    lmspeed = -lmspeed;
    if (lmspeed > 250) {
      lmspeed = 250;
    }
    digitalWrite(lmf, LOW);
    digitalWrite(lmb, HIGH);
  } else {
    digitalWrite(lmf, HIGH);
    digitalWrite(lmb, HIGH);
  }
  if (rmspeed > 0) {
    if (rmspeed > 250) {
      lmspeed = lmspeed - (rmspeed - 250);
      rmspeed = 250;
    }
    digitalWrite(rmf, HIGH);
    digitalWrite(rmb, LOW);
  } else if (rmspeed < 0) {
    rmspeed = -rmspeed;
    if (rmspeed > 250) {
      rmspeed = 250;
    }
    digitalWrite(rmf, LOW);
    digitalWrite(rmb, HIGH);
  } else {
    digitalWrite(lmf, HIGH);
    digitalWrite(lmb, HIGH);
  }
  analogWrite(lms, lmspeed);
  analogWrite(rms, rmspeed);
  /*Serial.print(lmspeed);
  Serial.print(" ");
  Serial.print(rmspeed);
  Serial.println(" ");*/
}