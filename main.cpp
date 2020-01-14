#include <iostream>
#include <fstream>
#include <vector>
#include <time.h>
#include "Hash.h"
#include "BST.h"
#include "MainDataStructure.h"

using namespace std;

int main() {
	Data DS; //data structure
	Node* root = NULL;
	Hash h(17);

	srand(time(NULL));
	for (int i = 0; i < 30; i++) {
		DS.insertElement(rand() % 100 + 1);
	}
	root = DS.fillBST(root);
	DS.fillHash(h);


	/*
	ifstream fd("Test2.txt");
	if (!fd.is_open()) {
		cout << "couldn`t open the file" << endl;
		return 0;
	}

	int key;
	Node* root = NULL;
	Hash hash(17);

	while (!fd.eof()) {
		fd >> key;
		hash.insertItem(key);
		if(root != NULL)
			insert(root, key);
		else 
			root = insert(root, key);
	}
	fd.close();
	*/

	
	cout << "- Hash Table" << endl;
	cout << "---------------------------" << endl;
	h.displayHash();

	cout << endl << "- BST" << endl;
	cout << "---------------------------" << endl;
	printInorder(root);
	cout << endl << endl;
	

	
	int item;

	ifstream ff("Search.txt");
	if (!ff.is_open()) {
		cout << "- couldn`t open the file" << endl;
		return 0;
	}

	while (!ff.eof()) {
		ff >> item;
		if (search(root, item))
			cout << "- BST:Item found:    " << item << endl;
		else
			cout << "- BST:Item not found " << endl;
		if (h.search(item))
			cout << "- Hash:Item found:   " << item << endl;
		else
			cout << "- Hash:Item not found" << endl;
	}
	ff.close();
	
	system("pause");
}