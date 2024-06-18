#include <iostream>
//using namespace std
/* eduardo nieves */


/*
Hacer un programa que lea los datos de una persona, los cuales son  nombre, apellido, año de nacimiento, sexo, peso, altura.
El programa debe lo siguiente:
 calcular la edad
 verificar si esa persona es mayor de edad
 cuantas personas son de sexo masculino y femenino	
*/



int main(int argc, char** argv) {
	
	//declarar las variables
	std::string nombre="";
	std::string apellido="";
	int anacimiento=0;
	//char sexo='';
	float peso=0.0;
	float altura=0.0;
	//paso 1 leer los datos
	std::cout << "Ingrese el nombre:";
	std::cin >> nombre;
	std::cout << "Ingrese el apellido:";
	std::cin >> apellido;
	std::cout << "Ingrese el año de nacimiento:";
	std::cin >> anacimiento;
	std::cout << "Ingrese el peso:";
	std::cin >> peso;
	std::cout << "Ingrese la altura:";
	std::cin >> altura;
	//paso 2 realizacion de los calculos
	int aactual=2024;
	int edad=aactual-anacimiento;//para calcular la edad
	//paso 3 imprimir
	std::cout << "----------DATOS INGRESADOS----------" << std::endl;
	std::cout << nombre  << std::endl;
	std::cout << apellido  << std::endl;
	std::cout << anacimiento<<std::endl;
	std::cout << peso  << std::endl;
	std::cout << altura  << std::endl;
	std::cout <<"la edad es: " << edad  << std::endl;
	return 0;
}
