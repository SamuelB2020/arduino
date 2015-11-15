// In The Hall Of the Mountain King
// (c) Samuel Bell 2015
// Buzzer wired to GND and Pin 8

#include "pitches.h"

// notes in the melody
int melody[] = {
  // First Section
  NOTE_D3, NOTE_E3, NOTE_F3, NOTE_G3, NOTE_A3, NOTE_F3, NOTE_A3, NOTE_GS3, 
  NOTE_E3, NOTE_GS3, NOTE_G3, NOTE_E3, NOTE_G3,
   NOTE_D3, NOTE_E3, NOTE_F3, NOTE_G3, NOTE_A3, NOTE_F3, NOTE_A3,NOTE_D4, NOTE_C4, 
   NOTE_A3, NOTE_F3, NOTE_A3, NOTE_C4, 0, 
   // First Section Repeat
   NOTE_D3, NOTE_E3, NOTE_F3, NOTE_G3, NOTE_A3, NOTE_F3, NOTE_A3, NOTE_GS3, 
  NOTE_E3, NOTE_GS3, NOTE_G3, NOTE_E3, NOTE_G3,
   NOTE_D3, NOTE_E3, NOTE_F3, NOTE_G3, NOTE_A3, NOTE_F3, NOTE_A3,NOTE_D4, NOTE_C4, 
   NOTE_A3, NOTE_F3, NOTE_A3, NOTE_C4,0,
   //Second Section
   NOTE_A3, NOTE_B3, NOTE_CS4, NOTE_D4, NOTE_E4, NOTE_C4, NOTE_E4, NOTE_F4, NOTE_CS4, NOTE_F4, NOTE_E4, NOTE_C4, NOTE_E4,
   NOTE_A3, NOTE_B3, NOTE_CS4, NOTE_D4, NOTE_E4, NOTE_C4, NOTE_E4, NOTE_F4, NOTE_CS4, NOTE_F4, NOTE_E4,
   //Second Repeat
      NOTE_A3, NOTE_B3, NOTE_CS4, NOTE_D4, NOTE_E4, NOTE_C4, NOTE_E4, NOTE_F4, NOTE_CS4, NOTE_F4, NOTE_E4, NOTE_C4, NOTE_E4,
   NOTE_A3, NOTE_B3, NOTE_CS4, NOTE_D4, NOTE_E4, NOTE_C4, NOTE_E4, NOTE_F4, NOTE_CS4, NOTE_F4, NOTE_E4,
    // Last Section 
  NOTE_D3, NOTE_E3, NOTE_F3, NOTE_G3, NOTE_A3, NOTE_F3, NOTE_A3, NOTE_GS3, 
  NOTE_E3, NOTE_GS3, NOTE_G3, NOTE_E3, NOTE_G3,
   NOTE_D3, NOTE_E3, NOTE_F3, NOTE_G3, NOTE_A3, NOTE_F3, NOTE_A3,NOTE_D4, NOTE_C4, 
   NOTE_A3, NOTE_F3, NOTE_E3, NOTE_D3
};

// note durations: 4 = quarter note, 8 = eighth note, etc.
int noteDurations[] = {
  //First Section
  4, 4, 4, 4, 4, 4, 2, 4, 4, 2, 4, 4, 2, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 1.999, 8,
  // First Repeat
  4, 4, 4, 4, 4, 4, 2, 4, 4, 2, 4, 4, 2, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 1.999, 8,
  // Second Section
  4, 4, 4, 4, 4, 4, 2, 4, 4, 2, 4, 4, 2, 4, 4, 4, 4, 4, 4, 2, 4, 4, 2, 1,
  // Second Repeat
   4, 4, 4, 4, 4, 4, 2, 4, 4, 2, 4, 4, 2, 4, 4, 4, 4, 4, 4, 2, 4, 4, 2, 1,
  // Last Section
   4, 4, 4, 4, 4, 4, 2, 4, 4, 2, 4, 4, 2, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 1.999, 
};

void setup() {
  // iterate over the notes of the melody:
  for (int thisNote = 0; thisNote < 1000; thisNote++) {

    // to calculate the note duration, take one second
    // divided by the note type.
    //e.g. quarter note = 1000 / 4, eighth note = 1000/8, etc.
    int noteDuration = 1000 / noteDurations[thisNote];
    tone(8, melody[thisNote], noteDuration);

    // to distinguish the notes, set a minimum time between them.
    // the note's duration + 30% seems to work well:
    int pauseBetweenNotes = noteDuration * 1.30;
    delay(pauseBetweenNotes);
    // stop the tone playing:
    noTone(8);
  }
}

void loop() {
  // no need to repeat the melody.
}
