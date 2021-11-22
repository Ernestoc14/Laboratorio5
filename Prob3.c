//Escribir un algoritmo que lea 3 calificaciones de 4 estudiantes 
//el cual debe ser almacenado en un arreglo de 2 dimensiones. 
//Luego calcule e imprima el promedio de cada estudiante con su 
//respectiva letra (A, B, C, D o F).

//Analisis Entradas:Almacenar 10 calificaciones  
//Procesos:Promedio para Nota final 
//Salidas:Promedio de Calificaciones y Nota Final

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
  { printf("\nDeme la calificacion %d: ",ernesto+1);
    scanf("%f",&vp[ernesto]);
  }//Fin For
  pro(vp);
} //Fin Main

float pro(float vp[])
{ float pro,suma; //Promedio y suma
  int ernesto, cont; //contador
  for (ernesto=0;ernesto<=9;ernesto++)
  {  suma=suma+vp[ernesto];
  }//Fin For
   pro=suma/10;
   if(pro>=91)
   { printf("\nSu nota segun su promedio de %.2f es: A",pro);
   }
   else
   { if(pro>=81)
     { printf("\nSu nota segun su promedio de %.2f es: B",pro);
     }
     else
     { if(pro>=71)
        { printf("\nSu nota segun su promedio de %.2f es: C",pro);
        }
        else
        { if(pro>=61)
          { printf("\nSu nota segun su promedio de %.2f es: D",pro);
          }
          else
          {  printf("\nSu nota segun su promedio de %.2f es: F",pro);
          }
        }
     }
   }
} //Fin proceso 