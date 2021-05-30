/*
Alumno: Nemesis J. Sierra Aranda 221404306
Profesor: Josï¿½ Francisco Reinaga Camacho
Carrera: Ingenierï¿½a en Computaciï¿½n, 1er Semestre
*/
#include <iostream>
#include <wchar.h>
#include <locale.h>
#include <stdlib.h>
using namespace std;
void INICIO();
void HOLA_MUNDO();
void MENU(int numero);
bool salir=false;

int main(){
	int select;
	setlocale(LC_ALL, "");
	do{
		INICIO();
		cin>>select;
		MENU(select);
	} while (salir==false);

	return(0);
}

void INICIO(){
	cout<<"TRABAJO FINAL ALGORITMIA"<<endl;
	cout<<endl<<"Seleccione uno de los siguientes ejercicios:"<<endl;
	cout<<"1. Hola mundo."<<endl;
	cout<<"2. Suma de 3 numeros."<<endl;
	cout<<"3. Área de un triángulo."<<endl;
	cout<<"4. Intercambio de valores."<<endl;
	cout<<"5. Sumar, restar, multiplicar y dividir 4 numeros."<<endl;
	cout<<"6. Contar segundos en n dias."<<endl;
	cout<<"7. Determinar el tercer ángulo de un triángulo."<<endl;
	cout<<"8. Centigrados a Fahrenheit."<<endl;
	cout<<"9. ¿Cuánto dinero tiene Juan?"<<endl;
	cout<<"10. Tu edad en el 2030."<<endl;
	cout<<"11. Imprimir solo los positivos."<<endl;
	cout<<"12. Tablas de multiplicar de n numero."<<endl;
	cout<<"13. Factorial de n número."<<endl;
	cout<<"14. El mayor de 20 numeros."<<endl;
	cout<<"15. Suma de pares e impares entre 300 y 555."<<endl;
	cout<<"16. Serie de Fibonacci."<<endl;
	cout<<"17. Determinar si n número pertenece a la serie Fibonacci."<<endl;
	cout<<"18. Suma de términos entre 100 y 10000 de la serie fibonacci."<<endl;
	cout<<"19. Convertir base decimal a base binaria."<<endl;
	cout<<"20. Separar un arreglo en pares e impares."<<endl;
	cout<<"21. El mayor y menor de un arreglo."<<endl;
	cout<<"22. Recorrer los valores de un arreglo."<<endl;
	cout<<"23. Comprobar si la primer mitad del arreglo es mayor a la segunda mitad."<<endl;
	cout<<"24. Pintar un tablero de ajedrez con una matriz."<<endl;
	cout<<"25. Multiplicar la matriz por 2."<<endl;
	cout<<"26. La columna mayor de una matriz."<<endl;
	cout<<"27. Suma de pares e impares mayores al promedio de una matriz."<<endl;
	cout<<"28. Suma de filas y de columnas de una matriz."<<endl;
	cout<<"29. Intercambiar la primera columna con la ultima de una matriz."<<endl;
	cout<<"30. El mayor total, el de cada renglón y la columna y fila mayores de una matriz."<<endl;
	cout<<endl<<"Seleccione un ejercicio o presione 0 para salir..."<<endl;
}

void MENU(int numero){
	system("CLS");
	switch(numero){
		case 1:
			HOLA_MUNDO();
		break;
		case 0:
			salir=true;
		break;
		default:
			cout<<"OPCIÓN NO VALIDA!"<<endl;
		break;
	}
	system("pause");
	system("CLS");
}

void HOLA_MUNDO(){
	cout<<"Hola Mundo"<<endl;
}