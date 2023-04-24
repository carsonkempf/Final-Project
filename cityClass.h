// Programmer: Carson Kempf
// File: cityClass.h
// Date: 4/28/23
// Purpose: the city class header file to simulate a police chase

#ifndef CITYCLASS_H
#define CITYCLASS_H

#include <iostream>
#include <string>
using namespace std;

class city
{
public:
  // getter and setter functions
  char getGrid(const int X, const int Y) { return cityGrid[X][Y]; }
  void setGrid(const int X, const int Y, char gridValue);
  int getJewelCount() { return m_jewelCount; }
  void setJewelCount(const int value) { m_jewelCount = value; }

  // Description: prints the city grid when called
  // Pre: the cityGrid object exists
  // Post: prints the cityGrid object in a 10x10 format
  void printCity();

private:
  char cityGrid[10][10];
  int m_jewelCount = 47;
};

#endif