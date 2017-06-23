#include <iostream>
using namespace std;

bool fibon_elem(int, int &);



bool fibon_elem(int pos, int &elem)
{
  if (pos <= 0 || pos > 1024){
    elem = 0;
    return false;
  }
  elem = 1;
  int n2 = 1, n1 = 1;

  for (int ix=3; ix <= pos; ++ix){
    elem = n2 + n1;
    n2 = n1;
    n1 = elem;
  }

  return true;

}


bool print_sequence(int pos)
{
  if (pos <= 0 || pos > 1024)
  {
    cerr << "invalid position: " << pos << " -- cannot handle request!\n";
    return false;
  }
  cout << "The Fibonacci Sequence for " << pos << " position: \n\t";
  switch (pos)
  {
    default:
    case 2:
      cout << "1 ";
    case 1:
      cout << "1 ";
      break;
  }
  int elem;
  int n2 = 1, n1 = 1;
  for(int ix = 3; ix <= pos; ++ix)
  {
    elem = n2 + n1;
    n2 = n1;
    n1 = elem;
    cout << elem << (!(ix % 10) ? "\n\t" : " ");
  }
  cout << endl;
  return true;
}

int main()
{
  int pos;
  cout << "Please enter a position: ";
  cin >> pos;

  int elem;
  if(fibon_elem(pos, elem))
    cout << "element # " << pos
      << " is " << elem << endl;
  else
    cout << "Sorry. Could not caculate element # " << pos << endl;

  print_sequence(pos);

}


