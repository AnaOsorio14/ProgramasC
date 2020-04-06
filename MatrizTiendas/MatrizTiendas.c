/* N.P Ana
N.P Tiendas
F 17/03/2020
D.P Diseñar un programa que pida las ventas de cada día de la semana de 5
tiendas, tienes que ponerle nombre a las mismas. Muestre las ventas por día
y las ventas por semana por tienda en una tabla.
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
 int main()

 { int i,j;
   float a=0;
   char rep,esc;
   do
   {  a=0;
      system("clear");
      printf("                 VENTAS DE LA SEMANA\n");
      printf("Descubre la palabra en la matriz\n");
  		printf("Menu para realizar la accion\n");
  		printf("_______________________________\n");
  		printf("F o f (for)\n");
  		printf("W o w (while)\n");
  		printf("D o d (do_while)\n");
  		printf("Ingresa la letra de la opcion con la que quieras realizar la accion ");
  		fflush(stdin); scanf("%s%*c",&esc);
      printf("\n");
      char semana[][20] = {"Lunes", "Martes", "Miercoles", "Jueves", "Viernes", "Sabado", "Domingo"};
      char tienda[5][50];
      float dinero[5][7];
      float acumulador[5];
   switch(esc)
  	{
   case 'F':case'f':
   for(i=0;i<5;i++)
   {    printf("Ingresa el nombre de la tienda %s:  \n",tienda[i+1]);
        fflush(stdin);gets(tienda[i]);
     for(j=0;j<7;j++)
      {
        printf("Ingresa las ventas del dia %-10s $",semana[j]);
        scanf("%f%*c",&dinero[i][j]);
        acumulador[i]=acumulador[i]+dinero[i][j];
      }
      printf("\n");
  }
  system("clear");
   for(i=0;i<5;i++)
   {
     printf("\t\t\t%s",tienda[i]);
   }
     printf("\n");
   for(i=0;i<7;i++)
   {  printf("%s",semana[i]);
     for(j=0;j<5;j++)
     {
       if(i==2 && j==0)
       {printf("\t\t$%.2f",dinero[j][i]);}
       else
       {printf("\t\t\t$%.2f",dinero[j][i]);}
     }
     printf("\n");
   }
   printf("---------------------------------------------------------------------------------------------------------\n");
   printf("TOTAL");
   for(i=0;i<5;i++)
   {printf("\t\t\t$%.2f",acumulador[i]);}
   break;










   default:
   printf("No existe esa opcion\n");
 }
 printf("\n Deseas volver a correr el programa S=si N=no ");
 fflush(stdin); scanf("%s",&rep);
}
while((rep=='S')||(rep=='s'));

}
