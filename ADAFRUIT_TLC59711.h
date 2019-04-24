#ifndef _ADAFRUIT_TLC59711_H
#define _ADAFRUIT_TLC59711_H

#include <Arduino.h>


class Adafruit_TLC59711 {
 public:
  Adafruit_TLC59711(uint8_t n, uint8_t c, uint8_t d);
  Adafruit_TLC59711(uint8_t n);

  boolean begin(void);

  void setPWM(uint8_t chan, uint16_t pwm);
  void setLED(uint8_t lednum, uint16_t r, uint16_t g, uint16_t b);
  void write(void);
  void spiwriteMSB(uint32_t d);

 private:
  uint16_t *pwmbuffer;

  uint8_t BCr, BCg, BCb;
  int8_t numdrivers, _clk, _dat;

};


#endif
