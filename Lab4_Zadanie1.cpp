#include <iostream>
#include <ctime>
#define N 10
#define M 7
using namespace std;

void Zapolnenie(int* pa) {
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			*pa = rand() % 20 - 9;
			cout << *pa << "\t";
			pa++;
		}
		cout << "||" << endl;
	}
}
void fun(int a[N][M], int* pb) {
	cout << "\nМассив с суммой элементоов нечётных столбцов\n";
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M; j += 2) {
			if (j % 2 == 0) {
				*(pb + j / 2) += a[i][j];
			}
		}
	}
	for (int i = 0; i < N / 2; i++)
	{
		cout << pb[i] << "\t" << "\t";
	}
}

int main() {
	setlocale(LC_ALL, "ru");
	srand(time(0));
	int a[N][M];
	Zapolnenie(&a[0][0]);
	int b[N / 2];
	for (int i = 0; i < N / 2; i++)
	{
		b[i] = 0;
	}
	fun(a, &b[0]);
	system("pause");
	return 0;
}