// Programmer: Carson Kempf
// File: jewelClass.cpp
// Date: 4/28/23
// Purpose: the jewel class's function definition program to simulate a police chase

#include <iostream>
#include <string>
#include "jewelClass.h"
#include "cityClass.h"
using namespace std;

void jewel::scatterJewels(city &cityGrid)
{
  jewel jewelPositions[47];
  int numPlaced = 0;

  // Fill the array with '_'
  for (int y = 0; y < 10; y++)
  {
    for (int x = 0; x < 10; x++)
    {
      // not really x and y coordinates
      cityGrid.setGrid(x, y, '_');
    }
  }

  while (numPlaced < 47)
  {
    int row = rand() % 10;
    int col = rand() % 10;
    bool alreadyPlaced = false;

    // Check if this position has already been used
    for (int i = 0; i < numPlaced; ++i)
    {
      if (jewelPositions[i].m_jewelX == col && jewelPositions[i].m_jewelY == row)
      {
        alreadyPlaced = true;
        break;
      }
    }

    // add them if they have not been used
    if (!alreadyPlaced)
    {
      jewelPositions[numPlaced].m_jewelX = col;
      jewelPositions[numPlaced].m_jewelY = row;
      
      cityGrid.setGrid(col, row, 'J');
      jewelPositions[numPlaced].m_jewelValue = row + col;

      ++numPlaced;
    }
  }
}