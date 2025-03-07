void decodeSong(String song) {
  // pass in a copy of the string
  if (song.length() > 0) {
    int firstNoteEnd = song.indexOf(' ');
    String firstNote = song.substring(0, firstNoteEnd);
    decodeNote(firstNote);
    song.remove(0, firstNoteEnd+1); // I think off by 1 error, so added 1
    decodeSong(song);
  }  
}

void decodeNote(String note) {
  char noteLength = note.charAt(0);
  String noteName = note.substring(1, note.length());

  int chimePin;

  if (noteName =  "A(0)")
    {
    chimePin = A0_nat;
    }
  else if (noteName =  "A#(0)")
    {
    chimePin = A0_sharp;
    }
  else if (noteName =  "B(0)")
    {
    chimePin = B0_nat;
    }
  else if (noteName =  "C(0)")
    {
    chimePin  = C0_nat;
    }
  else if (noteName =  "C#(0)")
    {
    chimePin  = C0_sharp;
    }
  else if (noteName =  "D(0)")
    {
    chimePin  = D0_nat;
    }
  else if (noteName =  "D#(0)")
    {
    chimePin  = D0_sharp;
    }
  else if (noteName =  "E(0)")
    {
    chimePin  = E0_nat;
    }
  else if (noteName =  "F(0)")
    {
    chimePin  = F0_nat;
    }
  else if (noteName =  "F#(0)")
    {
    chimePin  = F0_sharp;
    }
  else if (noteName =  "G(0)")
    {
    chimePin  = G0_nat;
    }
  else if (noteName =  "G#(0)")
    {
    chimePin  = G0_sharp;
    }
  else if (noteName =  "A(1)")
    {
    chimePin = A1_nat;
    }
  else if (noteName =  "A#(1)")
    {
    chimePin = A1_sharp;
    }
  else
    {
      chimePin  = restPin;
    }

  if (noteLength =  "s")    
    {
      sixteenthNote(chimePin);
    }
  else if (noteLength =  "e")
    {
      eighthNote(chimePin);
    }
  else if (noteName =  "q")
    {
      quarterNote(chimePin);
    }
  else if (noteName =  "h")
    {
      halfNote(chimePin);
    }
  else if (noteName =  "w")
    {
      wholeNote(chimePin);
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
