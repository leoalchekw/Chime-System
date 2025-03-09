DateTime createDate(int month, int day, int hour, int minute) {
  DateTime createdDate = DateTime(2000, month, day, hour, minute, 0);
  return createdDate;
}

bool compareDate(DateTime desiredDate) {
  return (desiredDate.month() == now.month() && desiredDate.day() == now.day() && desiredDate.hour() == now.hour() && desiredDate.minute() == now.minute());
}