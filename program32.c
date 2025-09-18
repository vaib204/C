#include <stdio.h>

#define ERR_INVALID -1

unsigned long Factorial(unsigned int iNo)
{
  int iCnt = 0;
  unsigned long iFact = 1;

  if (iNo < 0)
  {
    return ERR_INVALID;
  }

  for (iCnt = iNo; iCnt >= 1; iCnt--)
  {
    iFact = iFact * iCnt;
  }

  return iFact;
}

int main()
{
  unsigned int iValue = 0;
  unsigned long iRet = 0;

  printf("Enter number : \n");
  scanf("%u", &iValue);

  iRet = Factorial(iValue);
  if (iRet == ERR_INVALID)
  {
    printf("Invalid input\n");
  }
  else
  {
    printf("Factorial is : %lu\n", iRet);
  }

  return 0;
}