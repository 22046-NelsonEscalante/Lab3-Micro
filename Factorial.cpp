/*
------------------------------------
Factorial.cpp
------------------------------------
UNIVERSIDAD DEL VALLE DE GUATEMALA
CC3086 - Programación de Microprocesadores
Laboratorio No.3
------------------------------------

Paralelizar código que calcula el 
factorial de un número ingresado
por el usuario

------------------------------------
*/


#include <iostream>
#include <omp.h>
using namespace std;
// function to find factorial of given number
unsigned long long factorial(unsigned int n)
{
if (n == 0)
return 1;
//define la funci[on de factorial usando programacion paralela. 
unsigned long long factorial = 1;
////Inicializamos la region paralela que distribuye las iteraciones en varios threads]
#pragma omp parallel for reduction (*: factorial)
for (unsigned int i = 1; i <= n; ++i){

    /* #pragma omp critical permite que la seccion dentro del for sea ejecutada de manera segura sin 
     ejecutar dos operaciones en simultaneo*/
    #pragma omp critical
    factorial *= i;
}
return factorial;
}
// Driver code
int main()
{
<<<<<<< Updated upstream
=======
<<<<<<< HEAD
int num;
// Pide el input al usuario

cout << "Ingrese un numero"; 
cin >> num; 
=======
>>>>>>> Stashed changes

cout << "Ingrese el número para el cual desea calcular el factorial.";

int num;
cin >> num;

<<<<<<< Updated upstream
=======
>>>>>>> 2de4684926527d3fb153a58aa434694ccb1a2569
>>>>>>> Stashed changes
cout << "Factorial of "
<< num << " is " << factorial(num) << endl;
return 0;
}