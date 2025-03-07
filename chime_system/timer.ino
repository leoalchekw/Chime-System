song scanSongs() {
  for (int i=0; songs.getSize(); i++) {
    if (songs[i].month == now.month() && songs[i].day == now.day() && songs[i].hour == now.hour()) {
      return songs[i];
    }
  }
}
