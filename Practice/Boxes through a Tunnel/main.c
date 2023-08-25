

#include <stdio.h>
struct box{
    int l;
    int w;
    int h;
};
typedef struct box b;
int get_vol(b v){
    return v.l*v.w*v.h;
}
int max_hi(b v){
    if(v.h<41){
    return 1;
    }
    else{
        return 0;
    }
}
int main()
{  
    int n;
    scanf("%d",&n);
    struct box boxes[n];
    for(int i=0;i<n;i++){
        scanf("%d",&boxes[i].l);
        scanf("%d",&boxes[i].w);
        scanf("%d",&boxes[i].h);
    }
    for(int j=0;j<n;j++){
     if(max_hi(boxes[j])){
         printf("%d\n",get_vol(boxes[j]));
     }    
    }
    return 0;
}
