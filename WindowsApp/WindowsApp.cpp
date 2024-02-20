
//#include <iomanip>

#include <algorithm>
#include <iostream>
#include <vector>


using namespace std;

bool compareVectors(const vector<int>& a, const vector<int>& b) {
	return a[0] < b[0];
}
int main()
{
	srand(time(0));
	int n = 3;
	using AI = int[3][3];
	int array[3] [3];
	for (auto i = 0; i < n; i++)
	{
		for (auto j = 0; j < n; j++)
		{
			array[i] [j] = rand() % 100;
		}

	}
	for (auto i = 0; i < n; i++)
	{
		for (auto j = 0; j < n; j++)
		{
			cout << array[i] [j] << "\t";


		}
		cout << '\n';

	}
	//sort(array[0;[0;, array+9);
	int arr[10][10];
	//какая-то инициализация
	for (auto i = 0; i < 10; i++)
	{
		for (auto j = 0; j < 10; j++)
		{
			arr[i][j] = rand() / 100;
		}

	}

	int arrr[10];
	for (int j = 0; j<10; j++)
	{
		arrr[j] = rand() / 100;
	}

	for (int j = 0; j < 10; j++)
	{
		cout << arrr[j] << "\t";
	}
	cout << "\n";
	std::sort(arrr, arrr + 10);
	
	for (int j = 0; j < 10; j++)
	{
		cout<< arrr[j] << "\t";
	}
	vector<vector<int>> arr2 = {
	   {1, 3, 5},
	   {2, 4, 6},
	   {0, 2, 4}
	};
		cout << "\n";

	// Сортируем массив по первому элементу каждого вектора
	sort(arr2.begin(), arr2.end(), compareVectors);
	for (auto i = 0; i < 3; i++) {
		for (auto j = 0; j < 3; j++)
		{
			cout << arr2[i][j];
		}
		cout << "\n";
	}
	return 0;
}

