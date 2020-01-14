#include "MainDataStructure.h"

Node* Data::fillBST(Node* root) {
	for (auto value : DS) {
		if (root != NULL)
			insert(root, value);
		else
			root = insert(root, value);
	}
	return root;
}
void Data::fillHash(Hash h) {
	for (auto value : DS) {
		h.insertItem(value);
	}
}

