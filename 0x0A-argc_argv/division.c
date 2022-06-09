#include "main.h"
#include <stdio.h>
/**
 * division - function to test for division
 * @Q: the number working on
 * Return: ans
 */
int division(int Q)
{
  int ans;
  if ((Q % 10) == 0 && Q < 50)
  {
    ans += Q / 10;
  }
  else if ((Q % 10) != 0 && Q < 50)
  {
    ans +=  (Q / 10) + (Q % 10) - 1;
  }
  else if ((Q % 5) == 0 && Q < 20)
  {
    ans += Q / 5;
  }
  else if ((Q % 5) != 0 && Q < 20)
  {
    ans +=  (Q / 5) + (Q % 5) - 1;
  }
  else if ((Q % 2) == 0 && Q < 10)
  {
    ans += Q / 2;
  }
  else if ((Q % 1) == 0 && Q < 2)
  {
    ans += Q / 1;
  }
  else if ((Q % 25) == 0 && Q >= 25)
  {
    ans += Q / 25;
  }
  else if ((Q % 25) != 0 && Q >= 25)
  {
    ans += (Q / 25) + (Q % 25);
  }
  return (ans);
}
