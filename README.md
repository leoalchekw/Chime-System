# Chime System Project
### By Leo Weisberger and Grady Bosanko

We designed a simple system to play songs on a set of 14 church chimes. The chimes are struck by hammers controlled by electromagnets that connect back to the Arduino. These electromagnets are toggled on and off using the output pins of the Arduino.

Our system allows for the creation of songs in the form of a string, and for the creation of dates down to the minute on which to automatically play these songs. An example input for a song string would look as follows:

"eA(1) qB(1) hC#(1) "

The first letter of each note represents the note's length, e.g. 'e' translates to an eighth note. The following letters represent the pitch of the note, with the number in parentheses indicating the octave in which that note resides. A more detailed key is written within the project itself.

Dates can be added using the "createDate" function, which takes a month, day, hour, and minute as parameters. These dates must then be added to the "scanSongs" function in order for the system to find and play them at the proper times. The code includes an example "Happy Birthday" tune, which is set to play on two seperate dates.

Also included, the chimes will chime once every half hour and they will chime the hour on the hour throughout the day. Of course, this would not be practical during the night, so the chimes operate during the hours of 7am-10:30pm.
