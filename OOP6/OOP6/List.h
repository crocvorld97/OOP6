#pragma once

class List
{
private:
	struct list
	{
		int object;
		list* next;
	} ;
	list *head;
	int listSize = 0;
public:
	List();
	List(const List &a);
	int getListSize();
	void add(int objectForAdd);
	void show();
	List& operator--();
	List operator+(List a);
	List& operator=(List *a);
	bool operator==(List &b);
	bool operator()();
	//~List();
};