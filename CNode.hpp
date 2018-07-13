#ifndef CNODE_HPP
#define CNODE_HPP


template<typename T>
class CNode
{
public:
    CNode(T date = T(),CNode *ptrNextNode = nullptr);

    T mDate;
    CNode *mPtrNextNode;
};




template<typename T>
////////////////////////////////////////////////////////////////////////////////////
CNode<T>::CNode(T date,CNode *ptrNextNode )
////////////////////////////////////////////////////////////////////////////////////
    : mDate(date),
      mPtrNextNode(ptrNextNode)
{

}




#endif // CNODE_HPP
