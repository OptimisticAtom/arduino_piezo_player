/*************************************************
 * Public Constants
 *************************************************/
#include <avr/pgmspace.h>

 
//#define B0  31
//#define C1  33
//#define CS1 35
//#define D1  37
//#define DS1 39
//#define E1  41
//#define F1  44
//#define FS1 46
//#define G1  49
//#define GS1 52
//#define A1  55
//#define AS1 58
//#define B1  62
//#define C2  65
//#define CS2 69
//#define D2  73
//#define DS2 78
//#define E2  82
//#define F2  87
//#define FS2 93
//#define G2  98
//#define GS2 104
//#define A2  110
//#define AS2 117
//#define B2  123
//#define C3  131
//#define CS3 139
//#define D3  147
//#define DS3 156
//#define E3  165
//#define F3  175
//#define FS3 185
//#define G3  196
//#define GS3 208
//#define A3  220
//#define AS3 233
//#define B3  247
//#define C4  262
//#define CS4 277
//#define D4  294
//#define DS4 311
//#define E4  330
//#define F4  349
//#define FS4 370
//#define G4  392
//#define GS4 415
//#define A4  440
//#define AS4 466
//#define B4  494
//#define C5  523
//#define CS5 554
//#define D5  587
//#define DS5 622
//#define E5  659
//#define F5  698
//#define FS5 740
//#define G5  784
//#define GS5 831
//#define A5  880
//#define AS5 932
//#define B5  988
//#define C6  1047
//#define CS6 1109
//#define D6  1175
//#define DS6 1245
//#define E6  1319
//#define F6  1397
//#define FS6 1480
//#define G6  1568
//#define GS6 1661
//#define A6  1760
//#define AS6 1865
//#define B6  1976
//#define C7  2093
//#define CS7 2217
//#define D7  2349
//#define DS7 2489
//#define E7  2637
//#define F7  2794
//#define FS7 2960
//#define G7  3136
//#define GS7 3322
//#define A7  3520
//#define AS7 3729
//#define B7  3951
//#define C8  4186
//#define CS8 4435
//#define D8  4699
//#define DS8 4978
 
#define melodyPin 3

//There are issues pertaining to the lowest notes commented below\/

//const char B0[] PROGMEM = "B0";
//const char C1[] PROGMEM = "C1";
//const char CS1[] PROGMEM = "CS1";
//const char D1[] PROGMEM = "D1";
//const char DS1[] PROGMEM = "DS1";
//const char E1[] PROGMEM = "E1";
//const char F1[] PROGMEM = "F1";
//const char FS1[] PROGMEM = "FS1";
//const char G1[] PROGMEM = "G1";
//const char GS1[] PROGMEM = "GS1";
//const char AN1[] PROGMEM = "A1";
//const char AS1[] PROGMEM = "AS1";
//const char B1[] PROGMEM = "B1";
//const char C2[] PROGMEM = "C2";
//const char CS2[] PROGMEM = "CS2";
//const char D2[] PROGMEM = "D2";
//const char DS2[] PROGMEM = "DS2";
//const char E2[] PROGMEM = "E2";
//const char F2[] PROGMEM = "F2";
//const char FS2[] PROGMEM = "FS2";
//const char G2[] PROGMEM = "G2";
//const char GS2[] PROGMEM = "GS2";
//const char AN2[] PROGMEM = "A2";
//const char AS2[] PROGMEM = "AS2";
const char B2[] PROGMEM = "B2";
const char C3[] PROGMEM = "C3";
const char CS3[] PROGMEM = "CS3";
const char D3[] PROGMEM = "D3";
const char DS3[] PROGMEM = "DS3";
const char E3[] PROGMEM = "E3";
const char F3[] PROGMEM = "F3";
const char FS3[] PROGMEM = "FS3";
const char G3[] PROGMEM = "G3";
const char GS3[] PROGMEM = "GS3";
const char AN3[] PROGMEM = "A3";
const char AS3[] PROGMEM = "AS3";
const char B3[] PROGMEM = "B3";
const char C4[] PROGMEM = "C4";
const char CS4[] PROGMEM = "CS4";
const char D4[] PROGMEM = "D4";
const char DS4[] PROGMEM = "DS4";
const char E4[] PROGMEM = "E4";
const char F4[] PROGMEM = "F4";
const char FS4[] PROGMEM = "FS4";
const char G4[] PROGMEM = "G4";
const char GS4[] PROGMEM = "GS4";
const char AN4[] PROGMEM = "A4";
const char AS4[] PROGMEM = "AS4";
const char B4[] PROGMEM = "B4";
const char C5[] PROGMEM = "C5";
const char CS5[] PROGMEM = "CS5";
const char D5[] PROGMEM = "D5";
const char DS5[] PROGMEM = "DS5";
const char E5[] PROGMEM = "E5";
const char F5[] PROGMEM = "F5";
const char FS5[] PROGMEM = "FS5";
const char G5[] PROGMEM = "G5";
const char GS5[] PROGMEM = "GS5";
const char AN5[] PROGMEM = "A5";
const char AS5[] PROGMEM = "AS5";
const char B5[] PROGMEM = "B5";
const char C6[] PROGMEM = "C6";
const char CS6[] PROGMEM = "CS6";
const char D6[] PROGMEM = "D6";
const char DS6[] PROGMEM = "DS6";
const char E6[] PROGMEM = "E6";
const char F6[] PROGMEM = "F6";
const char FS6[] PROGMEM = "FS6";
const char G6[] PROGMEM = "G6";
const char GS6[] PROGMEM = "GS6";
const char AN6[] PROGMEM = "A6";
const char AS6[] PROGMEM = "AS6";
const char B6[] PROGMEM = "B6";
const char C7[] PROGMEM = "C7";
const char CS7[] PROGMEM = "CS7";
const char D7[] PROGMEM = "D7";
const char DS7[] PROGMEM = "DS7";
const char E7[] PROGMEM = "E7";
const char F7[] PROGMEM = "F7";
const char FS7[] PROGMEM = "FS7";
const char G7[] PROGMEM = "G7";
const char GS7[] PROGMEM = "GS7";
const char AN7[] PROGMEM = "A7N";
const char AS7[] PROGMEM = "AS7";
const char B7[] PROGMEM = "B7";
const char C8[] PROGMEM = "C8";
const char CS8[] PROGMEM = "CS8";
const char D8[] PROGMEM = "D8";
const char DS8[] PROGMEM = "DS8";
const char R[] PROGMEM = "R";
char buffer[4];

const char *const notes[] PROGMEM = {
  B7, C8, CS8, D8, DS8, R
};

  //Megalovania Undertale
const char *const melody_megalovania[] PROGMEM = {
    D4, D4, D5, R, A4, R, R, GS4, R, G4, R, F4, F4, D4, F4, G4, 
    C4, C4, D5, R, A4, R, R, GS4, R, G4, R, F4, F4, D4, F4, G4, 
    B3, B3, D5, R, A4, R, R, GS4, R, G4, R, F4, F4, D4, F4, G4, 
    AS4, AS4, D5, R, A4, R, R, GS4, R, G4, R, F4, F4, D4, F4, G4, 
    D4, D4, D5, R, A4, R, R, GS4, R, G4, R, F4, F4, D4, F4, G4, 
    C4, C4, D5, R, A4, R, R, GS4, R, G4, R, F4, F4, D4, F4, G4, 
    B3, B3, D5, R, A4, R, R, GS4, R, G4, R, F4, F4, D4, F4, G4, 
    B3, B3, D5, R, A4, R, R, GS4, R, G4, R, F4, F4, D4, F4, G4, 
    D5, D5, D6, R, A5, R, R, GS5, R, G5, R, F5, F5, D5, F5, G5, 
    C5, C5, D6, R, A5, R, R, GS5, R, G5, R, F5, F5, D5, F5, G5, 
    B4, B4, D6, R, A5, R, R, GS5, R, G5, R, F5, F5, D5, F5, G5, 
    AS5, AS5, D6, R, A5, R, R, GS5, R, G5, R, F5, F5, D5, F5, G5, 
    D5, D5, D6, R, A5, R, R, GS5, R, G5, R, F5, F5, D5, F5, G5, 
    C5, C5, D6, R, A5, R, R, GS5, R, G5, R, F5, F5, D5, F5, G5, 
    B4, B4, D6, R, A5, R, R, GS5, R, G5, R, F5, F5, D5, F5, G5, 
    B4, B4, D6, R, A5, R, R, GS5, R, G5, R, F5, F5, D5, F5, G5, 
    F4, F4, F4, F4, F4, D4, D4, 0, 
    F4, F4, F4, G4, GS4, A4, G4, F4, D4, F4, G4
};

//const PROGMEM int tempo_megalovania[] = {
//  16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 
//  16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 
//  16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 
//  16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 
//  16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 
//  16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 
//  16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 
//  16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 
//  16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 
//  16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 
//  16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 
//  16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 
//  16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 
//  8, 16, 8, 8, 8, 8, 8, 16, 
//  8, 16, 8, 8, 8, 32, 32, 16, 16, 16, 8
//  
//};
//
//const PROGMEM int slurs_megalovania[] = {
//  0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,
//  0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,
//  0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,
//  0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,
//  0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,
//  0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,
//  0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,
//  0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,
//  0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,
//  0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,
//  0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,
//  0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,
//  0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,
//  0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,
//  0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,
//  0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,
//  0,0,0,0,0,0,0,0,
//  0,0,0,0,0,0,0,0,0,0,0
//};

//Mario main theme melody
//int melody[] = {
//  E7, E7, 0, E7,
//  0, C7, E7, 0,
//  G7, 0, 0,  0,
//  G6, 0, 0, 0,
// 
//  C7, 0, 0, G6,
//  0, 0, E6, 0,
//  0, A6, 0, B6,
//  0, AS6, A6, 0,
// 
//  G6, E7, G7,
//  A7, 0, F7, G7,
//  0, E7, 0, C7,
//  D7, B6, 0, 0,
// 
//  C7, 0, 0, G6,
//  0, 0, E6, 0,
//  0, A6, 0, B6,
//  0, AS6, A6, 0,
// 
//  G6, E7, G7,
//  A7, 0, F7, G7,
//  0, E7, 0, C7,
//  D7, B6, 0, 0
//};
//Mario main them tempo
//int tempo[] = {
//  12, 12, 12, 12,
//  12, 12, 12, 12,
//  12, 12, 12, 12,
//  12, 12, 12, 12,
// 
//  12, 12, 12, 12,
//  12, 12, 12, 12,
//  12, 12, 12, 12,
//  12, 12, 12, 12,
// 
//  9, 9, 9,
//  12, 12, 12, 12,
//  12, 12, 12, 12,
//  12, 12, 12, 12,
// 
//  12, 12, 12, 12,
//  12, 12, 12, 12,
//  12, 12, 12, 12,
//  12, 12, 12, 12,
// 
//  9, 9, 9,
//  12, 12, 12, 12,
//  12, 12, 12, 12,
//  12, 12, 12, 12,
//};

//Underworld melody
//int underworld_melody[] = {
//  C4, C5, A3, A4,
//  AS3, AS4, 0,
//  0,
//  C4, C5, A3, A4,
//  AS3, AS4, 0,
//  0,
//  F3, F4, D3, D4,
//  DS3, DS4, 0,
//  0,
//  F3, F4, D3, D4,
//  DS3, DS4, 0,
//  0, DS4, CS4, D4,
//  CS4, DS4,
//  DS4, GS3,
//  G3, CS4,
//  C4, FS4, F4, E3, AS4, A4,
//  GS4, DS4, B3,
//  AS3, A3, GS3,
//  0, 0, 0
//};
//Underwolrd tempo
//int underworld_tempo[] = {
//  12, 12, 12, 12,
//  12, 12, 6,
//  3,
//  12, 12, 12, 12,
//  12, 12, 6,
//  3,
//  12, 12, 12, 12,
//  12, 12, 6,
//  3,
//  12, 12, 12, 12,
//  12, 12, 6,
//  6, 18, 18, 18,
//  6, 6,
//  6, 6,
//  6, 6,
//  18, 18, 18, 18, 18, 18,
//  10, 10, 10,
//  10, 10, 10,
//  3, 3, 3
//};


void setup(void)
{
  Serial.begin(9600);
  while (!Serial);  // wait for serial port to connect. Needed for native USB
  Serial.println("OK");
  pinMode(3, OUTPUT);//buzzer
  pinMode(13, OUTPUT);//led indicator when singing a note
  
}
void loop()
{
  //sing the tunes
  //sing(0);
for (int i = 0; i < 6; i++) {
    strcpy_P(buffer, (char *)pgm_read_word(&(notes[i])));  // Necessary casts and dereferencing, just copy.
    Serial.println(buffer);
    Serial.println(sizeof(melody_megalovania) / sizeof(int));
    delay(500);
  }
}
//int song = 0;
 
//void sing(int s) {
//  // iterate over the notes of the melody: 
//  switch(s){
////    case 0:
////      Megalovania();
////    case 1:
////      OverworldMusic();
////    case 2:
////      UnderworldMusic();
//    default:
//      Megalovania();
//  }
//}
// 
void buzz(int targetPin, long frequency, long length) {
  digitalWrite(13, HIGH);
  long delayValue = 1000000 / frequency / 2; // calculate the delay value between transitions
  //// 1 second's worth of microseconds, divided by the frequency, then split in half since
  //// there are two phases to each cycle
  long numCycles = frequency * length / 1000; // calculate the number of cycles for proper timing
  //// multiply frequency, which is really cycles per second, by the number of seconds to
  //// get the total number of cycles to produce
  for (long i = 0; i < numCycles; i++) { // for the calculated length of time...
    digitalWrite(targetPin, HIGH); // write the buzzer pin high to push out the diaphram
    delayMicroseconds(delayValue); // wait for the calculated delay value
    digitalWrite(targetPin, LOW); // write the buzzer pin low to pull back the diaphram
    delayMicroseconds(delayValue); // wait again or the calculated delay value
  }
  digitalWrite(13, LOW);
}



//void Megalovania(){
//  Serial.println(" 'Megalovania'");
//    int size = sizeof(melody_megalovania) / sizeof(int);
//    for (int thisNote = 0; thisNote < size; thisNote++) {
// 
//      // to calculate the note duration, take one second
//      // divided by the note type.
//      //e.g. quarter note = 1000 / 4, eighth note = 1000/8, etc.
//      int noteDuration = 1000 / tempo_megalovania[thisNote];
// 
//      buzz(melodyPin, melody_megalovania[thisNote], noteDuration);
// 
//      // to distinguish the notes, set a minimum time between them.
//      // the note's duration + 30% seems to work well:
//      int pauseBetweenNotes = 1000 / tempo_megalovania[thisNote] * 1.30;
//      delay(pauseBetweenNotes);
// 
//      // stop the tone playing:
//      buzz(melodyPin, 0, noteDuration);
//    }
//}

//float Slur(int currentSongSlurs[], int currentNote){
//  if(currentSongSlurs[currentNote] == 1){
//    return 0;
//  }else{
//    return 1.30;
//  }
//}

//void OverworldMusic(){
//  Serial.println(" 'Mario Theme'");
//    int size = sizeof(melody) / sizeof(int);
//    for (int thisNote = 0; thisNote < size; thisNote++) {
// 
//      // to calculate the note duration, take one second
//      // divided by the note type.
//      //e.g. quarter note = 1000 / 4, eighth note = 1000/8, etc.
//      int noteDuration = 1000 / tempo[thisNote];
// 
//      buzz(melodyPin, melody[thisNote], noteDuration);
// 
//      // to distinguish the notes, set a minimum time between them.
//      // the note's duration + 30% seems to work well:
//      int pauseBetweenNotes = noteDuration * 1.30;
//      delay(pauseBetweenNotes);
// 
//      // stop the tone playing:
//      buzz(melodyPin, 0, noteDuration);
//    }
//}
//
//void UnderworldMusic(){
//      Serial.println(" 'Underworld Theme'");
//    int size = sizeof(underworld_melody) / sizeof(int);
//    for (int thisNote = 0; thisNote < size; thisNote++) {
// 
//      // to calculate the note duration, take one second
//      // divided by the note type.
//      //e.g. quarter note = 1000 / 4, eighth note = 1000/8, etc.
//      int noteDuration = 1000 / underworld_tempo[thisNote];
// 
//      buzz(melodyPin, underworld_melody[thisNote], noteDuration);
// 
//      // to distinguish the notes, set a minimum time between them.
//      // the note's duration + 30% seems to work well:
//      int pauseBetweenNotes = noteDuration * 1.30;
//      delay(pauseBetweenNotes);
// 
//      // stop the tone playing:
//      buzz(melodyPin, 0, noteDuration);
//    }
//}