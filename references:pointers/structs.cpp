// pulled directly from Lawton's github - some comments added

#include <iostream>
using namespace std;

// this defines the Point type - could be any name
struct Point {
  // every Point has an x & y member variable
  double x;
  double y;
};

Point add(const Point& p, const Point& q) { // remember functions need a type? well now the type is Point which means it returns a point type
  Point res;

  res.x = p.x + q.x;
  res.y = p.y + q.y;

  return res;
}

void negatePoint(Point& r) {
  r.x = -r.x;
  r.y = -r.y;
}

int main() {
  Point p; // decl only
  p.x = 42; // assign p.x variable (see under struct Point - double x and double y)
  p.y = 42.5;

  Point q = {2, 3}; // decl + init

  cout << "(" << p.x << ", " << p.y << ")" << endl; // p.x grabs Point p, variable x
  cout << "(" << q.x << ", " << q.y << ")" << endl; // p.y grabs Point p, variable y

  Point sum = add(p, q); // look at function Point add, it takes two Point variables as parameters
  cout << "(" << sum.x << ", " << sum.y << ")" << endl;

  negatePoint(p);
  cout << "(" << p.x << ", " << p.y << ")" << endl;

  return 0;
}