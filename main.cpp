#include <iostream>

using namespace std;

int TwoNumAdd(int a, int b){
  cout << "add two num!" << endl;
  if((INT_MAX - a) < b || (INT_MIN - a) > b)
  {
    cout << "result out of range!" << endl;
    return ((INT_MAX - a) < b) ? INT_MAX : INT_MIN;
  }
  int res = a + b;
  return res;
}

int main(int argc, char *argv[]) {
  cout << "Hello Word!" << endl;
  cout << "Hello Insta360!" << endl;

  return 0;
}
