// Escribir un algoritmo donde se almacene 10 precios de productos y luego recorra
//el arreglo por medio de un ciclo repetitivo para acumular la cantidad de productos
//con un costo mayor a B/.50.00. Finalmente, imprimir el porcentaje de los costos
//mayores a B/.50.00.

//Analisis Entradas:Almacenar 10 Precios  
//Procesos:Acumular la cant de prod con costo mayor a 50   
//Salidas:Porcentaje de costos mayores a 50

#include<stdio.h> //Libreria
float pro(float []);    //Funcion proceso

void main()  //Funcion Main
{ //Declaracion de Variables
  int ernesto; //ernesto realiza la iteracion de For
  float precio, vp[10]; 
  //Codigo
  printf("\nMi nombre es Ernesto Crespo");
  printf("\nCedula: 8-929-1657 ");
  printf("\nGrupo: 1SF111");
  for ( ernesto= 0; ernesto<=9;ernesto++) //For para el array de 10 elementos
  { printf("\nDeme el precio del producto %d: ",ernesto+1);
    scanf("%f",&vp[ernesto]);
  }//Fin For
  pro(vp);
} //Fin Main

float pro(float vp[])
{ float por; //Porcentaje
  int ernesto, cont; //contador
  for (ernesto=0;ernesto<=9;ernesto++)
  { if(vp[ernesto]>=50) //Porcentaje
     { cont=cont+1;
     } //Fin If
     por=cont*(100)/10;
  }//Fin For
  printf("\nEl porcentaje de los costos mayores a B/.50.00 es de %.2f",por);
} //Fin proceso 

