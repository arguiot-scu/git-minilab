#include <iostream>
#include "myclass.h"

using namespace std;

int main () {
  cout << "Hello World! I Changed this file in a new branch!" << endl;

  MyClass a(5);
  cout << a.getX() << endl;
}
