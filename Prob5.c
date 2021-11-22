//Elabore un programa en C donde cargue un arreglo de 11X21 
//con unos (1) y cuatros (4) con ciclo repetitivos de manera 
//que quede almacenado que los 4 formen un triángulo, luego 
//recorra el arreglo para realizar la impresión que quede de 
//la siguiente manera.

//Analisis Entradas: 
//Procesos: Hacer el triangulo en la matriz
//Salidas: Triangulo en Matriz 

#include<stdio.h> //Libreria
//float pro(float [5][7]); //Funcion proceso

void main()  //Funcion Main
{ //Declaracion de Variables
  int ernesto,i,mat[11][21]; //ernesto realiza la iteracion de For
  //Codigo
  printf("\nMi nombre es Ernesto Crespo");
  printf("\nCedula: 8-929-1657 ");
  printf("\nGrupo: 1SF111\n");
  for (i=0; i<=10;i++ ) 
  { for(ernesto= 0; ernesto<=20;ernesto++) //For para el array de 3 calfs
    {  if((i+ernesto>=10) && (ernesto-i <=10))
       { mat[i][ernesto]=4;  //Cargamos 4 en matriz
       }
       else
       { mat[i][ernesto]=1;  //Cargamos 1 en matriz
       }
       printf(" %d ",mat[i][ernesto]);  //Impresion de Matriz
    } //Fin For 
    printf("\n");
  }//Fin For
} //Fin Main
