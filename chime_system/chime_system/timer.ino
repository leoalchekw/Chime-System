Song scanSongs() {
  for (int i=0; songs.size(); i++) {
    if (songs[i].time.month() == now.month() && songs[i].time.day() == now.day() && songs[i].time.hour() == now.hour()) {
      return songs[i];
    }
  }
  return null;
}
