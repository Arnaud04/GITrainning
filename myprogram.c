#include "stdio.h"
#include "stdlib.h"
#include "myprogram.h"

int main(int argc, char * argv[])
{
  printf("Debut du main\n");
  
  return 0;
}

/*
** Sum elements
*/
int sum(int a, int b)
{
  return a+b;
}

/*
** Division function a/b
*/
int division(int a, int b)
{
  int res =0;

  if(b!=0)
  {
    res = a / b;
  }
  return res;
}

/*
** Sub
*/

int sub(int a, int b)
{
  return a-b;
}
