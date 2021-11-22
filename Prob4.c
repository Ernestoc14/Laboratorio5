//Escribir un algoritmo que lea 10 valores numéricos enteros 
//y que los mismos se almacenen en un arreglo. Luego deberá 
//ordenar el arreglo para imprimir los valores de menor a mayor.

//Analisis Entradas:10 Numeros Enteros 
//Procesos: Hacer el ordenamiento de menor a mayor  
//Salidas: Numeros Ordenados

#include<stdio.h> //Libreria
float ordenar(int []);    //Funcion proceso orden

void main()  //Funcion Main
{ //Declaracion de Variables
  int ernesto,vp[10];; //ernesto realiza la iteracion de For  
  //Codigo
  printf("\nMi nombre es Ernesto Crespo");
  printf("\nCedula: 8-929-1657 ");
  printf("\nGrupo: 1SF111");
  for ( ernesto= 0; ernesto<=9;ernesto++) //For para el array de 10 elementos
  { printf("\nDeme el valor %d: ",ernesto+1);
    scanf("%d",&vp[ernesto]);
  }//Fin For
  ordenar(vp);
} //Fin Main

float ordenar(int vp[])
{ int ernesto, j, aux;
  for (ernesto=0;ernesto<=9;ernesto++)
  { for(j=ernesto+1;j<=9;j++)
     {  if (vp[ernesto]>vp[j])
        { aux=vp[ernesto];
          vp[ernesto]=vp[j];
          vp[j]=aux;
        }
     }// Fin for
  }//Fin For
  printf("\nEl vector ordenado de menor a mayor es: ");
  for(j=0;j<=9;j++)
  {printf("\n%d",vp[j]);
  }
} //Fin proceso 

