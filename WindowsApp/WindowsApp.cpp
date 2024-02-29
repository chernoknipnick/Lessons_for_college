#include <algorithm>
#include <iostream>
#include <vector>
#include "Phone_and_Employee.h"

int counter =0;

using namespace std;

void count_cout() {
	counter++;
	cout << counter << "\n";
} // функция которая считает сколько раз она вызывалась 

int main()
{
	setlocale(LC_ALL, "Rus");
	srand(time(0)); 
	// работа с массивами
	/* int n = 3;
	using AI = int[3][3]; // имя АИ при вызове позволяет создавать массивы размерностью 3 на 3 

	int array[3][3];
	// заполнение двумерного массива array случайными числами
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
			array[i] [j] = rand() % 100;
	//вывод массива array
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
			cout << array[i] [j] << "\t";
		cout << '\n';
	}
	//sort(array[0;[0;, array+9);
	int arr[10][10];
	// заполнение  массива случайными числами
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			arr[i][j] = rand() / 100;
		}

	}

	int array3[10];
	for (int j = 0; j<10; j++)
	{
		array3[j] = rand() / 100;
	}

	for (int j = 0; j < 10; j++)
	{
		cout << array3[j] << "\t";
	}
	cout << "\n";
	std::sort(array3, array3 + 10);
	
	for (int j = 0; j < 10; j++)
	{
		cout<< array3[j] << "\t";
	}
	vector<vector<int>> arr2 = {
	   {1, 3, 5},
	   {2, 4, 6},
	   {0, 2, 4}
	};
		cout << "\n";

	// Сортируем массив по первому элементу каждого вектора
	sort(arr2.begin(), arr2.end(), compareVectors);
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++)
		{
			cout << arr2[i][j];
		}
		cout << "\n";
	}*/ 
	// функция которая подсчитывает сумму накопления по заданным пораметрам
	/*int years = 0, month = 0;
	//float sum = 0, procent = 0;
	//cout << "Введите начальный вклад:\t";
	//cin >> sum;
	//cout << "Введите процентную ставку :\t";
	//cin >> procent;
	//cout << "Введите количество лет :\t";
	//cin >> years;
	//cout << "Введите количество месяцев :\t";
	//cin >> month;
	//	for (size_t i = 0; i < years; i++)	{
	//		sum += sum*(procent/100);
	//	}
	//	for (size_t i = 0; i < month; i++) {
	//		sum += sum *((procent / 100)/12);
	//	}
	//cout << "ваш вклад через "<< years << "лет, "<< month << "месяцев:\t" << sum;
	*/
	// структура телефон 
	/*Phone phone1;
	in_Phone(phone1);
	out_Phone(phone1);
	employee employee;
	in_emloyee(employee);
	out_employee(employee);*/
	/* функция которая посдчитывает сколько раз она вызвалась*/
	//for (int i = 0; i < 10; i++) 
	// count_cout();
	

	return 0;
}

