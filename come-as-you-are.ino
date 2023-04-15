int piezoPin = 7; // digital pin for speaker

int speed=90; // melody speed

#include "pitches.h" // library where defined notes requency

int comeasyouarenotes[] = {
NOTE_B3, NOTE_E3, NOTE_F3, NOTE_FS3, NOTE_A3,  NOTE_FS3, NOTE_A3, NOTE_FS3, NOTE_FS3, NOTE_F3, NOTE_E3, NOTE_B3, NOTE_E3, NOTE_E3, 
};

int comeasyouarenotesduration[] = {
  5, 5, 5, 10, 5, 5, 5, 5, 5, 5, 5, 5, 5, 10, 
};

void setup() {
  for (int thisNote = 0; comeasyouarenotes[thisNote]!=-1; thisNote++) {
  if (thisNote == 14)
  {
    thisNote = 0;
  }
  int noteDuration = speed*comeasyouarenotesduration[thisNote];
  tone(7, comeasyouarenotes[thisNote], noteDuration*.98);
  Serial.println(comeasyouarenotes[thisNote]);

  delay(noteDuration);
  noTone(3);
  }
}

void loop() {

}
