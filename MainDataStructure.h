#pragma once
#include "BST.h"
#include "Hash.h"
#include <vector>

class Data {
	std::vector<int> DS; //data structure
	int size;
public:
	Data () : size(0) { }

	void insertElement(int value) {
		DS.push_back(value);
		size++;
	}
	
	Node* fillBST(Node* root);
	void fillHash(Hash h);

	int getSize() { return size; }
};