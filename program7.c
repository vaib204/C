/*start
Accept  age from user
    if age is less than 5 then there will no ticket
    if it is

*/

#include <stdio.h>
void DisplayCalculate(int iage)
{
  if ((iage < 0) && (iage > 5))
  {
    printf("ticket is free");
  }
  else if ((iage >= 5) && (iage < 18))
  {
    printf("ticket price is 700");
  }
  else if ((iage >= 18) && (iage < 50))
  {
    printf("ticket price is 999");
  }
  else if ((iage >= 50) && (iage < 100))
  {
    printf("ticket price is 500");
  }
}

int main()
{
  int iage = 0;

  printf("enter your age:");
  scanf("%d", &iage);

  DisplayCalculate(iage);

  return 0;
}