#pragma once
#include <iostream>
#include <list>

class Hash {
	int bucket; 
	std::list<int>* table;
public:
	Hash(int V) : bucket(V) {
		table = new std::list<int>[bucket];
	}
	void insertItem(int x);
	void deleteItem(int key);
	int hashFunction(int x) { return x % bucket; }

	bool isTheSame(int key, int index);
	void displayHash();
	bool search(int key);
};