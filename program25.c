/////////////////////////////////////////////////////
// file name   - program25.c
// description - Accept a value from user and perform sumession
// author - Vaibhav Mukund Kulkarni
// date = 11/5/2025
// Input : 5
// 1 + 2 + 3 + 4 + 5
////////////////////////////////////////////////////////////////

#include <stdio.h>

// Input : 5
// 1 + 2 + 3 + 4 + 5

int Summation(int iNo)
{
  int iCnt = 0;
  int iSum = 0;

  for (iCnt = 1; iCnt <= iNo; iCnt++)
  {
    iSum = iSum + iCnt;
  }

  return iSum;
}

int main()
{
  int iValue = 0;
  int iRet = 0;

  printf("Enter number : \n");
  scanf("%d", &iValue);

  iRet = Summation(iValue);

  printf("Summation is : %d\n", iRet);

  return 0;
}