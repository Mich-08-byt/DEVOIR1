#include<iostream>

 int main(int argc,char**argv)
 {
     float hypotenus,hauteur,base,air_triangle,perimetre_triangle;
     printf("entrez l'hypotenus et la hauteur du triangle :\n");
     scanf("%f ",&hypotenus);
     scanf("%f",&hauteur);
     printf("entrez la base du triangle :\n");
     scanf("%f",&base);
     air_triangle=(base*hauteur)/2;
     perimetre_triangle=hypotenus+hauteur+base;
     printf("le perimetre du triangle est %f\n:",perimetre_triangle);
     printf("l'air du tiangle est %f\n:",air_triangle);

     return 0;

 }
