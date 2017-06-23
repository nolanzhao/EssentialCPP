#include <iostream>
#include <vector>
using namespace std;

template <typename elemType>
void display_message(const string &msg, const vector<elemType> &vec)
{
  cout << msg;
  for (int ix = 0; ix < vec.size(); ++ix)
  {
    elemType t = vec[ix];
    count << t << ' ';
  }
}

int main()
{
  int ia[8] = {1, 2, 3, 4, 5, 6, 7, 8};
  vector<int> vec(ia, ia+8);
  string msg = "Hello, Nolan";
  display_message(&msg, &vec);
}
