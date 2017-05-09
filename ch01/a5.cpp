#include <iostream>
#include <fstream>
using namespace std;

int main()
{
  const string usr_name = "KK";
  ifstream infile("seq_data.txt");
  int num_tries = 0;
  int num_cor = 0;

  if (!infile){
    cout << "Error read file." << endl;
  }
  else{
    string name;
    int nt;
    int nc;
    while (infile >> name)
    {
      infile >> nt >> nc;
      if(name == usr_name){
        cout << "Welcome back, " << usr_name
          << " " << nt << " " << nc <<  "\ngood Luck!\n";

        num_tries = nt;
        num_cor = nc;
      }
    }
  }

  return 0;
}
