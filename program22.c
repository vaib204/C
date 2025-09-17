///////////////////////////////////////////////////////////////
//
// file name   - program22.c
// description - check whether number is divisible by 5
// author - Vaibhav Mukund Kulkarni
// date = 11/5/2025
////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdbool.h>

bool CheckDivisible(int iNo)
{
  if ((iNo % 5) == 0)
  {
    return true;
  }
  else
  {
    return false;
  }
}

int main()
{
  int iValue = 0;
  bool bRet = false;

  printf("Enter number to check whether it is even or odd : \n");
  scanf("%d", &iValue);

  bRet = CheckDivisible(iValue);
  if (bRet == true)
  {
    printf("%d is divisible by 5\n", iValue);
  }
  else
  {
    printf("%d is not divisible by 5\n", iValue);
  }

  return 0;
}