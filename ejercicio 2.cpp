/* Realizar un algoritmo que convierta una temperatura en grados Celsius a grados Fahrenheit.
Posteriormente codificar el algoritmo en lenguaje C. ( La f�rmula de conversi�n es F=
(9.0/5.0)*C+32.0 Usar datos de tipo float. Los datos de entrada se introducir�n en la declaraci�n de
las variables. */

#include <iostream>

using namespace std;

int main() {
	float Celsius;
	float Fahrenheit;
	
	cout<<"\n\tIntroduzca los grados C: ";
	cin>>Celsius;
	
	Fahrenheit = (9.0 / 5.0) * Celsius + 32.0;
	cout<<"\n\tLos "<<Celsius<<" grados C se han convertido en "<<Fahrenheit<<" grados F."<<enld;
	system("pause");
	
	return 0;
}
