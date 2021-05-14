#include "stdio.h"
#include "stdlib.h"

int main(int argc, char * argv[])
{
  printf("Debut du main\n");
<<<<<<< HEAD
  
  return 0;
}
=======

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
int div(int a, int b)
{
  int res =0;

  if(b!=0)
  {
    res = a / b;
  }
  return res;
}
>>>>>>> myNewBranch
