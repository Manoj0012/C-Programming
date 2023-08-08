
// C program to print the inverted left half pyramid pattern
// of stars
#include <stdio.h>

int main()
{
 int  r=5;
   for(int i=1;i<=r;i++){
       for(int k=1;k<=i;k++){
           printf(" ");
       }
      for(int j=r;j>=i;j--){
           printf("*");
       }
       printf("\n");
   }

    return 0;
}

// C program to print right half pyramid pattern of
// alphabets
#include <stdio.h>

int main()
{
 int  r=5,c='A';
   for(int i=1;i<=r;i++){
       for(int k=1;k<=i;k++){
           printf(" ");
       }
      for(int j=r;j>=i;j--){
           printf("%c",c++);
       }
       printf("\n");
   }

    return 0;
}