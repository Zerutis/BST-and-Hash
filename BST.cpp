#include "BST.h"

bool search(Node* root, int key) {
	while (root != NULL) {
		if (key > root->data)
			root = root->right;
		else if (key < root->data)
			root = root->left;
		else
			return true;
	}
	return false;
}

Node* newNode(int item) {
	struct Node* temp = new Node;
	temp->data = item;
	temp->left = temp->right = NULL;
	return temp;
}


Node* insert(Node* Node, int data) {
	if (Node == NULL) return newNode(data);

	if (data < Node->data)
		Node->left = insert(Node->left, data);
	else if (data > Node->data)
		Node->right = insert(Node->right, data);

	return Node;
}

void printInorder(Node* Node) {
	if (Node == NULL)
		return;
	printInorder(Node->left);
	std::cout << Node->data << " ";
	printInorder(Node->right);
}

/*void getValue(Node* Node, int item) {
	if (Node == NULL)
		return;
	if (Node->data == item)
		std::cout << "item found: " << Node->data << std::endl;
	else if (Node->data < item) {
		getValue(Node->left, item);
	}
	else if (Node->data > item) {
		getValue(Node->right, item);
	}
}*/