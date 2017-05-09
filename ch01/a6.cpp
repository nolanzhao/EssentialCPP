#include <iostream>
#include <fstream>
using namespace std;

int main()
{

  string usr_name;
  fstream namelist("name_list.txt", ios_base::app);
  if (!namelist)
    cout << "Can't open file." << endl;
  else
    getline(cin, usr_name);
  cout << usr_name;

  return 0;

}
