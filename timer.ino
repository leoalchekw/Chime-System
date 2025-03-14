/* Create DateTime object with given parameters
   Parameters:
   month - int, 1-12 representing month
   day - int, 1-31 representing day
   hour - int, 0-23 representing hour
   minute - int, 0-59 representing minute
   Returns:
   DateTime object
*/
DateTime createDate(int month, int day, int hour, int minute) {
  DateTime createdDate = DateTime(2025, month, day, hour, minute, 0);
  return createdDate;
}

// Compare current date to given date, return true if match, false otherwise
bool compareDate(DateTime desiredDate) {
  return (desiredDate.month() == now.month() && desiredDate.day() == now.day() && desiredDate.hour() == now.hour() && desiredDate.minute() == now.minute());
}

// Chime the hour on the hour, and once every half hour
String chimeHours() {
  static int bongs;
  static String hourNotes = String("");
  bongs = now.hour(); // set bongs to current hour
  if (bongs > 6 && bongs < 22 && now.minute() == 0) { // if current hour is within daytime range
    if (bongs > 12) { // if time is afternoon, subtract 12
      bongs -= 12;
    }
    for(int i = 0; i < bongs; i++) { // for each bong, add a note to the hourNotes string
      hourNotes.concat("qD(0) ");
    }
  }
  else if (bongs > 6 && bongs < 22 && now.minute() == 30) { // if time is half hour
    hourNotes = "qD(0) "; // set hourNotes to a single bong
  }
  else { // otherwise, do not play anything
    hourNotes = "";
  }
  return hourNotes; // return notes to be played
}
