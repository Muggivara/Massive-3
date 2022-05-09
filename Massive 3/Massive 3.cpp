

#include <iostream>
#include <ctime>
using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
  
//1 Дан двумерный массив размерностью M х N, заполненный случайными числами из диапазона от 0 до 20. 
//Определить сумму элементов массива, среднее арифметическое, минимальный и максимальный элемент.



	srand(time(0));
	const int M = 5;
	const int N = 4;
	int arr[M][N];
	int sum = 0;
	int min = 20;
	int max = 0;
	int average;

	for (int i = 0; i < M; i++)
	{
		for (int j = 0; j < N; j++)
		{
			arr[i][j] = rand() % 21;
			sum += arr[i][j];
			if (arr[i][j] > max) max = arr[i][j];
			else if (arr[i][j] < min) min = arr[i][j];
		}
	}
	average = sum / (M * N);
	cout << sum << "\n"<<average<<"\n"<<min<<"\n"<<max;


	//2 Дан двумерный массив размерностью M х M, заполненный случайными числами из диапазона от 0 до 20.
// Определить сумму элементов, расположенных на главной диагонали, а также сумму элементов, расположенных на побочной диагонали.


	const int M = 5;
	int arr[M][M];
	int sum1 = 0;
	int sum2 = 0;
	srand(time(0));
	for (int i = 0;i < M;i++)
	
 		for (int j = 0;j < M;j++) 
		{
 			arr[i][j] = rand() % 21;
			if (i == j)sum1 += arr[i][j];
  			else if (i + j == M - 1)sum2 += arr[i][j];
		}
	
	cout << sum1 << "\n" << sum2;


	//3 Дан двумерный массив размерностью M х N, заполненный случайными числами из диапазона от -10 до 10. 
//Определить количество положительных, отрицательных и нулевых элементов.



	const int M = 5;
	const int N = 4;
	int pol = 0;
	int otr = 0;
	int null = 0;
	int arr[M][N];
	srand(time(0));
	for (int i = 0;i < M;i++)
	{
		for (int j = 0;j < N;j++)
		{
			arr[i][j] = rand() % 21 - 10;
			arr[i][j] > 0 ? pol++ : arr[i][j] < 0 ? otr++ : null++;
		}
	}
	cout << pol << "\n" << otr << "\n" << null;



	//4  Дан двумерный массив размерностью M х N, заполненный случайными числами из диапазона от 0 до 20. 
//Определить сумму по каждой строке и по каждому столбцу массива. 

	const int M = 5;
	const int N = 4;
	int arr[M][N];
	int M0 = 0,
	 M1 = 0,
	 M2 = 0,
	 M3 = 0,
	 N0 = 0,
	 N1 = 0,
	 N2 = 0,
	 N3 = 0,
	 N4 = 0;
	srand(time(0));
	for (int i = 0;i < M;i++)
	{
		for (int j = 0;j < N;j++)
		{
			arr[i][j] = rand() % 20;
			if      (i == 0)N0 += arr[i][j];
			else if (i == 1)N1 += arr[i][j];
			else if (i == 2)N2 += arr[i][j];
			else if (i == 3)N3 += arr[i][j];
			else if (i == 4)N4 += arr[i][j];
			
			
			if      (j == 0)M0 += arr[i][j];
			else if (j == 1)M1 += arr[i][j];
			else if (j == 2)M2 += arr[i][j];
			else if (j == 3)M3 += arr[i][j];
			
		}
	}
	cout << N0 << " ñòðîêà 0\n" << N1 << " ñòðîêà 1\n"<<N2<<" ñòðîêà 2 \n"<<N3<<" ñòðîêà 3\n"<<N4<<" ñòðîêà 4\n\n";
	cout << M0 << " ñòîëáåö 0\n" << M1 << " ñòîëáåö 1\n" << M2 << " ñòîëáåö 2\n" << M3<<" ñòîëáåö 3";




//5 Заполнить массив M x N двузначными числами так, чтобы первая цифра указывала  номер строки, а вторая – номер столбца.

	const int M = 5;
	const int N = 5;
	int arr[M][N];
	for (int i = 0;i < M;i++)
	{
		for (int j = 0;j < N;j++)
		{
			arr[i][j] = i * 10 + j;
		}
	}
	





}

