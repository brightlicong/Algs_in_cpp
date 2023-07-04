#pragma once

template<typename Key, typename Value>
class SequentialSearchSymbolTable
{
private:
	class Node {
		public:
		Key key;
		Value val;
		Node* next;
		Node(Key key, Value val, Node* next)
		{
			this -> key = key;
			this -> val = val;
			this -> next = next;
		};
	};
	Node* first;

public: 
	SequentialSearchSymbolTable() {
		first = nullptr;
	};

	Value get(Key key) {
		for (Node* x = first; x != nullptr; x = x -> next)
			if (key.equals(x->key)) return x->val;
		return -100;
	};

	void put(Key key, Value val)
	{
		for (Node* x = first; x != nullptr; x = x->next)
			if (key.equals(x->key)) {
				x->val = val;
				return;
			}
		first = new Node(key, val, first);
	}
};
