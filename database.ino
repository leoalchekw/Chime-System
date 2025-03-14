/*
 * 
 * Each song is made up of a day/month on which it will be played,
 * and the notes for the chime system to play. We have provided a key
 * to explain the various symbols, and an example song using the
 * available pitches.
 * 
 * Key
 * =============================
 * Symbol | Meaning            |
 * -----------------------------
 * A-G    | 12 tone scale note |
 * -----------------------------
 * R      | Rest               |
 * -----------------------------
 * e      | Eighth note        |
 * -----------------------------
 * q      | Quarter note       |
 * -----------------------------
 * h      | Half note          |
 * -----------------------------
 * w      | Whole note         |
 * -----------------------------
 * 0-2    | Octave of note     |
 * -----------------------------
 * day    | Value 1-31         |
 * -----------------------------
 * month  | Value 1-12         |
 * =============================
 */
 // ====== ENTER SONGS BELOW HERE ======


// Define notes used in songs
String happyBdayNotes = String("eA#(1) eA#(1) qC(1) qA#(1) qD#(1) hD(1) eA#(1) eA#(1) qC(1) qA#(1) qF(1) hD#(1) eA#(1) eA#(1) qA#(2) qG(1) qD#(1) qD(1) hC(1) eG#(1) eG#(1) qG(1) qD#(1) qF(1) wD#(1) ");

//Define dates when songs should play (Month(1-12), Day(1-31), Hour(0-23), Minute(0-59))
DateTime happyBdayWifeDate = createDate(3, 10, 14, 12); // PLACEHOLDER DATE, PLEASE CHANGE
DateTime happyBdayDaughterDate = createDate(1, 1, 18, 1); // PLACEHOLDER DATE, PLEASE CHANGE

// Runs in loop to check if chimes should be played
String scanSongs() {
  if (compareDate(happyBdayWifeDate)) { // if Wife birthday
    return happyBdayNotes;
  }
  else if (compareDate(happyBdayDaughterDate)) { // if Daughter birthday
    return happyBdayNotes;
  }
  else { // if no song is playing, chime the hour or half hour
    return chimeHours();
  }
}
