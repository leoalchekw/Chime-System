void decodeSong(String song) {
  // pass in a copy of the string
  if (song.length > 0) {
    int firstNoteEnd = copy.indexOf(' ');
    String firstNote = copy.substring(0, firstNoteEnd);
    decodeNote(firstNote);
    copy.remove(0, firstNoteEnd+1); // I think off by 1 error, so added 1
    decodeSong(String copy);
  }  
}

void decodeNote(String note) {
  char noteLength = note.charAt(0);
  String noteName = note.substring(1, note.length);

  int chimePin;

  switch noteName
  {
    case "A(0)":
      chimePin = A0_nat;
      break;
    case "A#(0)":
      chimePin = A0_sharp;
      break;
    case "B(0)":
      chimePin = B0_nat;
      break;
    case "C(0)":
      chimePin  = C0_nat;
      break;
    case "C#(0)":
      chimePin  = C0_sharp;
      break;
    case "D(0)":
      chimePin  = D0_nat;
      break;
    case "D#(0)":
      chimePin  = D0_sharp;
      break;
    case "E(0)":
      chimePin  = E0_nat;
      break;
    case "F(0)":
      chimePin  = F0_nat;
      break;
    case "F#(0)":
      chimePin  = F0_sharp;
      break;
    case "G(0)":
      chimePin  = G0_nat;
      break;
    case "G#(0)":
      chimePin  = G0_sharp;
      break;
    case "A(1)":
      chimePin = A1_nat;
      break;
    case "A#(1)"
      chimePin = A1_sharp;
      break;
    default:
      chimePin  = restPin;
      break;
  }

  switch noteLength
  {
    case "s":
      sixteenthNote(chimePin);
      break;
    case "e":
      eighthNote(chimePine);
      break;
    case "q":
      quarterNote(chimePin);
      break;
    case "h":
      halfNote(chimePin);
      break;
    case "w":
      wholeNote(chimePin);
      break;
  }
}

// define functions for note length
void sixteenthNote(int note)
  {
    digitalWrite(note, HIGH);
    delay(188);
    digitalWrite(note, LOW);
    delay(62);
  }

void eighthNote(int note)
  {
    digitalWrite(note, HIGH);
    delay(375);
    digitalWrite(note, LOW);
    delay(125);
  }

void quarterNote(int note)
  {
    digitalWrite(note, HIGH);
    delay(750);
    digitalWrite(note, LOW);
    delay(250);
  }

void halfNote(int note)
  {
    digitalWrite(note, HIGH);
    delay(1500);
    digitalWrite(note, LOW);
    delay(500);
  }

void wholeNote(int note)
  {
    digitalWrite(note, HIGH);
    delay(3000);
    digitalWrite(note, LOW);
    delay(1000);
  }
