/////////////////////////////////////////////////////
// file name   - program26.c
// description - Accept a value from user and find factorial
// author - Vaibhav Mukund Kulkarni
// date = 11/5/2025
//////////////////////////////////////////////////////
#include <stdio.h>

// Input : 5
// 125

int Factorial(int iNo)
{
  int iCnt = 0;
  int iFact = 1;

  for (iCnt = 1; iCnt <= iNo; iCnt++)
  {
    iFact = iFact * iCnt;
  }

  return iFact;
}

int main()
{
  int iValue = 0;
  int iRet = 0;

  printf("Enter number : \n");
  scanf("%d", &iValue);

  iRet = Factorial(iValue);

  printf("Factorial is : %d\n", iRet);

  return 0;
}