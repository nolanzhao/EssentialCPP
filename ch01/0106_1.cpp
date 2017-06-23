#include <iostream>
using namespace std;

int main()
{
  const int array_size = 3;
  int ia[array_size];
  int ival, icnt, sum = 0;

  while(cin >> ival && icnt < array_size)
    ia[icnt++] = ival;

  for (int ix = 0; ix < icnt; ix++)
    sum += ia[ix];

  int average = sum / icnt;
  cout << "Sum of " << " elements: " << sum << ". Average: " << average << endl;

}


