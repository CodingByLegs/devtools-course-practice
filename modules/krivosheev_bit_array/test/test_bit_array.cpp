// Copyright 2022 Krivosheev Mrion
#include <gtest/gtest.h>
#include <string>

#include "include/bit_array.h"

TEST(BitArrayTest, DefaultConstructor) {
  // Arrange
  BitArray arr;

  // Act & Assert
  ASSERT_TRUE(arr.IsEmpty());
}

TEST(BitArrayTest, InitializationConstructor) {
  // Arrange
  BitArray arr(2);

  // Act & Assert
  EXPECT_EQ(2, arr.GetSizeBits());
}

TEST(BitArrayTest, Set_Get) {
  // Arrange
  BitArray arr(2);
  arr.SetBit(0, 1);
  // Act & Assert
  EXPECT_EQ(1, arr.GetBit(0));
}

TEST(BitArrayTest, Set_Get_OutOfRange) {
  // Arrange
  BitArray arr(2);
  ASSERT_ANY_THROW(arr.SetBit(3, 1));
  ASSERT_ANY_THROW(arr.GetBit(3));
}

TEST(BitArrayTest, CopyConstructor) {
  // Arrange
  BitArray arr(10);
  for (int i = 0; i < arr.GetSizeBits(); i++)
    arr.SetBit(i, i % 2);
  BitArray arrC(arr);

  // Act & Assert
  for (int i = 0; i < arrC.GetSizeBits(); i++)
    EXPECT_EQ(arr.GetBit(i), arrC.GetBit(i));
}
