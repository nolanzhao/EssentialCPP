#include <iostream>
#include <vector>
using namespace std;


const int seq_size = 10;

int main()
{
  int elem_vals[seq_size] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
  vector<int> elem_seq(elem_vals, elem_vals+seq_size);

  for (int i = 0; i < 10; i++)
    cout << elem_seq[i] << " ";

  return 0;
}



