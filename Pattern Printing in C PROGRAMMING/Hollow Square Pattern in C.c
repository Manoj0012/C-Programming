//Hollow Square Pattern in C
#include <stdio.h>

int
main ()
{
  int r = 5;
  for (int i = 1; i <= r; i++)
    {
      for (int j = 1; j <= r; j++)
	{
	  if (i > 1 && i < r && j > 1 && j < r)
	    {
	      printf (" ");
	    }
	  else
	    {
	      printf ("%d", j);
	    }
	}
      printf ("\n");
    }
  return 0;
}
