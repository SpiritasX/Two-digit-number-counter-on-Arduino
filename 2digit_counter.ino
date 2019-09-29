//Pins for first display
int jedanNula[] = {10, 11, 12, A0, A1, A2};
int jedanJedan[] = {10, A2};
int jedanDva[] = {10, 11, 13, A0, A1};
int jedanTri[] = {10, 11, 13 , A1, A2};
int jedanCetiri[] = {10, 12, 13, A2};
int jedanPet[] = {11, 12, 13, A1, A2};
int jedanSest[] = {11, 12, 13, A0 , A1, A2};
int jedanSedam[] = {10, 11, A2};
int jedanOsam[] = {10, 11, 12, 13, A0, A1, A2};
int jedanDevet[] = {10, 11, 12, 13, A1, A2};

//Pins for second display
int dvaNula[] = {6, 7, 8, A3, A4, A5};
int dvaJedan[] = {6, A5};
int dvaDva[] = {6, 7, 9, A3, A4};
int dvaTri[] = {6, 7, 9, A4, A5};
int dvaCetiri[] = {6, 8, 9, A5};
int dvaPet[] = {7, 8, 9, A4, A5};
int dvaSest[] = {7, 8, 9, A3, A4, A5};
int dvaSedam[] = {6, 7, A5};
int dvaOsam[] = {6, 7, 8, 9, A3, A4, A5};
int dvaDevet[] = {6, 7, 8, 9, A4, A5};

//Counters
int k = 0, j = 0;

//Sets all pins to HIGH which means that no current is going through displays
void setup() {
  for (int i = 6; i < 14; i++) {
    pinMode(i, OUTPUT);
    digitalWrite(i, HIGH);
    delay(1);
  }
  pinMode(A0, OUTPUT);
  pinMode(A1, OUTPUT);
  pinMode(A2, OUTPUT);
  pinMode(A3, OUTPUT);
  pinMode(A4, OUTPUT);
  pinMode(A5, OUTPUT);
  digitalWrite(A0, HIGH);
  digitalWrite(A1, HIGH);
  digitalWrite(A2, HIGH);
  digitalWrite(A3, HIGH);
  digitalWrite(A4, HIGH);
  digitalWrite(A5, HIGH);
}

//Function for changing the pins to LOW depending on which number has to show up
void desetica() {
  if (k == 0) {
    for (int i = 0; i < 6; i++) {
      digitalWrite(jedanNula[i], LOW);
      delay(1);
    }
    return;  //after every number, returns to loop() function
  } else if (k == 1) {
    for (int i = 0; i < 2; i++) {
      digitalWrite(jedanJedan[i], LOW);
      delay(1);
    }
    return;
  } else if (k == 2) {
    for (int i = 0; i < 5; i++) {
      digitalWrite(jedanDva[i], LOW);
      delay(1);
    }
    return;
  } else if (k == 3) {
    for (int i = 0; i < 5; i++) {
      digitalWrite(jedanTri[i], LOW);
      delay(1);
    }
    return;
  } else if (k == 4) {
    for (int i = 0; i < 4; i++) {
      digitalWrite(jedanCetiri[i], LOW);
      delay(1);
    }
    return;
  } else if (k == 5) {
    for (int i = 0; i < 5; i++) {
      digitalWrite(jedanPet[i], LOW);
      delay(1);
    }
    return;
  } else if (k == 6) {
    for (int i = 0; i < 6; i++) {
      digitalWrite(jedanSest[i], LOW);
      delay(1);
    }
    return;
  } else if (k == 7) {
    for (int i = 0; i < 3; i++) {
      digitalWrite(jedanSedam[i], LOW);
      delay(1);
    }
    return;
  } else if (k == 8) {
    for (int i = 0; i < 7; i++) {
      digitalWrite(jedanOsam[i], LOW);
      delay(1);
    }
    return;
  } else if (k == 9) {
    for (int i = 0; i < 6; i++) {
      digitalWrite(jedanDevet[i], LOW);
      delay(1);
    }
    if(j == 9 && k == 9)  //checks if both numbers are showing 9 and sets the first digit to 0
      k = -1;
    return;
  }
}

//function for second display
void jedinica() {
  if (j == 0) {
    for (int i = 0; i < 6; i++) {
      digitalWrite(dvaNula[i], LOW);
      delay(1);
    }
    return;
  } else if (j == 1) {
    for (int i = 0; i < 2; i++) {
      digitalWrite(dvaJedan[i], LOW);
      delay(1);
    }
    return;
  } else if (j == 2) {
    for (int i = 0; i < 5; i++) {
      digitalWrite(dvaDva[i], LOW);
      delay(1);
    }
    return;
  } else if (j == 3) {
    for (int i = 0; i < 5; i++) {
      digitalWrite(dvaTri[i], LOW);
      delay(1);
    }
    return;
  } else if (j == 4) {
    for (int i = 0; i < 4; i++) {
      digitalWrite(dvaCetiri[i], LOW);
      delay(1);
    }
    return;
  } else if (j == 5) {
    for (int i = 0; i < 5; i++) {
      digitalWrite(dvaPet[i], LOW);
      delay(1);
    }
    return;
  } else if (j == 6) {
    for (int i = 0; i < 6; i++) {
      digitalWrite(dvaSest[i], LOW);
      delay(1);
    }
    return;
  } else if (j == 7) {
    for (int i = 0; i < 3; i++) {
      digitalWrite(dvaSedam[i], LOW);
      delay(1);
    }
    return;
  } else if (j == 8) {
    for (int i = 0; i < 7; i++) {
      digitalWrite(dvaOsam[i], LOW);
      delay(1);
    }
    return;
  } else if (j == 9) {
    for (int i = 0; i < 6; i++) {
      digitalWrite(dvaDevet[i], LOW);
      delay(1);
    }
    j = -1;  //sets the second display to 0
    k++;     //every 10 iterations of this function, counts once for first display
    return;
  }
}

void loop() {
  //after every return resets all the pins to HIGH
  for (int i = 6; i < 14; i++) {
    digitalWrite(i, HIGH);
    delay(1);
  }
  digitalWrite(A0, HIGH);
  digitalWrite(A1, HIGH);
  digitalWrite(A2, HIGH);
  digitalWrite(A3, HIGH);
  digitalWrite(A4, HIGH);
  digitalWrite(A5, HIGH);
  //calls for both functions
  desetica();
  jedinica();
  //counter for second display
  j++;
  //counts every number as one second. Can be changed to lower value for faster iterations or reverse.
  delay(1000);
}
