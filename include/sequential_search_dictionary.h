#ifndef SEQUENTIAL_SEARCH_DICTIONARY_H
#define SEQUENTIAL_SEARCH_DICTIONARY_H

/*
 * 基于链表实现的字典
 */

template <typename K, typename V>
class Node{
    K _key;
    V _value;
    Node* _next;
public:
    Node(K key, V value, Node* next);
};

template <typename K, typename V>
Node<K,V>::Node(K key, V value, Node<K,V>* next){
    _key = key;
    _value = value;
    _next = next;
}

template <typename K, typename V>
class SequentialSearchDictionary{
    Node<K,V>* first;
public:
    V get(K key, bool& isFound);
    void put(K key, V value);
};

template <typename K, typename V>
V SequentialSearchDictionary<K,V>::get(K key, bool& isFound){
    for (Node<K,V>* x = first; x != nullptr; x = x -> next)
        if (key.equals(x->key)){
            isFound = true;
            return x->val;
        }
    isFound = false;
    return V{};
}

template <typename K, typename V>
void SequentialSearchDictionary<K,V>::put(K key, V val)
{
    for (Node<K,V>* x = first; x != nullptr; x = x->next)
        if (key.equals(x->key)) {
            x->val = val;
            return;
        }
    first = new Node(key, val, first); //在表头新建节点
}

#endif // SEQUENTIAL_SEARCH_DICTIONARY_H
