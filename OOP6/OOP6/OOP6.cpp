// OOP6.cpp: ���������� ����� ����� ��� ����������� ����������.
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
	cout << "��������� ��� ������� ������:\n";
	NewList.show();
	cout << endl << endl;
	List NewList2;
	NewList2.add(3);
	NewList2.add(2);
	NewList2.add(1);
	if (NewList == NewList2)
	{
		cout << "������ �����!\n";
	}
	else
	{
		cout << "������ �� �����!\n";
	}
	--NewList;
	cout << "����� ������������� -- :\n";
	NewList.show();
	cout << endl << endl << "������ ������:\n";
	NewList2.show();
	NewList = NewList + NewList2;
	cout << endl << endl << "� ������� ������ �������� ������:\n";
	NewList.show();

	List NewList3;
	if (NewList2())
	{
		cout << "������ ����!\n";
	}
	else
	{
		cout << "������ �� ����!\n";
	}
    return 0;
}

