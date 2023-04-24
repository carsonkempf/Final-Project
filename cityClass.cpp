// Programmer: Carson Kempf
// File: cityClass.cpp
// Date: 4/28/23
// Purpose: the city class's function definition program to simulate a police chase

#include <iostream>
#include <string>
#include "cityClass.h"
using namespace std;

void city::printCity()
{

  for (int i = 0; i < 10; i++)
  {
    for (int j = 0; j < 10; j++)
    {
      cout << cityGrid[i][j] << " ";
    }
    cout << endl;
  }
}

void city::setGrid(const int X, const int Y, char gridValue)
{
  cityGrid[X][Y] = gridValue;
}