void decodeSong(String song) {
// Given a string of notes, song, decodes string into chime notes to be played
// NOTE: the given string must end with a space!
  if (song.length() > 0) { // if notes remain...
    int firstNoteEnd = song.indexOf(' '); // get index of end of first note
    String firstNote = song.substring(0, firstNoteEnd); // create substring containing only the first note
    decodeNote(firstNote); // decode and play the first note
    song.remove(0, firstNoteEnd+1); // remove the first note since it's already been played
    decodeSong(song); // play the remainder of the song
  }  
}

void decodeNote(String note) {
  char noteLength = note.charAt(0); //gets note length character, e.g 'e', 'q', etc, and stores in noteLength
  String noteName = note.substring(1, note.length()); //gets the name of the note and stores it

  int chimePin;

  // this if statement decodes the pitch into an output pin
  if (noteName.equals("A#(1)"))
    {
    chimePin = A1_sharp;
    }
  else if (noteName.equals("B(1)"))
    {
    chimePin = B1_nat;
    }
  else if (noteName.equals("C(1)"))
    {
    chimePin  = C1_nat;
    }
  else if (noteName.equals("C#(1)"))
    {
    chimePin  = C1_sharp;
    }
  else if (noteName.equals("D(0)"))
    {
    chimePin  = D0_nat;
    }
  else if (noteName.equals("D(1)"))
    {
    chimePin  = D1_nat;
    }
  else if (noteName.equals("D#(1)"))
    {
    chimePin  = D1_sharp;
    }
  else if (noteName.equals("E(1)"))
    {
    chimePin  = E1_nat;
    }
  else if (noteName.equals("F(1)"))
    {
    chimePin  = F1_nat;
    }
  else if (noteName.equals("F#(1)"))
    {
    chimePin  = F1_sharp;
    }
  else if (noteName.equals("G(1)"))
    {
    chimePin  = G1_nat;
    }
  else if (noteName.equals("G#(1)"))
    {
    chimePin  = G1_sharp;
    }
  else if (noteName.equals("A(2)"))
    {
    chimePin = A2_nat;
    }
  else if (noteName.equals("A#(2)"))
    {
    chimePin = A2_sharp;
    }
  else
    {
      chimePin  = restPin;
    }

  // this if statement decodes the note length into a note that is played
  if (noteLength == 'e')
    {
      eighthNote(chimePin);
    }
  else if (noteLength == 'q')
    {
      quarterNote(chimePin);
    }
  else if (noteLength == 'h')
    {
      halfNote(chimePin);
    }
  else if (noteLength == 'w')
    {
      wholeNote(chimePin);
    }
}

// define functions for note length
// Parameter: note - output pin of target chime
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
