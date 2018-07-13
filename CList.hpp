#ifndef CLIST_HPP
#define CLIST_HPP

#include "CNode.hpp"

template<typename T>
class CList
{
public:
    CList();

    void push_back(T date);
    int getSize();
    T& operator[](const int index);
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
template<typename T>
////////////////////////////////////////////////////////////////////////////////////
void CList<T>::push_back(T date)
////////////////////////////////////////////////////////////////////////////////////
{
    if (mHead == nullptr){
        mHead =  new CNode<T>(date);
    } else{
        CNode<T> *current = mHead;
        while (current->mPtrNextNode != nullptr) {
            current = current->mPtrNextNode;
        }
        current->mPtrNextNode = new CNode<T>(date);
    }
    mSize++;
}
template<typename T>
////////////////////////////////////////////////////////////////////////////////////
int CList<T>::getSize()
////////////////////////////////////////////////////////////////////////////////////
{
    return mSize;
}
template<typename T>
////////////////////////////////////////////////////////////////////////////////////
T& CList<T>::operator [](const int index)
////////////////////////////////////////////////////////////////////////////////////
{
    CNode<T> *current = mHead;
    while (current != nullptr) {
        for(int i = 0; i < index;i++){
            current = current->mPtrNextNode;
        }
        return current->mDate;
    }

}

#endif // CLIST_HPP
