// OOP6.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>
using namespace std;
#include "List.h"

int main()
{
	setlocale(LC_CTYPE, "Russian");
	List NewList;
	NewList.add(5);
	NewList.add(4);
	NewList.add(3);
	cout << "Начальный вид первого списка:\n";
	NewList.show();
	cout << endl << endl;
	List NewList2;
	NewList2.add(3);
	NewList2.add(2);
	NewList2.add(1);
	if (NewList == NewList2)
	{
		cout << "Списки равны!\n";
	}
	else
	{
		cout << "Списки не равны!\n";
	}
	--NewList;
	cout << "После использования -- :\n";
	NewList.show();
	cout << endl << endl << "Второй список:\n";
	NewList2.show();
	NewList = NewList + NewList2;
	cout << endl << endl << "К первому списку добавили второй:\n";
	NewList.show();

	List NewList3;
	if (NewList2())
	{
		cout << "Список пуст!\n";
	}
	else
	{
		cout << "Список не пуст!\n";
	}
    return 0;
}

