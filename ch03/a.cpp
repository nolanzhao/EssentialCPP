#include <iostream>
using namespace std;

template <typename elemType>
elemType * find(const elemType *first, const elemType *last, const elemType &value)
{
        if(! first || !last)
            return 0;
        for(; first != last; ++ first)
            if(*first == value)
                return first;
}


int main()
{
    int ia[8] = {1, 1, 2, 3, 5, 8, 13, 21};
    int *pi = find(ia, ia+8, ia[5]);
    cout << *pi << endl;
}
