#include <RTClib.h>

// Define which pins the chimes are attached too
int A1_sharp = 24;
int B1_nat = 26;
int C1_nat = 28;
int C1_sharp = 30;
int D0_nat = 22;
int D1_nat = 32;
int D1_sharp = 34;
int E1_nat = 36;
int F1_nat = 38;
int F1_sharp = 23;  
int G1_nat = 25;  
int G1_sharp = 27;  
int A2_nat = 29;  
int A2_sharp = 31;
int restPin = 0;

//Declare objects
RTC_DS3231 rtc; // RTC object stored in rtc
DateTime now; // current date and time stored in now
String toPlay; // notes to be played stored in toPlay
  
void setup() {

  // initialize the chime pins as outputs
  pinMode(A1_sharp, OUTPUT);
  pinMode(B1_nat, OUTPUT);
  pinMode(C1_nat, OUTPUT);
  pinMode(C1_sharp, OUTPUT);
  pinMode(D0_nat, OUTPUT);
  pinMode(D1_nat, OUTPUT);
  pinMode(D1_sharp, OUTPUT);
  pinMode(E1_nat, OUTPUT);
  pinMode(F1_nat, OUTPUT);
  pinMode(F1_sharp, OUTPUT);
  pinMode(G1_nat, OUTPUT);
  pinMode(G1_sharp, OUTPUT);
  pinMode(A2_nat, OUTPUT);
  pinMode(A2_sharp, OUTPUT);

  // If a connection is established, begin RTC, otherwise try again
  if(!rtc.begin()) {
    delay(1000);
    setup();
  } 
}

void loop() {
  now = rtc.now(); // get current date and time
  toPlay = scanSongs(); // check if chimes should play
  if (!toPlay.equals("")) { // if no notes to be played, do not play
    decodeSong(toPlay);
    delay(60000); 
  }
}
