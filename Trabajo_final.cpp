/*
Alumno: Nemesis J. Sierra Aranda 221404306
Profesor: José Francisco Reinaga Camacho
Carrera: Ingeniería en Computación, 1er Semestre
*/
#include <iostream>
#include <wchar.h>
#include <locale.h>
#include <stdlib.h>
using namespace std;
void INICIO();
void MENU(int numero);
void HOLA_MUNDO();
void SUMA3NUMS();
void AREA_TRIANGULO();
void INTERCAMBIAR_VALORES();
void OPERACIONES();
void SEGUNDOS_DIAS();
void ANGULOS();
void CENTIGRADOS_FAHRENHEIT();
void DINERO_JUAN();
void EDAD_2030();
void SOLO_POSITIVOS();
void TABLAS();
void FACTORIAL();
void MAYOR_20NUMS();
void PARES_IMPARES_300_555();
void FIBONACCI_20();
void PERTENECE_A_FIBONACCI();
void FIBONACCI_100_10000();
void DECIMAL_BINARIO();
void PARES_IMPARES();
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
		case 2:
			SUMA3NUMS();
		break;
		case 3:
			AREA_TRIANGULO();
		break;
		case 4:
			INTERCAMBIAR_VALORES();
		break;
		case 5:
			OPERACIONES();
		break;
		case 6:
			SEGUNDOS_DIAS();
		break;
		case 7:
			ANGULOS();
		break;
		case 8:
			CENTIGRADOS_FAHRENHEIT();
		break;
		case 9:
			DINERO_JUAN();
		break;
		case 10:
			EDAD_2030();
		break;
		case 11:
			SOLO_POSITIVOS();
		break;
		case 12:
			TABLAS();
		break;
		case 13:
			FACTORIAL();
		break;
		case 14:
			MAYOR_20NUMS();
		break;
		case 15:
			PARES_IMPARES_300_555();
		break;
		case 16:
			FIBONACCI_20();
		break;
		case 17:
			PERTENECE_A_FIBONACCI();
		break;
		case 18:
			FIBONACCI_100_10000();
		break;
		case 19:
			DECIMAL_BINARIO();
		break;
		case 20:
			PARES_IMPARES();
		break;
		case 0:
			salir=true;
			cout<<endl<<"Cerrando programa..."<<endl<<endl;
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

void SUMA3NUMS(){
	float primernum, segundonum, tercernum, resultado;
	cout<<"Ingrese primer numero \n"; //para imprimir y pedir el primer numero, \n es el salto de linea
	cin>>primernum; //para tomar el dato
	cout<<"Ingrese segundo numero "<<endl; //para imprimir y pedir el segundo numero, endl es para terminar linea
	cin>>segundonum;
	cout<<"Ingrese tercer numero "<<endl; //para imprimir y pedir el tercer numero, endl es para terminar linea
	cin>>tercernum;
	resultado=primernum+segundonum+tercernum; //hace la operacion
	cout<<"El resultado es: "<<resultado<<endl; //imprime el resultado y da un salto de linea
}

void AREA_TRIANGULO(){
	float base, altura, res;
	cout<<"AREA DE UN TRIANGULO"<<endl<<endl;
	cout<<"Inserte el valor de la base"<<endl;
	cin>>base;
	cout<<"Inserte el valor de la altura"<<endl;
	cin>>altura;
	res=(base*altura)/2;
	cout<<"El area del triangulo es: "<<res<<endl;
}

void INTERCAMBIAR_VALORES(){
	int valorX, valorY, valorZ, num, seleccion;
	cout<<"INTERCAMBIAR DOS VALORES"<<endl<<endl;
	cout<<"Ingrese el valor de X"<<endl;
	cin>>valorX;
	cout<<"Ingrese el valor de Y"<<endl;
	cin>>valorY;
	num=0;
	while (num==0){
		cout<<"Seleccione 1 para mostrar X, 2 para Y o 3 para intercambiar"<<endl;
		cin>>seleccion;
		switch (seleccion){
			case 1:
				cout<<"El valor de X es: "<<valorX<<endl;
			break;
			case 2:
				cout<<"El valor de Y es: "<<valorY<<endl;
			break;
			case 3:
				valorZ=valorX;
				valorX=valorY;
				valorY=valorZ;
				cout<<"Valores intercambiados"<<endl;
			break;
			default:
				cout<<"Fin del algoritmo..."<<endl;
				num++;
			break;	
		}
	}
}

void OPERACIONES(){
	float first, second, third, fourth; 
	double suma, resta, mult, div;
	cout<<"SUMAR, RESTAR, MULTIPLICAR Y DIVIDIR 4 NUMEROS"<<endl<<endl;
	cout<<"Inserte el primer numero"<<endl;
	cin>>first;
	cout<<"Inserte el segundo numero"<<endl;
	cin>>second;
	cout<<"Inserte el tercer numero"<<endl;
	cin>>third;
	cout<<"Inserte el cuarto numero"<<endl;
	cin>>fourth;
	suma=first+second+third+fourth;
	resta=first-second-third-fourth;
	mult=first*second*third*fourth;
	div=first/second/third/fourth;
	cout<<"La suma de los numeros es: "<<suma<<endl;
	cout<<"La resta de los numeros es: "<<resta<<endl;
	cout<<"La multiplicacion de los numeros es: "<<mult<<endl;
	cout<<"La division de los numeros es: "<<div<<endl;
}

void SEGUNDOS_DIAS(){
	int dias;
	double segs;
	cout<<"DIAS A SEGUNDOS"<<endl<<endl;
	cout<<"Introduzca el numero de dias"<<endl;
	cin>>dias;
	segs=dias*24;
	segs=segs*3600;
	cout<<"Tiene: "<<segs<<" segundos"<<endl;
}

void ANGULOS(){
	int anguloA, anguloB, anguloC;
	cout<<"OBTENER EL ANGULO RESTANTE DE UN TRIANGULO"<<endl<<endl;
	cout<<"Ingrese el angulo A"<<endl;
	cin>>anguloA;
	cout<<"Ingrese el angulo B"<<endl;
	cin>>anguloB;
	anguloC=180-anguloA-anguloB;
	cout<<"El angulo restante es: "<<anguloC<<endl;
}

void CENTIGRADOS_FAHRENHEIT(){
	float C, F;
	cout<<"CONVERTIR CENTIGRADOS A FAHRENHEIT"<<endl<<endl;
	cout<<"Ingrese los grados centigrados"<<endl;
	cin>>C;
	F=(C*9/5)+32;
	cout<<"Son "<<F<<" grados fahrenheit"<<endl;
}

void DINERO_JUAN(){
	int doscientos, cien, cincuenta, res;
	cout<<"¿CUANTO DINERO TIENE JUAN?"<<endl<<endl;
	cout<<"¿Cuantos billetes de $200 tiene Juan?"<<endl;
	cin>>doscientos;
	cout<<"¿Cuantos de $100 pesos?"<<endl;
	cin>>cien;
	cout<<"¿Cuantos de $50 pesos?"<<endl;
	cin>>cincuenta;
	doscientos*=200;
	cien*=100;
	cincuenta*=50;
	res=doscientos+cien+cincuenta;
	cout<<"Juan tiene $"<<res<<" pesos"<<endl;
}

void EDAD_2030(){
	int year, age, res;
	cout<<"TU EDAD EN EL AÑO 2030"<<endl<<endl;
	cout<<"Ingrese el año actual."<<endl;
	cin>>year;
	cout<<"Ingrese la edad actual del a persona."<<endl;
	cin>>age;
	res=age+(2030-year);
	cout<<"En el año 2030 tendrá "<<res<<" años."<<endl;
}

void SOLO_POSITIVOS(){
	int numeros[10];
	cout<<"IMPRIMIR SOLO LOS POSITIVOS DE UN ARREGLO"<<endl<<endl;
	cout<<"Escriba diez numeros positivos o negativos"<<endl;
	for(int i=0;i<=9;i++){
		cin>>numeros[i];
	}
	cout<<"Los numeros positivos son:"<<endl;
	for(int i=0;i<=9;i++){
		if(numeros[i]>0){
		cout<<numeros[i]<<endl;
		}
	}
}

void TABLAS(){
	int num, resultado;
	cout<<"TABLAS DE MULTIPLICAR"<<endl<<endl;
	cout<<"Escriba el numero"<<endl;
	cin>>num;
	for(int i=1;i<=10;i++){
		resultado=i*num;
		cout<<i<<" x "<<num<<" = "<<resultado<<endl;
	}
}

void FACTORIAL(){
	int num,x,resultado;
	cout<<"FACTORIAL DE UN NUMERO"<<endl<<endl;
	cout<<"Escriba el numero entero"<<endl;
	cin>>num;
	x=num-1;
	while (x>0){
		num=num*x;
		x--;
	}
	cout<<"El resultado es: "<<num<<endl;
}

void MAYOR_20NUMS(){
	int numeros[20], elmayor;
	elmayor=0;
	cout<<"EL MAYOR DE 20 NÚMEROS"<<endl<<endl;
	cout<<"Escriba 20 numeros"<<endl;
	for(int i=0;i<20;i++){
		cin>>numeros[i];
	}
	for(int i=0;i<20;i++){
		if(numeros[i]>elmayor){
			elmayor=numeros[i];
		}
	}
	cout<<"El numero mayor es: "<<elmayor<<endl;
}

void PARES_IMPARES_300_555(){
	double pares, impares;
	int i;
	i=300;
	cout<<"SUMA DE PARES E IMPARES ENTRE EL 300 Y 555"<<endl<<endl;
	while(i<=555){
		if(i%2==0){
			pares=pares+i;
		}
		else {
			impares=impares+i;
		}
		i++;
	}
	cout<<"La suma de pares es: "<<pares<<endl;
	cout<<"La suma de impares es: "<<impares<<endl;
}

void FIBONACCI_20(){
	double secuencia=0, 
	anterior1=1,
	anterior2=-1;
	cout<<"LOS 20 PRIMEROS NUMEROS DE LA SECUENCIA FIBONACCI"<<endl<<endl;
	for(int i=0;i<20;i++){
		secuencia=anterior1+anterior2;
		cout<<secuencia<<endl;
		anterior2=anterior1;
		anterior1=secuencia;
	}
}

void PERTENECE_A_FIBONACCI(){
	long double secuencia=0, 
	anterior1=1,
	anterior2=-1;
	int num, z;
	cout<<"DETERMINA SU UN NUMERO PERTENECE A LA SERIE FIBONACCI"<<endl<<endl;
	cout<<"Ingrese el numero"<<endl;
	cin>>num;
	for(int i=0;i<99999;i++){
		secuencia=anterior1+anterior2;
		if(num==secuencia){
			z=1;
		}
		anterior2=anterior1;
		anterior1=secuencia;
	}
	if (z==1){
		cout<<"El numero SI pertenece a la serie fibonacci."<<endl;
	}
	else {
		cout<<"El numero NO pertenece a la serie fibonacci."<<endl;
	}
}

void FIBONACCI_100_10000(){
	long double secuencia=0, 
	anterior1=1,
	anterior2=-1,
	suma=0;
	cout<<"LA SUMA DE LOS VALORES DE FIBONACCI ENTRE EL 100 Y 10000"<<endl<<endl;
	for(int i=0;i<99999;i++){
		secuencia=anterior1+anterior2;
		if(secuencia>=100 && secuencia<=10000){
			suma=suma+secuencia;
		}
		anterior2=anterior1;
		anterior1=secuencia;
	}
	cout<<"La suma suma de los valores entre 100 y 10000 es: "<<suma<<endl;
}

void DECIMAL_BINARIO(){
	int num, num2; 
	int count=0,count2;
	cout<<"CONVERTIR BASE DECIMAL A BASE BINARIA"<<endl<<endl;
	cout<<"Ingrese el numero a convertir"<<endl;
	cin>>num;
	num2=num;
	while (num>0){
		num=num/2;
		count++;
	}
	int cadena[count];
	count2=count;
	while (num2>0){
		if(num2%2==0){
			cadena[count]=0;
		}
		else {
			cadena[count]=1;
		}
		num2=num2/2;
		count--;
	}
	cout<<"Convertido a binario es: "<<endl;
	for(count=1;count<=count2;count++){
		cout<<cadena[count];
	}
	cout<<endl;
}

void PARES_IMPARES(){
	int arreglo[20], pares=0, impares=0, i;
	for(i=0;i<20;i++){
		cout<<"Ingrese el numero de la posicion "<<i<<endl;
		cin>>arreglo[i];
		if(arreglo[i]%2==0){
			pares++;
		}
		else{
			impares++;
		}
	}
	int arreglopar[pares], arregloimpar[impares];
	pares=0;
	impares=0;
	for(i=0;i<20;i++){
		if(arreglo[i]%2==0){
			arreglopar[pares]=arreglo[i];
			pares++;
		}
		else{
			arregloimpar[impares]=arreglo[i];
			impares++;
		}
	}
	cout<<"Los numeros pares son:";
	for(i=0;i<pares;i++){
		cout<<" "<<arreglopar[i];
	}
	cout<<"\nLos numeros impares son:";
		for(i=0;i<impares;i++){
		cout<<" "<<arregloimpar[i];
	}
	cout<<endl;
}