#include <iostream>
#include <math.h>
#include <stdlib.h>
#include <string>
#include <time.h>

using namespace std;
#define chui(s)(unsigned int)s

string tobinary(char num);
string tobinary(char num);
string tobinary(char num);
int tohex(string str);
void fillArr(int arr[], int length, int min, int max);

int main() {
	setlocale(LC_ALL, "Russian");
	/*unsigned char n = 5;//00000101
	//00101000
	cout <<chui(n) << " << 3 = " << (n << 3) << endl;
	n = 35 >> 3;//00100011
	cout << "35 >> 3 = " << chui(n) << endl;

	n = ~100;//01100100
	cout << "~100 = " << chui(n) << endl;//10011011 - 155

	n = 154;					//10011010
	unsigned char m = 171;	//10101011  //10001010 - 138
	cout << chui(n) << " & " << chui(m) << " = " <<(n & m)<<endl;
	n = 152;//10011000
	m = 43; //00101011
			//10111011
	cout << chui(n) << " | " << chui(m) << " = " << (n | m) << endl;

	n = 154;//10011010
	m = 43;	//00101011
			//10110001
	cout << chui(n) << " ^ " << chui(m) << " = " << " = " << (n ^ m)<< endl;//^ - циркумфлекс*/
	//cout << "Задача 1.";
	//char z1c = 77;	   //1001101
	//short z1s = 15000;//11101010011000
	//int z1i = 123000;//11110000001111000
	//cout << "z1c = " << tobinary(z1c) << endl;
	//cout << "z1c = " << tobinary(z1s) << endl;
	//cout << "z1c = " << tobinary(z1i) << endl;
	int n;

	////задача 2
	//cout << "ЗАдача 2.\nВведите двоичный код" << endl;
	//string binStr;
	//cin >> binStr;
	//try
	//{
	//	cout << "введено число " << tohex(binStr) << endl;
	//}
	//catch (const invalid_argument& ex)
	//{
	//	cout << "Ошибка: " << ex.what() << endl;
	//}
	//задача 3
	cout << "Задача 3\nИзначальный массив\n[";
	int* z3 = new int[10];
	try {
		fillArr(z3, 10, 10, 31);
		for (int i = 0; i < 10; i++)
			cout << z3[i] << ", ";
		cout << "\b\b]\n";

	}
	catch (const out_of_range& ex) {
		cout << "Error " << ex.what() << endl;
	}



	return 0;
}

string tobinary(char num)
{
	string res;
	for (int i = 7; i >= 0; i--)
		res += to_string(num>> i & 1);


	return res ;
}

string tobinary(short num)
{
	string res;
	for (int i = 15; i >= 0; i--)
		res += to_string(num >> i & 1);


	return res;
}
string tobinary(int num)
{
	string res;
	for (int i = 31; i >= 0; i--)
		res += to_string(num >> i & 1);
	return res;
}
int tohex(string bin)
{
	int size = bin.length();

	for (int i = 0; i < size; i++)
		if (bin[i] != '0' && bin[i] != '1')
			throw invalid_argument("not binary");

	int res = 0;
	for (int i = size - 1, j=0; i >= 0; i--, j++)
		res += pow(2, i) * (bin[j] - '0');


	return res;
}

void fillArr(int arr[], int length, int min, int max)
{
	if (min >= max)
		throw out_of_range("Range error");
	srand(time(NULL));
	for (int i = 0; i < length; i++)
		arr[i] = rand() % (max - min) + min;
}




