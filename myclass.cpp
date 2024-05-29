#include "myclass.h"

MyClass::MyClass() {
  // A change
}

MyClass::MyClass(int x_) { 
  x = x_; 
}

int MyClass::getX() { 
  return x; 
}
