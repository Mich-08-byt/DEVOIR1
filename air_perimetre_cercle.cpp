#include<iostream>
int main(int argc, char**argv){
    const float pi=3.14 ;
    float rayon,perimetre_cercle,air_cercle;
    printf("entrez le rayon du cercle : ");
    scanf("%f",&rayon);
    air_cercle=pi*rayon*rayon ;
    perimetre_cercle=2*pi*rayon;
    printf("le perimetre du cecle est :%f      ",perimetre_cercle);
    printf("l'air du cercle est :%f        ",air_cercle);
    return 0;
}
