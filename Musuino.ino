/*************************************************
 * Public Constants
 *************************************************/
#include <avr/pgmspace.h>

// #ifdef __arm__
//// should use uinstd.h to define sbrk but Due causes a conflict
//extern "C" char* sbrk(int incr);
//#else  // __ARM__
//extern char *__brkval;
//#endif  // __arm__
//#define B0  31
//#define DS6
//#define E6
//#define F6
//#define FS6
//#define G6
//#define GS6
//#define A6
//#define AS6
//#define B6
//#define C7
//#define CS7
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

//There are issues pertaining to the lowest notes commented below\/B0, B1, AS2

//const char B0[] PROGMEM = "B0";
const char C1[] PROGMEM = "C1";
const char CS1[] PROGMEM = "CS1";
const char D1[] PROGMEM = "D1";
const char DS1[] PROGMEM = "DS1";
const char E1[] PROGMEM = "E1";
const char F1[] PROGMEM = "F1";
const char FS1[] PROGMEM = "FS1";
const char G1[] PROGMEM = "G1";
const char GS1[] PROGMEM = "GS1";
const char AN1[] PROGMEM = "AN1";
const char AS1[] PROGMEM = "AS1";
//const char B1[] PROGMEM = "B1";
const char C2[] PROGMEM = "C2";
const char CS2[] PROGMEM = "CS2";
const char D2[] PROGMEM = "D2";
const char DS2[] PROGMEM = "DS2";
const char E2[] PROGMEM = "E2";
const char F2[] PROGMEM = "F2";
const char FS2[] PROGMEM = "FS2";
const char G2[] PROGMEM = "G2";
const char GS2[] PROGMEM = "GS2";
const char AN2[] PROGMEM = "AN2";
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
const char AN3[] PROGMEM = "AN3";
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
const char AN4[] PROGMEM = "AN4";
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
const char AN5[] PROGMEM = "AN5";
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
const char AN6[] PROGMEM = "AN6";
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
const char AN7[] PROGMEM = "AN7";
const char AS7[] PROGMEM = "AS7";
const char B7[] PROGMEM = "B7";
const char C8[] PROGMEM = "C8";
const char CS8[] PROGMEM = "CS8";
const char D8[] PROGMEM = "D8";
const char DS8[] PROGMEM = "DS8";
const char R[] PROGMEM = "R";
char buffer[4];

//const char *const notes[] PROGMEM = {
//  AN3, AN4, B3, R
//};

  //Megalovania Undertale
const char *const melody_megalovania[] PROGMEM = {
    D4, D4, D5, R, AN4, R, R, GS4, R, G4, R, F4, F4, D4, F4, G4, //1
    C4, C4, D5, R, AN4, R, R, GS4, R, G4, R, F4, F4, D4, F4, G4, //2
    B3, B3, D5, R, AN4, R, R, GS4, R, G4, R, F4, F4, D4, F4, G4, //3
    AS4, AS4, D5, R, AN4, R, R, GS4, R, G4, R, F4, F4, D4, F4, G4, //4
    D4, D4, D5, R, AN4, R, R, GS4, R, G4, R, F4, F4, D4, F4, G4, //5
    C4, C4, D5, R, AN4, R, R, GS4, R, G4, R, F4, F4, D4, F4, G4, //6
    B3, B3, D5, R, AN4, R, R, GS4, R, G4, R, F4, F4, D4, F4, G4, //7
    B3, B3, D5, R, AN4, R, R, GS4, R, G4, R, F4, F4, D4, F4, G4, //8
    D5, D5, D6, R, AN5, R, R, GS5, R, G5, R, F5, F5, D5, F5, G5, //9
    C5, C5, D6, R, AN5, R, R, GS5, R, G5, R, F5, F5, D5, F5, G5, //10
    B4, B4, D6, R, AN5, R, R, GS5, R, G5, R, F5, F5, D5, F5, G5, //11
    AS5, AS5, D6, R, AN5, R, R, GS5, R, G5, R, F5, F5, D5, F5, G5, //12
    D5, D5, D6, R, AN5, R, R, GS5, R, G5, R, F5, F5, D5, F5, G5, //13
    C5, C5, D6, R, AN5, R, R, GS5, R, G5, R, F5, F5, D5, F5, G5, //14
    B4, B4, D6, R, AN5, R, R, GS5, R, G5, R, F5, F5, D5, F5, G5, //15
    B4, B4, D6, R, AN5, R, R, GS5, R, G5, R, F5, F5, D5, F5, G5, //16
    F4, F4, F4, 0, F4, 0, F4, F4, D4, 0, D4, D4, //17
    F4, F4, F4, 0, F4, 0, GS4, AN4, G4, AN4, G4, 0, D4, F4, G4, 0 //18
};

const byte *const tempo_megalovania[] PROGMEM = {
  16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, //1
  16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, //2
  16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, //3
  16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, //4
  16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, //5
  16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, //6
  16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, //7
  16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, //8
  16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, //9
  16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, //10
  16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, //11
  16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, //12
  16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, //13
  16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, //14
  16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, //15
  16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, //16
  8, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 8,  //17
  8, 16, 8, 8, 8, 32, 32, 16, 16, 16, 8 //18

};

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

for (int i = 0; i < sizeof(melody_megalovania) / sizeof(char); i++) {
    if(sizeof(melody_megalovania) / sizeof(char)!= sizeof(tempo_megalovania) / sizeof(byte)){
      Serial.println(F("Song is corrupt. Make sure that melody length equals tempo length"));
      buzz(melodyPin, 1500, 5000);
      delay(60000);
    }
    sing(0);
//    strcpy_P(buffer, (char *)pgm_read_word(&(melody_megalovania[i])));  // Necessary casts and dereferencing, just copy.
//    byte temp;
//    temp = pgm_read_byte(&(tempo_megalovania[i]));
//    Serial.println(Note());
//    //Serial.println(sizeof(melody_megalovania) / sizeof(int));
//    buzz(melodyPin, Note(), 1000 / temp);
//    delay(1000 / temp * 1.3);
  }
}

int Note(){
  char char0 = buffer[0];
  char char1 = buffer[1];
  char char2 = buffer[2];
  switch(char0){
    //-----------------
    case 'R':
      return 0;
      break;
    //-----------------
    case 'A':
      switch(char1){
        case 'N':
          switch(char2){
            case '1':
              return 55;
              break;
            case '2':
              return 110;
              break;
            case '3':
              return 220;
              break;
            case '4':
              return 440;
              break;
            case '5':
              return 880;
              break;
            case '6':
              return 1760;
              break;
          }
        case 'S':
          switch(char2){
            case '1':
              return 58;
              break;
            case '2':
              return 117;
              break;
            case '3':
              return 233;
              break;
            case '4':
              return 466;
              break;
            case '6':
              return 1865;
              break;
          }
      }
    case 'B':
      switch(char1){
        case '1':
          return 62;
          break;
        case '2':
          return 123;
          break;
        case '3':
          return 247;
          break;
        case '4':
          return 494;
          break;
        case '5':
          return 988;
          break;
        case '6':
          return 1976;
          break;
      }
    case 'C':
      switch(char1){
        case '1':
          return 33;
          break;
        case '2':
          return 65;
          break;
        case '3':
          return 131;
          break;
        case '4':
          return 262;
          break;
        case '5':
          return 523;
          break;
        case '6':
          return 1047;
          break;
        case '7':
          return 2093;
          break;
        case 'S':
          switch(char2){
            case '1':
              return 35;
              break;
            case '2':
              return 69;
              break;
            case '3':
              return 139;
              break;
            case '4':
              return 277;
              break;
            case '5':
              return 554;
              break;
            case '6':
              return 1109;
              break;
            case '7':
              return 2217;
              break;
          }
      }
    case 'D':
      switch(char1){
        case '1':
          return 37;
          break;
        case '2':
          return 73;
          break;
        case '3':
          return 147;
          break;
        case '4':
          return 294;
          break;
        case '5':
          return 587;
          break;
        case '6':
          return 1175;
          break;
        case 'S':
          switch(char2){
            case '1':
              return 39;
              break;
            case '2':
              return 78;
              break;
            case '3':
              return 156;
              break;
            case '4':
              return 311;
              break;
            case '5':
              return 622;
              break;
            case '6':
              return 1245;
              break;
          }
      }
    case 'E':
      switch(char1){
        case '1':
          return 41;
          break;
        case '2':
          return 82;
          break;
        case '3':
          return 165;
        case '4':
          return 330;
          break;
        case '5':
          return 659;
          break;
        case '6':
          return 1319;
          break;
      }
    case 'F':
      switch(char1){
        case '1':
          return 44;
          break;
        case '2':
          return 87;
          break;
        case '3':
          return 175;
        case '4':
          return 349;
          break;
        case '5':
          return 698;
          break;
        case '6':
              return 1397;
              break;
        case 'S':
          switch(char2){
            case '1':
              return 46;
              break;
            case '2':
              return 93;
              break;
            case '3':
              return 185;
              break;
            case '4':
              return 370;
              break;
            case '5':
              return 740;
              break;
            case '6':
              return 1480;
              break;
          }
      }
    case 'G':
      switch(char1){
        case '1':
          return 49;
          break;
        case '2':
          return 98;
          break;
        case '3':
          return 196;
        case '4':
          return 392;
          break;
        case '5':
          return 784;
          break;
        case '6':
            return 1568;
            break;
        case 'S':
          switch(char2){
            case '1':
              return 52;
              break;
            case '2':
              return 104;
              break;
            case '3':
              return 208;
              break;
            case '4':
              return 415;
              break;
            case '5':
              return 831;
              break;
            case '6':
              return 1661;
              break;
          }
      }
    default:
      return 420;
  }
}

//int song = 0;

void sing(int s) {
  // iterate over the notes of the melody:
  switch(s){
    case 0:
      Megalovania();
//    case 1:
//      OverworldMusic();
//    case 2:
//      UnderworldMusic();
    default:
      Megalovania();
  }
}

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

int buzz2(int targetPin, long frequency, long length, unsigned long buzzStart = millis()) {
  digitalWrite(13, HIGH);
  long delayValue = 1000000 / frequency / 2;
  //What millisecond the buzz started
  int pinState = LOW;
  if(millis() - buzzStart >= delayValue){
    if(pinState == LOW){
      pinState = HIGH;
      digitalWrite(targetPin, HIGH);
    }else{
      pinState = LOW;
      digitalWrite(targetPin, LOW);
    }
  }
  digitalWrite(13, LOW);
  return buzzStart;
}



void Megalovania(){
  Serial.println(" 'Megalovania'");
    int size = sizeof(melody_megalovania) / sizeof(int);
    for (int thisNote = 0; thisNote < size; thisNote++) {
      strcpy_P(buffer, (char *)pgm_read_word(&(melody_megalovania[thisNote])));
      byte temp;
      temp = pgm_read_byte(&(tempo_megalovania[thisNote]));
      // to calculate the note duration, take one second
      // divided by the note type.
      //e.g. quarter note = 1000 / 4, eighth note = 1000/8, etc.
      int noteDuration = 1000 / temp;

      buzz(melodyPin, Note(), noteDuration);

      // to distinguish the notes, set a minimum time between them.
      // the note's duration + 30% seems to work well:
      int pauseBetweenNotes = 1000 / temp * 1.30;
      delay(pauseBetweenNotes);

      // stop the tone playing:
      buzz(melodyPin, 0, noteDuration);
      //Serial.println(freeMemory());
      Serial.println(Note());
      return;
    }
}


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
