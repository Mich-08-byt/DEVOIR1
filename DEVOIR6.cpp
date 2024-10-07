#include<iostream>
#include<math.h>
 int main(int argc,char**argv)

{
  double Ax,Ay,Bx,By,Cx,Cy;

printf("entrez les coordonnees du sommet A (x y):");
scanf("%f %f",&Ax,&Ay);
printf("entrez coordonnees du sommet B(x y ):");
scanf("%f %f",&Bx,&By);
printf("entrez coordonnees du sommet C(x y ):");
scanf("%f %f",&Cx,&Cy);
double AB= sqrt(pow(Bx -Ax,2)+pow(By-Ay, 2));
double BC= sqrt(pow(Cx-Bx,2)+pow(Cy-By, 2));
double CA= sqrt(pow(Ax-Cx,2)+pow(Ay-Cy, 2));
double perimetre= AB+BC+CA;
printf("AB=%.2f\n",AB);
printf("BC=%.2f\n",BC);
printf("CA=%.2f\n",CA);
printf("perimetre=%.2f\n",perimetre);

return 0;

}


