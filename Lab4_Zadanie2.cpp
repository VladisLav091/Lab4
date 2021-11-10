#include <iostream>
#include <ctime>
#define N 6
#define N 6
using namespace std;

void Zapolnenie(int* pa) {
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			*pa = rand() % 20 - 9;
			cout << *pa << "\t";
			pa++;
		}
		cout << "||" << endl;
	}
}

void fun(int a[N][N], int* pa, int* pb)
{
	cout << "\n";
	for (int i = 0; i < N / 2; i++)
	{
		for (int j = 0; j < N / 2; j++) {
			(*pa) += a[i][j];
		}
	}
	for (int i = N / 2; i < N; i++)
	{
		for (int j = N / 2; j < N; j++) {
			(*pb) += a[i][j];
		}
	}
}

int main()
{
	setlocale(LC_ALL, "ru");
	srand(time(0));
	int a[N][N];
	Zapolnenie(&a[0][0]);
	int suma = 0, sumb = 0;
	fun(a, &suma, &sumb);
	cout << "sum a = " << suma << endl;
	cout << "sum b = " << sumb << endl;
	system("pause");
	return 0;

}