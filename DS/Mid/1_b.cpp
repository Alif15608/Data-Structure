#include <iostream>
#include <string>

int main ()
{
  std::string str ("Tasnia");




  str.erase (str.begin()+1);
  std::cout << str << '\n';


  return 0;
}
