#include <iostream>
using namespace std;
/*
//1. Sumar todos los enteros pares desde 2 hasta 100.
int main(int argc, char *argv[]) {
	int a=0;
	for(int i=0;i<=100;i++){
		if(i%2==0)
			a=a+i;
	}
		
	
	cout<<a<<" ";
	
	return 0;
}
*/

/*
//2.Escriba un c�digo que solicite al usuario ingresar dos n�meros enteros y que muestre
//el producto de ambos.
int main(int argc, char *argv[]) {
	int a,b,c;
	cout<<"ingrese 2 numeros enteros"<<endl;
	cin>>a>>b;
	
	c=a*b;
	cout<<"resultado de la multiplicaion? "<<c;
	
	
	
	return 0;
}
*/
/*
//3.Escriba un c�digo que solicite el primer nombre de una persona, el apellido paterno
//y el apellido materno. Retornar su correo UNSA generado, el cual consiste de la
//primera letra del nombre, el apellido paterno completo, y la primera letra del apellido
//materno. (se agrega el dominio de la universidad al final).
int main(int argc, char *argv[]) {
	
	
	char a[20];
	char b[20];
	char c[20];
	
	cout<<"ingrese nombre "<<endl;
	cin>>a;
	cout<<"ingrese apellido paterno "<<endl;
	cin>>b;
	cout<<"ingrese apellido materno "<<endl;
	cin>>c;
	
	cout<<"correo unsa generado? "<<a[0]<<b<<c[0]<<"@unsa.edu.pe"<<endl;
*/




/*
//4.Calcule los primeros 50 n�meros primos y muestre el resultado en pantalla.
int divi(int a){
	
	int cont;
	int b=0;
	for(int i=1;i<a;i++){
		cont=a%i;
		if(cont==0){
			b++;
		}
	}
	return b;
	
}

int main(int argc, char *argv[]) {
	
	for(int i=0;i<50;i++){
		if(divi(i)==1)
			cout<<i<<" ";
	}
	
	return 0;
}

*/

/*
//5.Escribir un programa que visualice en pantalla los n�meros m�ltiplos de 5
//comprendidos entre 1 y 100.
int main(int argc, char *argv[]) {
	
	for(int i=0;i<100;i++){
		if(i%5==0)
			cout<<i<<" ";
		
	}
	
	return 0;
}
*/


/*
//6. Escriba un c�digo que solicite ingresar dos n�meros ?? y ??, tal que ?? < ??. Muestre
//todos los n�meros primos que se encuentren entre el rango de valores, de no
//encontrarse, mostrar el primo m�s cercano a ?? o ??.
int divi(int a){
	
	int cont;
	int b=0;
	for(int i=1;i<a;i++){
		cont=a%i;
		if(cont==0){
			b++;
		}
	}
	return b;
	
}
	
	int main(int argc, char *argv[]) {
	int a,b;
	cout<<"INGRESE 2 NUMEROS "<<endl;
	cin>>a>>b;

	for(int i=a;i<b;i++){
		if(divi(i)==1)
	     	cout<<i<<" ";
	}
		
	return 0;
}

*/
/*
//7.Elabore un programa que solicite ingresar una hora del d�a (HH:MM en formato de
//cadena), solicite un tiempo en minutos a agregar, y retorne la hora de finalizaci�n (el
//formato de salida debe de estar en AM o PM seg�n corresponda).
int main(int argc, char *argv[]) {
	int a;
	int b;
	cout<<"INGRESE FECHA DESEADA"<<endl;
	cout<<"INGRESE HORA "<<endl;
	cin>>a;
	cout<<"INGRESE MINUTOS"<<endl;
	cin>>b;
	
	if(a>=13||a<=24 )
		cout<<a<<":"<<b<<" PM";
	if(a>=1|| a<=12);
		cout<<a<<":"<<b<<" AM";
	
	
	return 0;
}

*/



/*
//9.Elabore un c�digo que reciba como entrada una secuencia de caracteres que contiene
//un numero flotante y retorne el n�mero redondeado.
int main(int argc, char *argv[]) {
	int a;
	float b;
	cout<<"ingrese nuemro flotante"<<endl;
	cin>>b;
	a=b;
	cout<<"resultado "<<a;
	
	
	
	return 0;
}
*/
/*
//10.Elabore un c�digo que solicite un numero entre 100 < x < 999 y muestre el resultado
//en binario
#include <bitset>

int main(int argc, char *argv[]) {
int a;
cout<<"INGRESE UN NUMERO entre 100 AL 999"<<endl;
cin>>a;
while(a<100 || a>999){
cout<<"ingrese un numero entre 100 al 999"<<endl;
cin>>a;
}
bitset<32> bina(a);
cout<<"NUMERO EN BINARI? "<<bina;


return 0;
}
*/

/*
//11. Elabore un programa que lea n n�meros y determine cu�l es el mayor, el menor y la
//media de los n�meros le�dos.
int main(int argc, char *argv[]) {
	int a;
	int b;
	cout<<"ingrese 2 numeros "<<endl;
	cin>>a>>b;
	if(a>b)
		cout<<"el mayor es "<<a;
	if(b>a)
		cout<<"el mayor es "<<b;
	cout<<endl;
	cout<<"media de los nueros es "<<(a+b)/2;
	
	
	return 0;
}
*/

/*
//12.Elabore un programa que calcule la serie de Fibonacci. La serie de Fibonacci es la
//sucesi�n de n�meros: 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, ... Cada n�mero se calcula sumando
//los dos anteriores a �l.
int fibo(int a){
	if(a < 2)
		return a;
	return fibo(a-1) + fibo(a-2);
}
	int main() {
		int a;
		cout<<"ingrese numero"<<endl;
		cin >> a;
		fibo(a);
		for(int i=0;i<=a;i++)
			cout <<fibo(i)<<"-";
		return 0;
	}
*/


/*
//13.Elabore un algoritmo que lea por teclado dos n�meros enteros y determine si uno es
//divisor del otro.
int main(int argc, char *argv[]) {
	int a;
	int b;
	cout<<"ingrese 2 numeros "<<endl;
	cin>>a>>b;
	if(a%b==0)
		cout<<"b es divisor de a"<<endl;
	if(b%a==0)
		cout<<"a es divisor de b"<<endl;
	if(a%b!=0 && b%a!=0)
		cout<<"no son divisores"<<endl;
	
	
	
	
	return 0;
}
*/
/*
//14.Calcula el promedio de 3 notas para n estudiantes.
int main(int argc, char *argv[]) {
	int a;
	int b;
	int c;
	int d;
	cout<<"ingrese 3 notas "<<endl;
	cin>>a>>b>>c;
	d=(a+b+c)/3;
	cout<<"promedio de los 3 alumnos? "<<d;
	
	return 0;
}

*/
/*
//15.Escribir un programa que genere la tabla de multiplicar de un n�mero introducido por
//el teclado.
int main(int argc, char *argv[]) {
	int a;
	cout<<"ingrese la tabla del numero deseado"<<endl;
	cin>>a;
	for(int i=1;i<13;i++)
		cout<<i<<" * "<<a<<" = "<<i*a<<endl;
	
	return 0;
}
*/
/*
//16.Escribir un programa que calcule la media de x cantidad n�meros introducidos por el
//teclado.
int main(int argc, char *argv[]) {
	int a[100];
	int x;
    cout<<"ingrese x veces ";
	cin>>x;
	for(int i=0;i<x;i++){
		cin>>a[i];
	}
	
	return 0;
}
*/

/*
//17.Escribir un programa que lea 10 datos desde el teclado y sume s�lo aquellos que sean
//negativos.
int main(int argc, char *argv[]) {
	int a[10];
	int cont=0;
	cout<<"INGRESE 10 NUMEROS? "<<endl;
	for(int i=0;i<10;i++){
		cin>>a[i];
	}
	
	for(int i=0;i<10;i++){
		if(a[i]<1){
			cont=cont+a[i];
			
		}
	}
	
	cout<<"suma de negativos? "<<cont;
	
	return 0;
}
*/

/*
//18.Escribir un programa que pida al usuario un n�mero entero y muestre por pantalla un
//tri�ngulo rect�ngulo como el de m�s abajo, de altura el n�mero introducido.
int main(int argc, char *argv[]) {
	int a;
	cout<<"INGRESE NUMERO ENTERO? "<<endl;
	cin>>a;
	for(int i=0;i<a;i++){
		for(int j=0;j<i;j++){
			cout<<"*";
		}
		cout<<endl;
		
	}
	
	return 0;
}
*/

/*
//19.. Escribir un programa que almacene la cadena de caracteres contrase�a en una
//variable, pregunte al usuario por la contrase�a hasta que introduzca la contrase�a
//correcta.
int main(int argc, char *argv[]) {
	char a[20];
	char b[20]="a";
	cout<<"INGRESE LA CONTRASE�A? "<<endl;
	cin>>a;
	while(a!=b){
		cout<<"INGRESE LA CONTRASE�A CORRECTA? "<<endl;
		cin>>a;
	}

	return 0;
}
*/

/*
//20.Escribir un programa que pida al usuario una palabra y luego muestre por pantalla
//una a una las letras de la palabra introducida empezando por la �ltima.
int main(int argc, char *argv[]) {
	char a[5];
	cout<<"ingre una palabra? "<<endl;
	cin>>a;
	for(int i=5;i>=0;i--)
		cout<<a[i];
	
	
	return 0;
}


*/
