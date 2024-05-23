#include <iostream>
#include "Rectangle.h"
#include "Triangle.h"

using namespace std;

int main(){
  Rectangle rect;
  Triangle trgl;
  rect.setValues(4,5);
  trgl.setValues(4,5);

  cout << rect.Area() << '\n';
  cout << trgl.Area() << '\n';

  return 0;
}