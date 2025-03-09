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
 * 0-1    | Octave of note     |
 * -----------------------------
 * day    | Value 1-31         |
 * -----------------------------
 * month  | Value 1-12         |
 * =============================
 */
 // ====== ENTER SONGS BELOW HERE ======


// Define notes used in songs
String happyBdayNotes = String("eA(0) eA(0) qB(0) qA(0) qD(0) hC#(0) eA(0) eA(0) qB(0) qA(0) qE(0) hD(0) eA(0) eA(0) qA(1) qF#(0) qD(0) qC#(0) qB(0) eG(0) eG(0) qF#(0) qD(0) qE(0) wD(0) ");


//Define dates when songs should play (Month(1-12), Day(1-31), Hour(0-23), Minute(0-59))
DateTime happyBdayWifeDate = createDate(12, 12, 18, 12);
DateTime happyBdayDaughterDate = createDate(1, 1, 18, 1);

String scanSongs() {
  if (compareDate(happyBdayWifeDate)) {
    return happyBdayNotes;
  }
  else if (compareDate(happyBdayDaughterDate)) {
    return happyBdayNotes;
  }
  else {
    return "";
  }
}