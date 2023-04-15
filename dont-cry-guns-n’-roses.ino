int piezoPin = 7; // digital pin for speaker

int speed=90; // melody speed

#include "pitches.h" // library where defined notes requency

int dontcrynotes[] = {
    NOTE_A3, NOTE_E4, NOTE_A4, NOTE_E5, NOTE_C5, NOTE_A4, NOTE_E4,
    NOTE_D4, NOTE_A4, NOTE_D5, NOTE_F5, NOTE_D5, NOTE_A4, NOTE_D4,
    NOTE_G3, NOTE_B3, NOTE_D4, NOTE_G4,  NOTE_G5, NOTE_D5, NOTE_G4, NOTE_D4,
    NOTE_C4, NOTE_E4, NOTE_G4,
    NOTE_B3, NOTE_D4, NOTE_G4,
    NOTE_C4, NOTE_B3,
  };

  int dontcrynotesduration[] = {
    10, 5, 5, 5, 5, 5, 5, 10, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 0
  };

void setup() {
  int dontcrynotes[] = {
    NOTE_A3, NOTE_E4, NOTE_A4, NOTE_E5, NOTE_C5, NOTE_A4, NOTE_E4,
    NOTE_D4, NOTE_A4, NOTE_D5, NOTE_F5, NOTE_D5, NOTE_A4, NOTE_D4,
    NOTE_G3, NOTE_B3, NOTE_D4, NOTE_G4,  NOTE_G5, NOTE_D5, NOTE_G4, NOTE_D4,
    NOTE_C4, NOTE_E4, NOTE_G4,
    NOTE_B3, NOTE_D4, NOTE_G4,
    NOTE_C4, NOTE_B3,
  };

  int dontcrynotesduration[] = {
    10, 5, 5, 5, 5, 5, 5, 10, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 0
  };

  for (int thisNote = 0; dontcrynotes[thisNote]!=-1; thisNote++) {
  if (thisNote == 31)
  {
    thisNote = 0;
    // delay(350);
  }
  int noteDuration = speed*dontcrynotesduration[thisNote];
  tone(7, dontcrynotes[thisNote], noteDuration*.98);
  Serial.println(dontcrynotes[thisNote]);

  delay(noteDuration);
  noTone(3);
  }

}

void loop() {

}
