#include<iostream>

int main(int argc ,char**argv)
{
 float longueur,largeur,air_rectangle,perimetre_rectangle;
 printf("entrez la longueur du rectangle:  ");
 scanf("%f",&longueur);
 printf("entrez la largeur du rectangle: ");
 scanf("%f",&largeur);
  perimetre_rectangle=(longueur+largeur)*2 ;
  air_rectangle=longueur*largeur;
  printf("le perimetre_rectangle est %f\n: ",perimetre_rectangle);
  printf("le air_rectangle est%f\n:",air_rectangle);

 return 0;
}
