#include<iostream>
#pragma once
using namespace std;
template <class T>
class node {
public:
	T value;
	node<T>* next;
	
	node(T);
	node();
};
template <class T>
class sortedLinkedList
{public:
	int count;
	node<T>* head;
	node<T>* tail;

	sortedLinkedList();
	void insert(T );
	void display();
	T getMin();
	void merge(sortedLinkedList);
	sortedLinkedList<T> intersection(sortedLinkedList <T>);
};
