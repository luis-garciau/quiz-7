#include <iostream>
#include <cmath>
using namespace std;
int main()
{
  int a[] = {0, 1, 2, 3, 4, 5, 6, 5, 4, 3, 2, 1, 0};
  for (int i = 0; i < 13; i++)
  {
    for (int j = 0; j < (a[i]); j++)
    {
      cout << "T";
    }
    cout << endl;
  }
}
