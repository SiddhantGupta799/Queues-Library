#ifndef NODES_H
#define NODES_H

#include <iostream>
using namespace std;

namespace Py {
	// Singular Node
	template<typename T>
	struct SingleNode {
		T data;
		SingleNode<T>* next;
	};

	// Bi-Directional Node
	template<typename T>
	struct BinaryNode {
		BinaryNode<T>* prev;
		T data;
		BinaryNode<T>* next;
	};

	// Tree Node
	template<typename T>
	struct TreeNode {
		TreeNode<T>* up;
		T data;
		TreeNode<T>* left;
		TreeNode<T>* right;
	};
}

#endif // !NODES_H

