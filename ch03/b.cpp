#include <iostream>
using namespace std;

template <typename elemType>
elemType * find(const vector<elemType> &vec, const elemType &value)
{
  for(int ix = 0; ix < vec.size(); ++ix)
    if(vec[ix] == value)
      return &vec[ix];
  return 0;
}



int main()
{
    int ia[8] = {1, 1, 2, 3, 5, 8, 13, 21};
    vector<int> vec(ia, ia+8);
    int a = find(vec, 3);


    cout << a << endl;
}
