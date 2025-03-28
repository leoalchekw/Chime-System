#include "RTCLib.h"
#include <list>
// Define which pins the chimes are attached too
#define A0_nat 24;
#define A0_sharp 26;
#define B0_nat 28;
#define C0_nat 30;
#define C0_sharp 22;
#define D0_nat 32;
#define D0_sharp 39;
#define E0_nat 36;
#define F0_nat 38;
#define F0_sharp 39;  //Possibly pin 23?
#define G0_nat 41;  //Possibly pin 25?
#define G0_sharp 43;  //Possibly pin 27?
#define A1_nat 45;  //Possibly pin 29?
#define A1_sharp 47;  ///Possibly pin 31?

struct Song{
    String songNotes;
    Song(int month, int day, int hour, String notes) {
      songNotes = notes;
      DateTime time = DateTime(2000, month, day, hour); // year does not matter
    }
  };
  
list<Song> songs;
RTC_DS3231 rtc;

void fullScale() {
    sixteenthNote(A0_nat);
    sixteenthNoteRest();
    eighthNote(B0_nat);
    eightNoteRest();
    quarterNote(C0_sharp);
    quarterNoteRest();
    halfNote(D0_nat);
    halfNoteRest();
    wholeNote(E0_nat);
    wholeNoteRest();
    halfNote(F0_sharp);
    halfNoteRest();
    quarterNote(G0_sharp);
    quarternoteRest();
    eightNote(A1_nat);
  }
  
void setup() {
  // initialize the chime pins as outputs
  pinMode(A0_nat, OUTPUT);
  pinMode(A0_sharp, OUTPUT);
  pinMode(B0_nat, OUTPUT);
  pinMode(C0_nat, OUTPUT);
  pinMode(C0_sharp, OUTPUT);
  pinMode(D0_nat, OUTPUT);
  pinMode(D0_sharp, OUTPUT);
  pinMode(E0_nat, OUTPUT);
  pinMode(F0_nat, OUTPUT);
  pinMode(F0_sharp, OUTPUT);
  pinMode(G0_nat, OUTPUT);
  pinMode(G0_sharp, OUTPUT);
  pinMode(A1_nat, OUTPUT);
  pinMode(A1_sharp, OUTPUT);

  if(!rtc.begin()) {
    delay(1000);
    setup();
  }

}

void loop() {
  DateTime now = rtc.now();
  Song toPlay = scanSongs();
  if (toPlay != null) {
    decodeSong(String(toPlay.songNotes));
  }
}
