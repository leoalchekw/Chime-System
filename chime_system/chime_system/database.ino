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
 // ====== ENTER SONGS BELOW HERE ======
 // Format: Song [song name](month, day, hour, notes);

 // Define notes used in Happy Birthday
 String happyBdayNotes = "" +
 "sA(0) sA(0) qB(0) qA(0) qD(0) hC#(0) sA(0) sA(0) qB(0) qA(0) " +
 "qE(0) hD(0) sA(0) sA(0) qA(1) qF#(0) qD(0) qC#(0) qB(0) sG(0) " +
 "sG(0) qF#(0) qD(0) qE(0) wD(0) ";
  
 // Play Happy Birthday on December 30th at 11am
 Song happyBDay1(12, 30, 11, happyBdayNotes);
 songs.push_front(happyBDay1);
  
 // Play Happy Birthday on February 15th at 2pm *notes are already defined
 Song happyBDay2(2, 15, 14, happyBdayNotes);
 songs.push_front(happyBDay2);
