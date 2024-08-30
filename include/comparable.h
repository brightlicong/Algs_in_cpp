#ifndef COMPARABLE_H
#define COMPARABLE_H

template <typename T>
class Comparable {
public:
    virtual bool compareTo(const T& other) const = 0;
};

#endif // COMPARABLE_H
