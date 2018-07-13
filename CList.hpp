#ifndef CLIST_HPP
#define CLIST_HPP

#include "CNode.hpp"

template<typename T>
class CList
{
public:
    CList();
private:

    int mSize;
    CNode<T> *mHead;

};


template<typename T>
////////////////////////////////////////////////////////////////////////////////////
CList<T>::CList()
    : mSize(0),
      mHead(nullptr)
////////////////////////////////////////////////////////////////////////////////////
{

}


#endif // CLIST_HPP
