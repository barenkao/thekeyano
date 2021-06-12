# The Keyano
This keyano is an instrument that uses Arduino sensors and Max MSP code to transform the computer keyboard into a versatile 39-key polyphonic keyboard synthesizer that's easy and intuitive to play, and also allows for ample harmonic freedom. This instrument also includes a joystick sensor and a rotary encoder, the joystick sensor modifies the cutoff frequency of the low pass filter on each key, while the rotary encoder transposes the entire keyboard based on the number of half steps above C, which is incremented when rotated clockwise and decremented when rotated counter-clockwise. This instrument was created by Karen Bao.

# How to Play 
The fundamental concept of the keyano is to allow notes to be played both horizontally and vertically, with vertical movements facilitating skipwise motion (skipping notes), best for harmony, and horizontal motion for stepwise motion, best used for melody. The notes are ordered sequentially in the row they're in, but when going to a new row the keyano doesn't go to the next note in the sequence. The first notes of each row (bottom to top) are C, E, G, and C, the first three rows being a 3rd apart from each other and the last row being a 4th apart. This creates the repetition of many notes over the keyboard, which provides multiple ways of playing the same note, and these options make melodies easier to play in a way that's ergonomic to the hand. Furthermore, the presence of duplicate notes allows the same note to be layered multiple times, which sounds more resonant than the note played once, a feature not available on the piano. Playing the same color notes (notes in the same column) spells out a common triad, which becomes very useful for spelling out chords to harmonize over a melody. The keyano also doesn't use the full 12 tone row - rather, it uses the 7 notes of a major scale, which makes it easier for beginners to pick up.
<br />

![Screen Shot 2021-06-11 at 8 01 53 PM](https://user-images.githubusercontent.com/36716639/121760353-f321b880-caef-11eb-800f-7ff0a094418e.png)
# Demonstrations
The following video demonstrates each note played in "sequential" order, which allows you to observe how the rows are ordered so that notes are repeated.
<br />

https://user-images.githubusercontent.com/36716639/121764541-57517600-cb0a-11eb-8a5c-24946ec6bdfc.mov
<br />
The vertical ordering of the rows allows chords to be constructed easily, a trait not so easily found in the piano. Similar to how its viewed in sheet music, chords can be played vertically, while melodies will often be played horizontally minus the occasional switching of rows.
<br />
Because the keyano only contains 7 notes of the major scale, the rotary encoder was included in order to change the tonal center of the entire keyano, effectively transposing the keyboard into all 12 different keys. The minimum value of the encoder is 0, C Major, and the maximum value is 11, B Major. Rotating the rotary encoder clockwises transposes the keyano up by a half step per turn, while turning it counterclockwise transposes it down by a half step. Q needs to be pressed in order to activate transposing.
<br />
Below is a use of the rotary encoder to transpose the keyano up a whole step for the iconic Whitney Houston final chorus
<br />
https://user-images.githubusercontent.com/36716639/121764988-83bac180-cb0d-11eb-8cc2-ec3d7d8a9f5b.mov
<br />
A joystick was also included to provide effects for the keyano. The joystick's Y coordinate is sent from the Arduino to the Max code, and this coordinate determines the cutoff frequency of the low-pass filter placed over all keys in the keyano. This effect leads to a sweep-like sound over the played notes, which provides a cool effect for a sustained chord.
<br />
https://user-images.githubusercontent.com/36716639/121765038-d0060180-cb0d-11eb-8407-be1453b4390c.mov
<br />
Below is a video of my using the keyano for a cover of the song lowkey by NIKI. In this video, I'm using the left hand to play the chords in the first three rows, and the right hand to play an accompanying melody, demonstrating the use of columns for harmony and horizontal movement for melody.
<br />
https://youtu.be/FlsNx80XAxQ
# Reflection/Going Forward
One of the biggest challenges I had for this project was how to combine my desire to create a keyboard instrument with the addition of Arduino sensors, and how to make an instrument that would be engaging for me to play with. One of my biggest gripes with preexisting keyboard mappings for piano keyboards is the difficulty I faced in switching rows, as the keyboard would simply continue in the same sequential order as the piano but in a different row of the keyboard, making it difficult for me to visualize. However, with the vertical mapping of chords in the layout I created I can now easily memorize that keys that are the same color are either a 3rd, 5th, or octave apart. In the future I would really like to create an arpeggiating feature using another Arduino sensor, in which repeating the same three or four notes would cause them to either rise or fall by an octave, leading to being able to play the same four notes over and over and imitate an arpeggio. However, for now I am really happy with my instrument and can visualize myself using it frequently and jamming out with it for a long time.
