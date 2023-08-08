//Rhombus Pattern

#include<stdio.h>
int r = 5;
void
main ()
{
  for (int i = 1; i <= r; i++)
    {
      for (int j = 1; j <= i; j++)
	{
	  printf (" ");
	}
      for (int k = 1; k <= r; k++)
	{
	  printf (" *");
	}
      printf ("\n");

    }

}
