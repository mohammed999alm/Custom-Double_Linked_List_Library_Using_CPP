#include <iostream>
#include "clsDoubleLinkedList.h"
using namespace std;

int main() 
{
	clsDoubleLinkedList<int> list;

	list.insertAtBeginning(20);
	list.insertAtBeginning(10);

	cout << "List Items : \n\n";
	list.printList("\n\n");

	cout << "Add New Items Using Overloading InsertAfter Method : \n\n";
	list.insertAfter(0, 15);

	list.printList("\n\n");

	list.insertAfter(-1, 15);

	list.printList("\n\n");

	list.insertAfter(2, 25);

	list.printList("\n\n");

	list.insertAfter(4, 30);

	list.printList("\n\n");

	system("pause > 0");
	return 0;
}