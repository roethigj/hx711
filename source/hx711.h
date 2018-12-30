#include <inttypes.h>

#ifndef _HX711_H_
#define _HX711_H_

class HX711
{

private:
  uint8_t mGainBits;
  float mScale;
  int32_t mOffset;

  uint8_t mClockPin;
  uint8_t mDataPin;

public:
  HX711(uint8_t clockPin, uint8_t dataPin);
  bool isReady();
  void setGain(uint8_t gain);
  int32_t read();
  int32_t readAverage(uint8_t times = 10);
  int32_t getRawValue(uint8_t times = 10);
  float getUnits(uint8_t times = 10);
  void tare(uint8_t times = 10);
  void setScale(float scale);
  void setOffset(int32_t offset);
  void powerDown();
  void powerUp();
  int32_t getOffset();
  float getScale();

};

#endif //_HX711_H_
