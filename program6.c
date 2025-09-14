/*
start
   Accept percentage from user
      if percentage is less than 0 and greter than 100
         Display as invalid input
      if percentage is grater than 0 and less than 35
         Display as fail
      if percentage is grater than 35 and less than 50
         Display as pass class
      if percentage is grater than 50 and less than 60
         Display as seconed class
      if percentage is grater than 60 and less than 70
         Display as first class
      if percentage is grater than 70 and less than 100
         Display as first class with distinction

      End
*/

#include <stdio.h>

void DisplayClass(float fPerc)
{
  if ((fPerc < 0.0f) || (fPerc > 100.0f))
  {
    printf("unable to proceesed as input is invalid\n");
    return;
  }

  if ((fPerc >= 0.0f) && (fPerc < 35.0f))
  {
    printf("you are fail\n");
  }

  else if ((fPerc >= 35.0f) && (fPerc < 50.0f))
  {
    printf("pass class\n");
  }

  else if ((fPerc >= 50.0f) && (fPerc < 60.0f))
  {
    printf("seconed class\n");
  }

  else if ((fPerc >= 60.0f) && (fPerc < 70.0f))
  {
    printf("first class\n");
  }

  else if ((fPerc >= 70.0f) && (fPerc <= 100.0f))
  {
    printf("first class with distinction");
  }
}

int main()
{
  float fvalue = 0.0f;

  printf("please enter your percentage:\n");
  scanf("%f", &fvalue);

  DisplayClass(fvalue);
  return 0;
}