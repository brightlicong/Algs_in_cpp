#ifndef DICTIONARY_H
#define DICTIONARY_H

#include <vector>

template <typename K, typename V>
class Dictionary {
public:
    virtual ~Dictionary() = default;

    virtual void insert(const K& key, const V& value) = 0;

    virtual V get(const K& key) const = 0;

    virtual bool contains(const K& key) const = 0;

    virtual void remove(const K& key) = 0;

    virtual void isEmpty() const = 0;

    virtual size_t size() const = 0;

    virtual std::vector<K> keys() const = 0;


};

template <typename K, typename V>
class OrderedDictionary {
public:
    virtual ~OrderedDictionary() = default;

    virtual void put(const K& key, const V& value) = 0;

    virtual bool get(const K& key, V& value) const = 0;

    virtual void remove(const K& key) = 0;

    virtual bool isEmpty() const = 0;

    virtual size_t size() const = 0;

    virtual std::vector<K> keys() const = 0;

    virtual K min() const = 0;

    virtual K max() const = 0;

    virtual K select(size_t key) const = 0;
};


#endif // DICTIONARY_H
