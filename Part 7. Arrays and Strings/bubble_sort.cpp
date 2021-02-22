﻿// ptrsort.cpp
// сортировка массива с использованием указателей
#include <iostream>
using namespace std;
/////////////////////////////////////////////////////////
int main()
{
	void bsort(int*, int); // прототип функции
	const int N = 10;      // размер массива
	int arr[N] = { 37, 84, 62, 91, 11, 65, 57, 28, 19, 49 }; // массив для сортировки
	bsort(arr, N);
	for (int j = 0; j < N; j++)
		cout << arr[j] << " ";
	cout << endl;
	return 0;
}
///////////////////////////////////////////////////////////
void bsort(int* ptr, int n)
{
	void order(int*, int*); // прототип функции
	int j, k; // индексы в нашем массиве
	for (j = 0; j < n - 1; j++) // внешний цикл
		for (k = j + 1; k < n; k++) // внутренний цикл
			order(ptr + j, ptr + k); // сортируем элементы
}
///////////////////////////////////////////////////////////
void order(int* numb1, int* numb2) // сортировка двух чисел
{
		if (*numb1 > *numb2) // если первое число больше, то меняем их местами
		{
			int temp = *numb1;
			*numb1 = *numb2;
			*numb2 = temp;
		}
}
///////////////////////////////////////////////////////////
void bubble(int *a, int n)
{
    for (int i = n - 1; i > 0; i--)
    {
        for (int j = 0; j < i; j++)
            if (a[j] > a[j + 1])
            {
                int tmp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = tmp;
            }
    }
}