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

    return 0;
}
