# The Keyano
This keyano is an instrument that uses Arduino sensors and Max MSP code to transform the computer keyboard into a versatile 39-key polyphonic keyboard synthesizer that's easy and intuitive to play, and also allows for ample harmonic freedom. This instrument also includes a joystick sensor and a rotary encoder, the joystick sensor modifies the cutoff frequency of the low pass filter on each key, while the rotary encoder transposes the entire keyboard based on the number of half steps above C, which is incremented when rotated clockwise and decremented when rotated counter-clockwise. This instrument was created by Karen Bao.

# How to Play 
The fundamental concept of the keyano is to allow notes to be played both horizontally and vertically, with vertical movements facilitating skipwise motion (skipping notes), best for harmony, and horizontal motion for stepwise motion, best used for melody. The notes are ordered sequentially in the row they're in, but when going to a new row the keyano doesn't go to the next note in the sequence. The first notes of each row (bottom to top) are C, E, G, and C, the first three rows being a 3rd apart from each other and the last row being a 4th apart. This creates the repetition of many notes over the keyboard, which provides multiple ways of playing the same note, and these options make melodies easier to play in a way that's ergonomic to the hand. Furthermore, the presence of duplicate notes allows the same note to be layered multiple times, which sounds more resonant than the note played once, a feature not available on the piano. Playing the same color notes (notes in the same column) spells out a common triad, which becomes very useful for spelling out chords to harmonize over a melody. The keyano also doesn't use the full 12 tone row - rather, it uses the 7 notes of a major scale, which makes it easier for beginners to pick up.
The name of your instrument
Your name
A description of the instrument, describing what it does, how it sounds, what inspired it, and how to play it.  Feel free to include a narrative about how you made it, what discoveries you made, what you learned along the way, etc.
Video of your performance (if you performed live in class, you can excerpt from the class recording or create another video
Images of the instrument up-close, and (if you want) photos of the instrument in-progress.
Max code (as a linked separate file -- best as a raw text file containing the copy-compressed Max code) and any instructions needed (liberal commenting is a nice gesture to posterity)
Arduino code (same as above)
optionally, additional sound recordings, circuit diagrams, and anything else that supports our understanding of your work.
Below is a diagram of the different pitches of each note, given no trans
![Screen Shot 2021-06-11 at 8 01 53 PM](https://user-images.githubusercontent.com/36716639/121760353-f321b880-caef-11eb-800f-7ff0a094418e.png)
