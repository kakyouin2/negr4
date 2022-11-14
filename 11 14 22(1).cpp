#include <iostream>
#include <ctime>
using namespace std;
int main() {

	srand(time(nullptr));
	//Вариант 1
		//1. Задан массив A, содержащий 10 целых случайных чисел от 0 до 20. Найти произведение элементов этого массива.






	/*int arr[size];
		const int size = 10;
	for (int i = 0; i < size; i++) {
		arr[i] = rand() % 21;
		cout << arr[i] << ' ';



	}
	int b;
	b=arr[0] * arr[1] * arr[2] * arr[3] * arr[4] * arr[5] * arr[6] * arr[7] * arr[8] * arr[9];
	cout << b << endl;*/


	//2. Задан массив, который содержит 8 случайных целых чисел от - 10 до 10. Найти сумму положительных элементов массива.
	/*const int size = 8;
	int b=0;

	int arr[size];
	for (int i = 0; i < size; i++) {
		arr[i] = rand() % 21-10;
		cout << arr[i] << ' ';
if(arr[i] < 0 == 0)
		b += arr[i]  ;


	}
	cout << endl;

	cout << b << endl;*/


	//4. Задан массив из 9 целых чисел  от - 10 до 10. Найти сумму элементов массива, которые являются четными числам
/*int b = 0;
		const int size = 9;
		int arr[size];
	for (int i = 0; i < size; i++) {
		arr[i] = rand() % 21;
		cout << arr[i] << ' ';
		if (arr[i] % 2) {
			b +=arr[i];
		}

		}
		cout<< endl << b;*/

		//3. Задан массив, который содержит 16 случайных целых чисел от 0 до 20. Найти количество элементов массива,
		//которые делятся на 3 и на 5.
	int b = 0;
	const int size = 16;
	int arr[size];
	for (int i = 0; i < size; i++) {
		arr[i] = rand() % 21;
		cout << arr[i] << ' ';
		if (arr[i] % 3 || arr[i] % 5) {
			b++;
		}

	}
	cout << endl << endl << endl << b;











}