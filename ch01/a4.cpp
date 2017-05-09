#include <iostream>
#include <fstream>
using namespace std;


int main()
{
  string usr_name = "";
  int num_tries = 0;
  int num_right= 0;
  ofstream outfile("seq_data.txt", ios_base::app);
  if (! outfile)
    cerr << "Oops! Unable to save session data!\n";
  else
    cin >> usr_name;
    cin >> num_tries;
    cin >> num_right;
    outfile << usr_name << " "
      << num_tries <<" "
      << num_right << endl;


  return 0;
}

