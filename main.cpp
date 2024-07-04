#include <iostream>
#include <string>
using namespace std;
//
/* eduardo nieves */


/*
Hacer un programa que lea los datos de una persona, los cuales son  nombre, apellido, a�o de nacimiento, sexo, peso, altura.
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

void imprimirMensaje(string mensaje){
	cout << mensaje<< endl;
}

void imprimirString(string mensaje,string dato){
	cout << mensaje<< dato<< endl;
}

void imprimirEntero(string mensaje,int dato){
	cout << mensaje<< dato<< endl;
}

void imprimirFloat(string mensaje,float dato){
	cout << mensaje<< dato<< endl;
}

string leerString(string mensaje){
	string r="";
	cout << mensaje;
	cin >> r;
	return r;
}

float leerFloat(string mensaje){
	float r=0.0;
	cout << mensaje;
	cin >> r;
	return r;
}

int leerEntero(string mensaje){
	int r=0;
	cout << mensaje;
	cin >> r;
	return r;
}

int calcularEdad(int anacimiento){
	int aactual=2024;
	return aactual-anacimiento;
}

int main(int argc, char** argv) {

	imprimirMensaje("----------INICIANDO PROGRAMA----------");
	imprimirMensaje("--------------------------------------");
	//declarar las variables
	string nombre="";
	string apellido="";
	int anacimiento=0;
	float peso=0.0;
	float altura=0.0;
	string sexo="";
	//definimos los contadores del sexo antes del ciclo
	
	int resp=1,masculinos=0,femeninos=0; //donde 1 es para indicar si
	while(resp==1){
		
		///agregamos el algoritmo que queremos repetir una y otra vez
		//paso 1 leer los datos
		nombre=leerString("Ingrese el nombre: ");
		apellido=leerString("Ingrese el apellido: ");
		anacimiento=leerEntero("Ingrese el a#o de nacimiento: ");
		peso=leerFloat("Ingrese el peso: ");
		altura=leerFloat("Ingrese la altura: ");
		sexo=leerString("Ingrese el sexo: ");
		
		/*
		cout << "Ingrese el nombre:";
		cin >> nombre;
		cout << "Ingrese el apellido:";
		cin >> apellido;
		
		cout << "Ingrese el a�o de nacimiento:";
		cin >> anacimiento;
		cout << "Ingrese el peso:";
		cin >> peso;
		cout << "Ingrese la altura:";
		cin >> altura;
		cout << "Ingrese el sexo: m= masculino, f=femenino";
		cin >> sexo;
		*/
		//paso 2 realizacion de los calculos
		int edad =calcularEdad(anacimiento);//calcula la edad pero con una funcion
		//int edad=aactual-anacimiento;//para calcular la edad
		//paso 3 imprimir unitario
		imprimirMensaje("----------DATOS INGRESADOS----------");
		imprimirString("Nombre: ",nombre);
		imprimirString("Apellido: ",apellido);
		imprimirEntero("A#o de Nacimiento: ",anacimiento);
		/*cout << "----------DATOS INGRESADOS----------" << endl;
		cout << nombre  << endl;
		cout << apellido  << endl;
		cout << anacimiento<<endl;
		cout << peso  << endl;
		cout << altura  << endl;
		cout <<"la edad es: " << edad  << endl;// salida del calculo de la edad
		*/
		if( edad<=17){
			imprimirMensaje("la persona es menor de edad");
		}else{
			imprimirMensaje("la persona es mayor de edad");
			//cout <<"la persona es mayor de edad"<< endl;
		}
		if(sexo=="m"){
			masculinos=masculinos+1; // expresiones equivalentes => masculinos++; masculinos+=1;
		}
		if(sexo=="f"){
			femeninos=femeninos+1; // expresiones equivalentes => femeninos++; femeninos+=1;
		}
		resp=leerEntero("Desea registrar otra persona? Ingrese 1 si es un si, Ingrese otro numero en caso de que no");
		/*cout << "�Desea a registrar otra persona? , Si = 1 y No es en otro caso";
		cin >> resp;	*/
	}
	//paso 3 imprimir generales
	imprimirMensaje("----------CANTIDADES DE PERSONAS POR SEXO----------" );
	imprimirEntero("Personas masculinas: ",masculinos);
	imprimirEntero("Personas femeninas: ",femeninos);
	//cout <<"Personas masculinas: "<< masculinos <<endl;
	//cout <<"Personas femeninas: "<< femeninos << endl;
	
	
	return 0;
}
