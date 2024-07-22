#include <iostream>
#include <string>
using namespace std;

class binary
{
  string s;

public:
  void read(void);
  void chk_bin();
};
void binary ::read(void)
{
  cout << "enter a sting " << endl;
  cin >> s;
}
void binary ::chk_bin()
{
  for (int i = 0; i < s.length(); i++)
  {
    if (s.at(i) != '0' && s.at(i) != '1')
    {
      cout << "the number is not in binary from" << endl;
      return;
    }
  }
}

int main()
{
  binary n;
  n.read();
  n.chk_bin();
}