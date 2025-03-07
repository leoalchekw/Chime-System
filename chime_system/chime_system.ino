#include <ListLib.h>

#include <RTClib.h>

#include <List.hpp>
// Define which pins the chimes are attached too
int A0_nat = 24;
int A0_sharp = 26;
int B0_nat = 28;
int C0_nat = 30;
int C0_sharp = 22;
int D0_nat = 32;
int D0_sharp = 39;
int E0_nat = 36;
int F0_nat = 38;
int F0_sharp = 39;  //Possibly pin 23?
int G0_nat = 41;  //Possibly pin 25?
int G0_sharp = 43;  //Possibly pin 27?
int A1_nat = 45;  //Possibly pin 29?
int A1_sharp = 47;  ///Possibly pin 31?
int restPin = 0;

typedef struct song{
    int month;
    int day;
    int hour;
    String notes;
  };

song create_song(int month, int day, int hour, String notes)
{
  song toReturn;
  toReturn.month = month;
  toReturn.day = day;
  toReturn.hour = hour;
  toReturn.notes = notes;
  return toReturn;
};

List<song> songs;
RTC_DS3231 rtc;
DateTime now;

void fullScale() {
    sixteenthNote(A0_nat);
    sixteenthNote(restPin);
    eighthNote(B0_nat);
    eighthNote(restPin);
    quarterNote(C0_sharp);
    quarterNote(restPin);
    halfNote(D0_nat);
    halfNote(restPin);
    wholeNote(E0_nat);
    wholeNote(restPin);
    halfNote(F0_sharp);
    halfNote(restPin);
    quarterNote(G0_sharp);
    quarterNote(restPin);
    eighthNote(A1_nat);
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
  fullScale();
  DateTime now = rtc.now();
  song toPlay = scanSongs();
  if (&toPlay != NULL) {
    decodeSong(String(toPlay.notes));
  }
}
