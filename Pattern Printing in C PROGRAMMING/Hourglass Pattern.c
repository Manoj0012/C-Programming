//Hourglass Pattern
#include <stdio.h>

int
main ()
{
  int r=5;
  for(int i=1;i<=r;i++){
      for(int j=1;j<=i;j++){
          printf(" ");
      }
      for(int k=r;k>=i;k--){
          printf(" *");
      }
      printf("\n");
  }
 for(int l=1;l<=r;l++){
     for(int m=r;m>=l;m--){
         printf(" ");
     }
     for(int n=1;n<=l;n++){
         printf(" *");
     }
     printf("\n");
 }
  return 0;
}
