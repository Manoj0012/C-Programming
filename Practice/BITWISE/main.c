/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
void max(int n,int k){
    int max=0,max1=0,max2=0;
    //printf("%d%d%d\n",max,max1,max2);
    for(int i=1;i<=n;i++){
        for(int j=i+1;j<=n;j++){
            int a=i&j;
            int b=i|j;
            int c=i^j;
            //printf("%d\n",c);
            if(max<a&&a<k){
                max=a;
            }
             if(max1<b&&b<k){
                    max1=b;
                }
            if(max2<c&&c<k){
                    max2=c;
                }
        }
    }
   printf("%d\n%d\n%d",max,max1,max2);
}

int main()
{
    int n,k;
    scanf("%d%d",&n,&k);
    max(n,k);

    return 0;
}
