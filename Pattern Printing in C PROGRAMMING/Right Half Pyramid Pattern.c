#include <stdio.h>

int
main ()
{
  int r = 5, c = 'A';
  for (int i = 1; i <= r; i++)
    {
      for (int k = 1; k <= i; k++)
	{
	  printf ("*");
	}
      printf ("\n");
    }

  return 0;
}
