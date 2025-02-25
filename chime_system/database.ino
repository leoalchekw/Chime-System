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
 * s      | Sixteenth note     |
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
void setup() {
   struct {
    String notes;
    int day;
    int month;
  } song;
  // ====== ENTER SONGS BELOW HERE ======
  song happyBDay;
  happyBDay.notes = "" +
  "sA(0) sA(0) qB(0) qA(0) qD(0) hC#(0) sA(0) sA(0) qB(0) qA(0) " +
  "qE(0) hD(0) sA(0) sA(0) qA(1) qF#(0) qD(0) qC#(0) qB(0) sG(0) " +
  "sG(0) qF#(0) qD(0) qE(0) wD(0)";
  happyBDay.day = 1;
  happyBDay.month = 1;

  song yourSongHere;
}
