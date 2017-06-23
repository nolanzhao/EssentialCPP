#include <iostream>
#include <vector>
#include <fstream>
using namespace std;

void display(vector<int> vec)
{
  for (int ix = 0; ix < vec.size(); ++ix)
    cout << vec[ix] << ' ';
  cout << endl;
}

void swap(int &val1, int &val2)
{
  int temp = val1;
  val1 = val2;
  val2 = temp;
}



ofstream ofil("text_out1");
void bubble_sort(vector<int> &vec)
{
  for (int i = 0; i < vec.size(); ++i)
    for (int j = i + 1; j < vec.size(); ++j)
      if(vec[i] > vec[j]){
        ofil << "about to call swap!" << " i: " << i << " j: " << j << '\t' << " swapping: " << vec[i] << " with " << vec[j] << endl;
        swap(vec[i], vec[j]);
      }
}

int main()
{
  int ia[8] = {8, 34, 3, 13, 1, 21, 5, 2};
  vector<int> vec(ia, ia+8);

  cout << "vector before sort: ";
  display(vec);
  bubble_sort(vec);
  cout << "Vector afater sort: ";
  display(vec);

}

