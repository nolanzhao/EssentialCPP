#include <iostream>
#include <vector>
#include <cstdlib>
using namespace std;

const int seq_cnt = 6;

int main()
{
    int a1[] = {1, 1, 2, 3, 5, 8};
    int a2[] = {1, 3, 4, 7, 11, 18};
    int a3[] = {1, 2, 5, 12, 29, 70};
    int a4[] = {1, 3, 6, 10, 15, 21};
    int a5[] = {1, 4, 9, 16, 25, 36};
    int a6[] = {1, 5, 12, 22, 35, 51};


    vector<int> fibonacci(a1, a1+seq_cnt);
    vector<int> lucas(a2, a2+seq_cnt);
    vector<int> pell(a3, a3+seq_cnt);
    vector<int> triangular(a4, a4+seq_cnt);
    vector<int> square(a5, a5+seq_cnt);
    vector<int> pentagonal(a6, a6+seq_cnt);


    vector<int> *seq_addrs[seq_cnt] = {
      &fibonacci, &lucas, &pell, &triangular, &square, &pentagonal
    };


    vector<int> *result_vec = 0;
    for (int ix = 0; ix < seq_cnt; ++ix)
    {
      result_vec = seq_addrs[ix];
      vector<int> v = *result_vec;
      for (int i = 0; i < seq_cnt; i++){
        cout << v[i] << " ";
      }
      cout << '\n';
    }


    vector<int> *current_vec = 0;
    srand(seq_cnt);
    int seq_index = rand() % seq_cnt;
    current_vec = seq_addrs[seq_index];

    cout << "------------------------" << endl;
    cout << "random index: " << seq_index << endl;
    vector<int> v = *current_vec;
    for (int i=0; i < seq_cnt; i++){
        cout << v[i] << " ";
    }
    return 0;




}
