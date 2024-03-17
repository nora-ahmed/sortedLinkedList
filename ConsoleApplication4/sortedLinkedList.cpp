#include<iostream>
#include "sortedLinkedList.h"
using namespace std;
template <class T>
node<T>::node(T val) {
	value = val;
	next = nullptr;
}
template<class T>
node<T>::node() {
	next = nullptr;
}
template <class T>
sortedLinkedList<T>::sortedLinkedList()
{
	head = tail = NULL;
	count = 0;
}
template <class T>
void sortedLinkedList<T>::insert(T val)
{
	node<T>* newNode =new node<T>(val);
	
	if (count == 0) {
		head = tail = newNode;
	
	}
	else {
		bool isFound = false;
		node<T>* tempPtr = head;
		if (tempPtr->value >= val) {
			newNode->next = tempPtr;
			head = newNode;
		
		}
		else {
			while (tempPtr !=NULL) {
				if (tempPtr->next == NULL) {
					tempPtr->next = newNode;
					newNode->next = NULL;
					tail = newNode;
					isFound = true;
					break;
				}
				if (tempPtr->next->value >= val) {
					newNode->next = tempPtr->next;
					tempPtr->next = newNode;
					isFound = true;
					break;
				}
				tempPtr = tempPtr->next;
			}
		}
		
		
	}
	count++;
}
template <class T>
void sortedLinkedList<T>::display()
{
	node<T>* temp = head;
	while (temp != NULL) {
		cout << temp->value << endl;
		temp = temp->next;
	}
}

template<class T>
T sortedLinkedList<T>::getMin()
{
	return head->value;
}

template<class T>
void sortedLinkedList<T>::merge(sortedLinkedList listToMerge)
{
	node <T>* temp = listToMerge.head;
	while (temp != NULL) {
		insert(temp->value);
		temp = temp->next;
	}
}

template<class T>
sortedLinkedList<T> sortedLinkedList<T>::intersection(sortedLinkedList<T> list1) {
	sortedLinkedList<T> newList;
	node<T>* temp1 = head;
	while (temp1 != NULL) {
		node<T>* temp2 = list1.head;
		while (temp2 != NULL) {
			if (temp1->value == temp2->value) {
				bool isAlreadyIn = false;
				node<T>* test = newList.head;
				while (test != NULL) {
					if (test->value == temp2->value)
					{
						isAlreadyIn = true;
						break;
					}
					test = test->next;
				}
				if (isAlreadyIn)
					break;
				newList.insert(temp2->value);
				break;
			}
			temp2 = temp2->next;
		}
		temp1 = temp1->next;
 }
	return newList;
}
