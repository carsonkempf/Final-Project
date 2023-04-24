// Programmer: Carson Kempf
// File: main.cpp
// Date: 4/28/23
// Purpose: the main program to simulate a police chase

#include <iostream>
#include <string>
#include <cstdlib>
#include "cityClass.h"
#include "jewelClass.h"
using namespace std;

int main()
{
  srand(85);
  city cityGrid;
  jewel jewelStuff;

  jewelStuff.scatterJewels(cityGrid);

  cityGrid.printCity();

  return 0;
}