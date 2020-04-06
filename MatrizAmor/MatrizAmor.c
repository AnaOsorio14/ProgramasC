/* N.P Ana
N.P Matriz Amor
F 17/03/2020
D.P Imprimir la palabra "AMOR" en diagonal
 */

#include <stdio.h>
#include <stdlib.h>
 int main()

 { int i,j;
   char rep,esc;
   do
   {
      system("clear");
      printf("                 MATRIZ DE AMOR\n");
      printf("Descubre la palabra en la matriz\n");
  		printf("Menu para realizar la accion\n");
  		printf("_______________________________\n");
  		printf("F o f (for)\n");
  		printf("W o w (while)\n");
  		printf("D o d (do_while)\n");
  		printf("Ingresa la letra de la opcion con la que quieras realizar la accion ");
  		fflush(stdin); scanf("%s",&esc);
      printf("\n");
      char amor[]= {'A','M','O','R'};
      char matrizamor[4][5];
   switch(esc)
  	{
   case 'F':case'f':
   system("clear");
   printf("\tMATRIZ DE AMOR\n");
   for(i=0;i<4;i++)
   {
     for(j=0;j<4;j++)
     {
       if(i==j || i+j==3)
       {matrizamor[i][j]=amor[i];}
       else
       {matrizamor[i][j]=' ';}
     }
   }
   for(i=0;i<4;i++)
   {
      printf("\t");
     for(j=0;j<4;j++)
     {
       printf("%3c",matrizamor[i][j]);
     }
     printf("\n");
   }
   break;
   default:
   printf("No existe esa opcion\n");
 }
 printf("\n Deseas volver a correr el programa S=si N=no ");
 fflush(stdin); scanf("%s",&rep);
}
while((rep=='S')||(rep=='s'));

}
