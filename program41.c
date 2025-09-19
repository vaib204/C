/////////////////////////////////////////////////////
// file name   - program41.c
// description - check whether number is perfect or not
// date = 12/5/2025
// Author = Vaibhav mukund kulkarni

#include <stdio.h>
#include <stdbool.h>

bool CheckPerfect(int iNo)
{
  int iCnt = 0, iSum = 0;

  if (iNo < 0)
  {
    iNo = -iNo;
  }

  for (iCnt = 1; iCnt <= (iNo / 2); iCnt++)
  {
    if ((iNo % iCnt) == 0)
    {
      iSum = iSum + iCnt;
    }
  }

  if (iNo == iSum)
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

  printf("Enter number : \n");
  scanf("%d", &iValue);

  bRet = CheckPerfect(iValue);

  if (bRet == true)
  {
    printf("%d is perfect number\n", iValue);
  }
  else
  {
    printf("%d is not a perfect number\n", iValue);
  }
  return 0;
}