#include <bits/stdc++.h>
using namespace std;

int main() {
  float myDeviceWidth = 1920, figmaWidth, actual;
  cout << "Enter figma width = ";
  cin >> figmaWidth;
  cout << endl << endl;
  actual = (myDeviceWidth / figmaWidth);
  cout << "\n Actual width = " << actual;
  return 0;
}
