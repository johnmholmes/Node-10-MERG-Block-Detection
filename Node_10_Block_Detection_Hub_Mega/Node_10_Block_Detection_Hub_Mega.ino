// block detection unit 1 CMRI Address 10
// pins available to use
// pins 0 , 1 & 2 , 13 are used to control the crmi leaving 63 possible devices
// pin 3 block 1
// pin 4 block 2
// pin 5 block 3
// pin 6 block 4
// pin 7 block 5
// pin 8 block 6
// pin 9 block 7
// pin 10 block 8
// pin 11 block 9
// pin 12 block 10
// pin 13 do not use
// pin 14 block 11
// pin 15 block 12
// pin 16 block 13
// pin 17 block 14
// pin 18 block 15
// pin 19 block 16
// pin 20 block 17
// pin 21 block 18

#include <CMRI.h>
#include <Auto485.h>

#define CMRI_ADDR 10
//BLOCK DETECTION pins used
#define BL1 3      // BLOCK 1
#define BL2 4      // BLOCK 2
#define BL3 5      // BLOCK33
#define BL4 6      // BLOCK 4
#define BL5 7      // BLOCK 5
#define BL6 8      // BLOCK 6
#define BL7 9      // BLOCK 7
#define BL8 10     // BLOCK 8
#define BL9 11     // BLOCK 9
#define BL10 12    // BLOCK 10
#define BL11 14    // BLOCK 11
#define BL12 15    // BLOCK 12
#define BL13 16    // BLOCK 13
#define BL14 17    // BLOCK 14
#define BL15 18    // BLOCK 15
#define BL16 19    // BLOCK 16
#define BL17 20    // BLOCK 17
#define BL18 21    // BLOCK 18
#define BL19 22    // BLOCK 19
#define BL20 23    // BLOCK 20
#define BL21 24    // BLOCK 21
#define BL22 25    // BLOCK 22
#define BL23 26    // BLOCK 23
#define BL24 27    // BLOCK 24
#define BL25 28    // BLOCK 25
#define BL26 29    // BLOCK 26
#define BL27 30    // BLOCK 27
#define BL28 31    // BLOCK 28
#define BL29 32    // BLOCK 29
#define BL30 33    // BLOCK 30
#define BL31 34    // BLOCK 31
#define BL32 35    // BLOCK 32
#define BL33 36    // BLOCK 33

#define DE_PIN 2     // used for interupt

Auto485 bus(DE_PIN); // Arduino pin 2 -> MAX485 DE and RE pins
CMRI cmri(CMRI_ADDR, 64, 128, bus); // defaults to a SMINI with address 0. SMINI = 24 inputs, 48 outputs

void setup() {

//setup pins as inputs with a pull up resister
pinMode (BL1, INPUT_PULLUP);      // BLOCK 1 PIN 3
pinMode (BL2, INPUT_PULLUP);      // BLOCK 2 PIN 4
pinMode (BL3, INPUT_PULLUP);      // BLOCK 3 PIN 5
pinMode (BL4, INPUT_PULLUP);      // BLOCK 4 PIN 6
pinMode (BL5, INPUT_PULLUP);      // BLOCK 5 PIN 7
pinMode (BL6, INPUT_PULLUP);      // BLOCK 6 PIN 8
pinMode (BL7, INPUT_PULLUP);      // BLOCK 7 PIN 9
pinMode (BL8, INPUT_PULLUP);      // BLOCK 8 PIN 10
pinMode (BL9, INPUT_PULLUP);      // BLOCK 9 PIN 11
pinMode (BL10, INPUT_PULLUP);     // BLOCK 10 PIN 12
pinMode (BL11, INPUT_PULLUP);     // BLOCK 11 PIN 14
pinMode (BL12, INPUT_PULLUP);     // BLOCK 12 PIN 15
pinMode (BL13, INPUT_PULLUP);     // BLOCK 13 PIN 16
pinMode (BL14, INPUT_PULLUP);     // BLOCK 14 PIN 17
pinMode (BL15, INPUT_PULLUP);     // BLOCK 15 PIN 18
pinMode (BL16, INPUT_PULLUP);     // BLOCK 16 PIN 19
pinMode (BL17, INPUT_PULLUP);     // BLOCK 17 PIN 20
pinMode (BL18, INPUT_PULLUP);     // BLOCK 18 PIN 21
pinMode (BL19, INPUT_PULLUP);     // BLOCK 19 PIN 22
pinMode (BL20, INPUT_PULLUP);     // BLOCK 20 PIN 23
pinMode (BL21, INPUT_PULLUP);     // BLOCK 21 PIN 24
pinMode (BL22, INPUT_PULLUP);     // BLOCK 22 PIN 25
pinMode (BL23, INPUT_PULLUP);     // BLOCK 23 PIN 26
pinMode (BL24, INPUT_PULLUP);     // BLOCK 24 PIN 27
pinMode (BL25, INPUT_PULLUP);     // BLOCK 25 PIN 28
pinMode (BL26, INPUT_PULLUP);     // BLOCK 26 PIN 29
pinMode (BL27, INPUT_PULLUP);     // BLOCK 27 PIN 30
pinMode (BL28, INPUT_PULLUP);     // BLOCK 28 PIN 31
pinMode (BL29, INPUT_PULLUP);     // BLOCK 29 PIN 32
pinMode (BL30, INPUT_PULLUP);     // BLOCK 30 PIN 33
pinMode (BL31, INPUT_PULLUP);     // BLOCK 31 PIN 34
pinMode (BL32, INPUT_PULLUP);     // BLOCK 32 PIN 35
pinMode (BL33, INPUT_PULLUP);     // BLOCK 33 PIN 36


bus.begin(19200);
}

void loop() {

cmri.process();

// READ SENSORS
cmri.set_bit(0, !digitalRead(3)); //jmri 10001 BLOCK 1
cmri.set_bit(1, !digitalRead(4)); //jmri 10002 BLOCK 2
cmri.set_bit(2, !digitalRead(5)); //jmri 10003 BLOCK 3
cmri.set_bit(3, !digitalRead(6)); //jmri 10004 BLOCK 4
cmri.set_bit(4, !digitalRead(7)); //jmri 10005 BLOCK 5
cmri.set_bit(5, !digitalRead(8)); //jmri 10006 BLOCK 6
cmri.set_bit(6, !digitalRead(9)); //jmri 10007 BLOCK 7
cmri.set_bit(7, !digitalRead(10)); //jmri 10008 BLOCK 8
cmri.set_bit(8, !digitalRead(11)); //jmri 10009 BLOCK 9
cmri.set_bit(9, !digitalRead(12)); //jmri 10010 BLOCK 10
cmri.set_bit(10, !digitalRead(14));//jmri 10011 BLOCK 11
cmri.set_bit(11, !digitalRead(15));//jmri 10012 BLOCK 12
cmri.set_bit(12, !digitalRead(16));//jmri 10013 BLOCK 13
cmri.set_bit(13, !digitalRead(17));//jmri 10014 BLOCK 14
cmri.set_bit(14, !digitalRead(18));//jmri 10015 BLOCK 15
cmri.set_bit(15, !digitalRead(19));//jmri 10016 BLOCK 16
cmri.set_bit(16, !digitalRead(20));//jmri 10017 BLOCK 17
cmri.set_bit(17, !digitalRead(21));//jmri 10018 BLOCK 18
cmri.set_bit(18, !digitalRead(22));//jmri 10019 BLOCK 19
cmri.set_bit(19, !digitalRead(23));//jmri 10020 BLOCK 20
cmri.set_bit(20, !digitalRead(24));//jmri 10021 BLOCK 21
cmri.set_bit(21, !digitalRead(25));//jmri 10022 BLOCK 22
cmri.set_bit(22, !digitalRead(26));//jmri 10023 BLOCK 23
cmri.set_bit(23, !digitalRead(27));//jmri 10024 BLOCK 24
cmri.set_bit(24, !digitalRead(28));//jmri 10025 BLOCK 25
cmri.set_bit(25, !digitalRead(29));//jmri 10026 BLOCK 26
cmri.set_bit(26, !digitalRead(30));//jmri 10027 BLOCK 27
cmri.set_bit(27, !digitalRead(31));//jmri 10028 BLOCK 28
cmri.set_bit(28, !digitalRead(32));//jmri 10029 BLOCK 29
cmri.set_bit(29, !digitalRead(33));//jmri 10030 BLOCK 30
cmri.set_bit(30, !digitalRead(34));//jmri 10031 BLOCK 31
cmri.set_bit(31, !digitalRead(35));//jmri 10032 BLOCK 32
cmri.set_bit(32, !digitalRead(36));//jmri 10033 BLOCK 33

}
