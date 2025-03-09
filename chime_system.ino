#include <RTClib.h>

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
int F0_sharp = 23;  //Possibly pin 39?
int G0_nat = 25;  //Possibly pin 41?
int G0_sharp = 27;  //Possibly pin 43?
int A1_nat = 29;  //Possibly pin 45?
int A1_sharp = 31;  ///Possibly pin 47?
int restPin = 0;

RTC_DS3231 rtc;
DateTime now;
String toPlay;

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
  now = rtc.now();
  toPlay = scanSongs();
  if (!toPlay.equals("")) {
    decodeSong(toPlay);
    delay(60000);
  }
  
}
