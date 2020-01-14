#include "Hash.h"

void Hash::insertItem(int key) {
	int index = hashFunction(key);
	if (isTheSame(key, index))
		return;
	table[index].push_back(key);
}

void Hash::deleteItem(int key) {
	int index = hashFunction(key);

	std::list <int> ::iterator i;
	for (i = table[index].begin(); i != table[index].end(); i++) {
		if (*i == key)
			break;
	}

	if (i != table[index].end())
		table[index].erase(i);
}

void Hash::displayHash() {
	for (int i = 0; i < bucket; i++) {
		std::cout << i;
		for (auto x : table[i])
			std::cout << " --> " << x;
		std::cout << std::endl;
	}
}

bool Hash::isTheSame(int key, int index) {
	for (auto i : table[index])
		if (i == key)
			return true;
	return false;
}

bool Hash::search(int key) {
	int index = hashFunction(key);
	for (auto i : table[index]) {
		if (i == key) {
			return true;
		}
	}
	return false;
}