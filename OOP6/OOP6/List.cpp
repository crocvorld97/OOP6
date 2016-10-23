#include "stdafx.h"
#include "List.h"
#include <iostream>
using namespace std;

List::List()
{
	head = NULL;
}

List::List(const List &a)
{
	
	this->head = a.head;
}

int List::getListSize()
{
	return this->listSize;
}

void List::add(int objectForAdd)
{
	list *temp = new list;
	temp->object = objectForAdd;
	temp->next = head;
	head = temp;
	this->listSize++;
	
}

void List::show()
{
	list *temp = new list;
	temp = head;
	while (temp != NULL)
	{
		cout << temp->object << endl;
		temp = temp->next;
	}
	delete temp;
}

List& List::operator=(List *a)
{	
	this->head = a->head;
	return *this;
}

List List::operator+(List a)
{
	List New;
	
	list *temp = this->head;
	list *temp2 = temp;
	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	temp->next = a.head;
	New.head = temp2;
	return New;
}

bool List::operator()()
{
	if (this->head != NULL)
	{
		return false;
	}
	else
	{
		return true;
	}
}

bool List::operator==(List &list2)
{
	if (this->getListSize() != list2.getListSize())
	{
		return false;
	}
	list *temp = this->head;
	list *temp2 = list2.head;
	while (temp != NULL)
	{
		if (temp->object == temp2->object)
		{
			temp = temp->next;
			temp2 = temp2->next;
		}
		else { return false; }
	}
	return true;
}

List& List::operator--()
{
	list *temp = this->head->next;
	delete this->head;
	this->head = temp;
	return *this;
}



/*List::~List()
{
	list *temp = new list;
	temp = head->next;
	while (temp != NULL)
	{
		temp = head->next;
		delete head;
		head = temp;
	}
	delete temp;
}*/