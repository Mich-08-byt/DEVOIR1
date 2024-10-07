#include<stdio.h>

int main()

{
    int f,i,n;
    printf("entre un nombre entier positif");
    scanf("%d",&n);
    f=1;
        for(i=1;i<=n;i++){
        f=f*i;
       printf("factoriel de %d est",f);
    }



return 0 ;
}
