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
using namespace std;
// function to find factorial of given number
unsigned int factorial(unsigned int n)
{
if (n == 0)
return 1;
return n * factorial(n - 1);
}
// Driver code
int main()
{
int num = 5;
cout << "Factorial of "
<< num << " is " << factorial(num) << endl;
return 0;
}