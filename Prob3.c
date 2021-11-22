//Escribir un algoritmo que lea 3 calificaciones de 4 estudiantes 
//el cual debe ser almacenado en un arreglo de 2 dimensiones. 
//Luego calcule e imprima el promedio de cada estudiante con su 
//respectiva letra (A, B, C, D o F).

//Analisis Entradas:3 calificaciones de 4 estudiantes
//Procesos:Promedio para Nota final 
//Salidas: Nota Final

#include<stdio.h> //Libreria
float pro(float [3][4]); //Funcion proceso

void main()  //Funcion Main
{ //Declaracion de Variables
  int ernesto,i; //ernesto realiza la iteracion de For
  float precio, vp[3][4]; 
  //Codigo
  printf("\nMi nombre es Ernesto Crespo");
  printf("\nCedula: 8-929-1657 ");
  printf("\nGrupo: 1SF111");
  for (i=0; i<=3;i++ ) //For para el array de 4 estud
  { for(ernesto= 0; ernesto<=2;ernesto++) //For para el array de 3 calfs
      {printf("\nDeme la calificacion %d del estudiante %d: ",ernesto+1,i+1);
      scanf("%f",&vp[ernesto][i]);
      }
  }//Fin For
  pro(vp);
} //Fin Main

float pro(float vp[3][4])
{ float prom[4],suma; //Promedio y suma
  int ernesto,i,cont; //contador
  for (i=0;i<=3;i++)
  {  for (ernesto=0;ernesto<=2;ernesto++)
     { prom[i]=vp[ernesto][i]; //promedio
     }
  }//Fin For
  for (i=0;i<=3;i++)
  { printf("\nEl promedio del estudiante %d es: %f",i+1,prom[i]);
  }
   //pro=suma/10;
 for (i=0;i<=3;i++) //Est
 {//for (ernesto=0;ernesto<=2;ernesto++) //Calfs
 // { 
    if(prom[i]>=91)
    { printf("\nSu nota segun su promedio de %.2f es: A",prom[i]);
    }
    else
    { if(prom[i]>=81)
       { printf("\nSu nota segun su promedio de %.2f es: B",prom[i]);
       }
      else
      { if(prom[i]>=71)
        { printf("\nSu nota segun su promedio de %.2f es: C",prom[i]);
        }
        else
        { if(prom[i]>=61)
          { printf("\nSu nota segun su promedio de %.2f es: D",prom[i]);
          }
          else
          {  printf("\nSu nota segun su promedio de %.2f es: F",prom[i]);
          }
        }
      }
    }
 // } //Fin For 2
 }//Fin For 1
} //Fin proceso 