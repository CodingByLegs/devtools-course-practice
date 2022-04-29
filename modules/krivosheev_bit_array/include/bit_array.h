// Copyright 2022 Krivosheev Mrion

#ifndef MODULES_KRIVOSHEEV_BIT_ARRAY_INCLUDE_BIT_ARRAY_H_
#define MODULES_KRIVOSHEEV_BIT_ARRAY_INCLUDE_BIT_ARRAY_H_

#include <string>

class BitArray {
 private:
  char* arr;
  int bitSize;
  int size;
 public:
  BitArray();
  explicit BitArray(const int _bitSize);
  BitArray(const BitArray& arrCopy);
  int GetSizeBits();
  void SetBit(unsigned int bitPos, bool val);
  bool GetBit(unsigned int bitPos);
  bool IsEmpty();
};

#endif  // MODULES_KRIVOSHEEV_BIT_ARRAY_INCLUDE_BIT_ARRAY_H_
