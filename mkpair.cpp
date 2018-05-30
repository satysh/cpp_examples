// mkpair.cpp
// compile with: /EHsc
// Illustrates how to use the make_pair function.
//
// Functions: make_pair - creates an object pair containing two data
//                        elements of any type.

#include <utility>
#include <iostream>

using namespace std;

/* STL pair data type containing int and float
*/

typedef struct pair<int,float> PAIR_IF;

int main(void)
{
  PAIR_IF pair1=make_pair(18,3.14f);

  cout << pair1.first << "  " << pair1.second << endl;
  pair1.first=10;
  pair1.second=1.0f;
  cout << pair1.first << "  " << pair1.second << endl;
}
