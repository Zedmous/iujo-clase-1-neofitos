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

/*
acumuladores
contadores

while () estrusturas repetitivas indeterminadas o infinitas
for()// estrusturas repetitivas  determinadas o finitas
do while

*/
int main(int argc, char** argv) {
	
	//declarar las variables
	std::string nombre="";
	std::string apellido="";
	int anacimiento=0;
	float peso=0.0;
	float altura=0.0;
	std::string sexo="";
	//definimos los contadores del sexo antes del ciclo
	
	int resp=1,masculinos=0,femeninos=0; //donde 1 es para indicar si
	while(resp==1){
		
		///agregamos el algoritmo que queremos repetir una y otra vez
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
		std::cout << "Ingrese el sexo: m= masculino, f=femenino";
		std::cin >> sexo;
		//paso 2 realizacion de los calculos
		int aactual=2024;
		int edad=aactual-anacimiento;//para calcular la edad
		//paso 3 imprimir unitario
		std::cout << "----------DATOS INGRESADOS----------" << std::endl;
		std::cout << nombre  << std::endl;
		std::cout << apellido  << std::endl;
		std::cout << anacimiento<<std::endl;
		std::cout << peso  << std::endl;
		std::cout << altura  << std::endl;
		std::cout <<"la edad es: " << edad  << std::endl;// salida del calculo de la edad
		if( edad<=17){
			std::cout <<"la persona es menor de edad"<< std::endl;
		}else{
			std::cout <<"la persona es mayor de edad"<< std::endl;
		}
		if(sexo=="m"){
			masculinos=masculinos+1; // expresiones equivalentes => masculinos++; masculinos+=1;
		}
		if(sexo=="f"){
			femeninos=femeninos+1; // expresiones equivalentes => femeninos++; femeninos+=1;
		}
		
		std::cout << "¿Desea a registrar otra persona? , Si = 1 y No es en otro caso";
		std::cin >> resp;	
	}
	//paso 3 imprimir generales
			std::cout << "----------CANTIDADES DE PERSONAS POR SEXO----------" << std::endl;
	std::cout <<"Personas masculinas: "<< masculinos <<std::endl;
	std::cout <<"Personas femeninas: "<< femeninos << std::endl;
	
	
	return 0;
}
