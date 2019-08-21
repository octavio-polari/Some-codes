#include <iostream>
#include <cstdlib>
#include <locale.h>
using namespace std;

int Maior(int num1, int num2, int numA, int Soma)
{
	if (Soma > numA)
	{
		return num1; 
	}
	else
	{
		return numA;
	}
}

int Menor(int num1, int num2, int numA, int Soma)
{
	if (Soma < numA)
	{
		return numA; 
	}
	else
	{
		return num1;
	}
}

int main()
{
	setlocale(LC_ALL, "Portuguese");
	
	int num1, num2, numA, Soma;
	
	Soma = num1 + num2;
	
	numA = (rand() % 100) + 1;
	
	while(numA != 100)
	{
		numA = (rand() % 100) + 1;
		
	}
	
	do
	{
		cout << "Digite dois numeros diferentes: ";
		cin >> num1;
		cin >> num2;
	}
	
	while (numA == Soma);
	cout << "\nMaior: " << Maior;
	cout << "\nMenor: " << Menor;
}
