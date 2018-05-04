#ifndef H_binaryTree
#define H_binaryTree


#include <iostream>
#include <string>
#include <fstream>

using namespace std;


struct product {
	int productID;
	string name;
	double price;
};

class binarySearchTree {


	struct node {
		product item;
		node* left;
		node* right;

	};

	node* root;

	node* makeEmpty(node* node) {
		if (node == NULL)
			return NULL; 

		makeEmpty(node->left);
		makeEmpty(node->right);
		delete node;

		return NULL;
	}
	node* insert(product newProduct, node* newNode) {
		if (newNode == NULL) {
			newNode = new node;
			newNode->item = newProduct;
			newNode->left = newNode->right = NULL;
		}
		else if (newProduct.productID < newNode->item.productID) {
			newNode->left = insert(newProduct, newNode->left);		
		}
		else if (newProduct.productID > newNode->item.productID) {
			newNode->right = insert(newProduct, newNode->right);
		}

		return newNode;	
	}
	node* findMinimum(node* minNode) {
		if (minNode == NULL) {
			return NULL;
		}
		else if (minNode->left == NULL) {
			return minNode;
		}
		else
			return findMinimum(minNode->left);
	
	}
	node* findMaximum(node* maxNode) {
		if (maxNode == NULL) {
			return NULL;
		}
		else if (maxNode->right == NULL) {
			return maxNode;
		}
		else {
			return findMaximum(maxNode->right);
		}
	
	}
	node* remove(product removeProduct, node* removeNode) {
		node* temp;
		if (removeNode == NULL) {
			return NULL;
		}
		else if (removeProduct.productID < removeNode->item.productID) {
			removeNode->left = remove(removeProduct, removeNode->left);
		}
		else if (removeProduct.productID > removeNode->item.productID) {
			removeNode->right = remove(removeProduct, removeNode->right);		
		}
		else if (removeNode->left && removeNode->right) {
			temp = findMinimum(removeNode->right);
			removeNode->item = temp->item;
			removeNode->right = remove(removeNode->item, removeNode->right);
		}
		else {
			temp = removeNode;
			if (removeNode->left == NULL) {
				removeNode = removeNode->right;
			}
			else if (removeNode->right == NULL) {
				removeNode = removeNode->left;
			}
			delete temp;		
		}

		return removeNode;	
	}
	node* findByProductID(node* findNode, int searchID) {
		if (findNode == NULL) {
			return NULL;
		}
		else if (searchID < findNode->item.productID) {
			return findByProductID(findNode->left, searchID);
		}
		else if (searchID > findNode->item.productID) {
			return findByProductID(findNode->right, searchID);
		}
		else {
			cout << findNode->item.productID << " " << findNode->item.name << " " << findNode->item.price << endl;
			return findNode;
		}
	
	}
	void inOrder(node* inOrderNode) {
		if (inOrderNode == NULL) {
			return;
		}

		inOrder(inOrderNode->left);
		cout << inOrderNode->item.productID << " ";
		cout << inOrderNode->item.name << " ";
		cout << inOrderNode->item.price << endl;
		inOrder(inOrderNode->right);	
	}





public:
	binarySearchTree() {
		root = NULL;	
	}
	~binarySearchTree() {
		root = makeEmpty(root);
	}
	void insert(product newProduct) {
		root = insert(newProduct, root);
	}
	void remove(product removeProduct) {
		root = remove(removeProduct, root);
	}
	void display() {
		inOrder(root);
		cout << endl;	
	}
	void search(int searchID) {
		root = findByProductID(root, searchID);
	}

	void populateTree(string fileName) {
		product fileProduct;
		ifstream inFile;

		inFile.open(fileName);

		if (!inFile) {
			cout << "Unable to open File!" << endl;
		}

		while (!inFile.eof()) {
			inFile >> fileProduct.productID;
			inFile >> fileProduct.name;
			inFile >> fileProduct.price;

			insert(fileProduct);
		}
	
	}







};






#endif
