#include <iostream>
#include <vector>
using namespace std;

int main(){
    const int seq_size = 18;
    //int pell_seq[seq_size];
    vector<int> pell_seq(seq_size);
    pell_seq[0] = 1;
    pell_seq[1] = 1;

    for (int ix = 2; ix < seq_size; ++ix)
        pell_seq[ix] = pell_seq[ix - 2] + pell_seq[ix-1];

    for (int i = 0; i < 18; i++)
        cout << pell_seq[i] << " ";
    return 0;
}

