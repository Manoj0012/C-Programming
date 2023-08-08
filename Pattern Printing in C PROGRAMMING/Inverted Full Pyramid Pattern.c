//Inverted Full Pyramid Pattern

#include<stdio.h>
int
main ()
{
  int r = 5, t = 0;
  for (int i = 1; i <= r; i++){
    for(int l=1;l<=i;l++){
        printf(" ");
    }
      for (int j = r; j >= i; j--)
	{
	  printf (" *");
	}
      printf ("\n");
    }
}
