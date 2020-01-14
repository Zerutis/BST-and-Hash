#pragma once
#include <iostream>
#include <stdlib.h>

struct Node {
	int data;
	struct Node* left, * right;
};

bool search(Node* root, int key);
Node* newNode(int item);
Node* insert(Node* Node, int data);
void printInorder(Node* Node);