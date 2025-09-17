///////////////////////////////////////////////////////////////
// check whether whether number is even odd
// file name   - program19.c
// description - check whether number is even or odd
// author - Vaibhav Mukund Kulkarni
// date = 11/5/2025
////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdbool.h>

bool CheckEven(int iNo)
{
  if ((iNo % 2) == 0)
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

  bRet = CheckEven(iValue);
  if (bRet == true)
  {
    printf("%d is even number\n", iValue);
  }
  else
  {
    printf("%d is odd number\n", iValue);
  }

  return 0;
}