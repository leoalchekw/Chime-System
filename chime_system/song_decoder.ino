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
  // giant switch statement
  // 1. find appropriate pin based off of note and octave (switch)
  // 2. call appropriate function based off of note length char (switch)
  // using pin found in 1. as parameter
}
