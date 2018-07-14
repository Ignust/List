#include <iostream>
#include"CList.hpp"

using namespace std;

int main()
{
    CList<int> mList;
    mList.push_back(44);
    mList.push_back(12);
    mList.push_back(44);
    mList.push_back(433);

    mList.pop_front();

    for(int i = 0;i < mList.getSize(); i ++){
        cout << mList[i] << endl;
    }

    mList.clear();

    cout << "Size = " << mList.getSize() << endl;

    mList.push_front(1);
    mList.push_front(2);
    mList.push_front(3);
    mList.push_front(4);
    for(int i = 0;i < mList.getSize(); i ++){
        cout << mList[i] << endl; // lol
    }

    cout << "mList.insert(5,1)" << endl;
    mList.insert(5,1);

    for(int i = 0;i < mList.getSize(); i ++){
        cout << mList[i] << endl; // lol
    }

    return 0;
}
