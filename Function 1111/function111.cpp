#include <iostream>
#include <conio.h>

using namespace std;

void main() {

	setlocale(LC_ALL, "");

	// сириус

	const int n = 3;
	int A[n][n] =
	{
		{1,2,3},
		{4,5,6},
		{7,8,9}

	};

	
	for (int i = 0; i < n; i++) {

		for (int j = 0; j < n; j++) {

			cout << A[i][j] << "\t";

		}

		cout << endl;
	}
	// оздаем расширенную матрицу 
	int B[n][n * 2];
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			B[i][j] = B[i][j + n] = A[i][j];
		}
	}
	cout << " Расширенная матрица : \n";
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cout << B[i][j] << "\t";
		}
		cout << endl;
	}
	// вычисяем опредеитеь матрицы матодом Саррюса;

	int sum_main_diag = 0; // сумма произведенийонаи
	int multiply; // произведение эементов диагонаи

	for (int i =0;i < n; i++) 
	{
		multiply = 1;
		for (int j = 0; j < n; j++)
		{
			multiply *= B[j][j + i];
		}
		sum_main_diag += multiply;
	}
	cout << "Cумма произведений эементов гавной диагонаи: " << sum_main_diag << endl;;

	// считаем вспомогатеьную диагонаь
	int sum_aux_diag = 0;
	for (int i = 0; i < n; i++)
	{
		multiply=1;
		for (j = 0; j < n; j++) {

			multiply *= B[n - 1 - j][j + 1];
		}
		sum_aux_diag += multiply;

	}
	cout << "сумма произведений эементов гавной диагонаи" << sum_main_diag << endl;
	int determinant = sum_main_diag - sum_aux_diag;
	cout << " Опредеитеь матрицы:" << endl;
}



