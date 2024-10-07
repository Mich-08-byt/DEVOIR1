#include<stdio.h>

int main()
{
    float x,y,z;
    printf("entrez la longuer du cote x: ");
    scanf("%f",&x);
    printf("entrez la longuer du cote y: ");
    scanf("%f",&y);
    printf("entrez la longuer du cote z: ");
    scanf("%f",&z);
       if(x+y>z && x+z>y && y+z>x){
        if(x==y&&y==z){
            printf("le triangle est equilateral ");
        }
       else if(x==y || y==z || x==z){
        printf("le triangle est isocel ");

       }
      else{
        printf("le triangle est rectangle ");
    }
      }




    return 0;
}
