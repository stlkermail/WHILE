﻿#include <iostream>
#include <conio.h>

using  namespace  std;
//#define WHILE_1
//#define WHILE_2
//#define WHILE_3
//#define WHILE_4


void main()
{
	setlocale(LC_ALL, "");
#ifdef WHILE_1


	int i = 0;
	int n;
	cout << "Введите колличество итераций"; cin >> n;
	while (i < n)
	{
		cout << i++ << "Hello";
		//i++;
	}
#endif WHILE_1 // WHILLE_1

#ifdef WHILE_2


	int n;
	cout << "Введите колличество итераций"; cin >> n;
	while (n--)
	{
		cout << n << "\t";
	}
	cout << endl;

#endif // WHILE_2

#ifdef WHILE_3
	char key;                                       // эта переменная будет хранить 
	// код нажатой клавиши
	do
	{
		key = _getch();                             // функция getch ожидает нажатие клавиши 
		//возвращает ASCII - код нажатой клавиши
	// Функция _getch() находиться в библеотеке <conio.h>

		cout << (int)key << "\t" << key << endl;
		// (int) key - явное преобразование 'key' в тип данных 'char', 
		// для того чтобы увидеть код нажатой клавиши
	} while (key != 27);



#endif // WHILE_3

#ifdef WHILE_4

#endif // WHILE_4
}