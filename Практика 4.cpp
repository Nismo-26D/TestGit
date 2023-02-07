#include <iostream>
#include <math.h>
#include <stdlib.h>
#include <ctime>
using namespace std;
//Функция генерации массивов X и Y
void createArray(float masX[],float masY[], int n, int m)
	{
	for (int i = 0; i < n; i++)
		masX[i] = rand() % 101 - 50;
	for(int i=0;i<m;i++)
		masY[i] = rand() % 101 - 50;
	}
//Вывод массива на экран
void printArray(float mas[], int n)
	{
	for (int i = 0; i < n; i++)
		cout << mas[i] << "   ";
	}
//Вычисление минимума или максимума заданного массива
float vichMinOrMax(float mas[], int n,int sw)
{	
	float extr = mas[0];
	for (int i = 0; i < n; i++)
			if (mas[i]*sw > extr*sw) extr = mas[i];
	return extr;
}

int main()
{
	srand(time(0));
	setlocale(LC_ALL, "Rus");
	float X[50], Y[25], max, min;
	int n, m;
	createArray(X, Y, 50, 25);
	cout << "Массив Х\n\n";
	printArray(X, 50);
	cout<<"\n\nМаксимум массива Х="<<vichMinOrMax(X, 50,1);
	cout << "\n\nМассив Y\n\n";
	printArray(Y, 25);
	cout << "\n\nМинимум массива Y=" << vichMinOrMax(Y, 25,-1);
	cout << "\n\nZ=" << fabs(vichMinOrMax(X, 50, 1) - vichMinOrMax(Y, 25, -1));
}