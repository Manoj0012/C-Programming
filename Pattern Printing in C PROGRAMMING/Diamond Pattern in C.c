//Diamond Pattern in C

#include<stdio.h>
int r = 5;
void
main ()
{
  for (int n = 1; n <= r; n++)
    {
      for (int m = r; m >= n; m--)
	{
	  printf (" ");
	}
      for (int l = 1; l <= n; l++)
	{
	  printf (" *");
	}
      printf ("\n");
    }
  for (int i = 1; i <= r; i++)
    {
      for (int j = 1; j <= i; j++)
	{
	  printf (" ");
	}
      for (int j = r; j >= i; j--)
	{
	  printf (" *");
	}
      printf ("\n");

    }


}
