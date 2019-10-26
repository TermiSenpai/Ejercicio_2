/* Realizar un algoritmo que convierta una temperatura en grados Celsius a grados Fahrenheit.
Posteriormente codificar el algoritmo en lenguaje C. ( La fórmula de conversión es F=
(9.0/5.0)*C+32.0 Usar datos de tipo float. Los datos de entrada se introducirán en la declaración de
las variables. */

#include <iostream>

using namespace std;

int main() {
	float Celsius;
	float Fahrenheit;
	
	cout<<"\n\tIntroduzca los grados C: ";
	cin>>Celsius;
	
	Fahrenheit = (9.0 / 5.0) * Celsius + 32.0;
	cout<<"\n\tLos "<<Celsius<<" grados C se han convertido en "<<Fahrenheit<<" grados F.";
	
	return 0;
}
