// Programmer: Carson Kempf
// File: jewelClass.h
// Date: 4/28/23
// Purpose: the jewel class header file to simulate a police chase

#ifndef JEWELCLASS_H
#define JEWELCLASS_H

#include <iostream>
#include <string>
#include "cityClass.h"
using namespace std;

//-----------------------Class Definition --------------------
class jewel
{
public:
  // Description: Populates the 2d array with 'j's and '_'s randomly and sets the values for them
  // Pre: an object of type city
  // Post: the array and jewel values
  void scatterJewels(city &cityGrid);

  // Description:
  // Pre:
  // Post:

private:
  int m_jewelValue;
  int m_jewelX, m_jewelY;

  // member vars
};

#endif