#include<iostream>

using namespace std;

int adiff(int A, int B){
  int x, y , C, result;
  x = A%360;
  y = B%360;
  if(x > y){
    C = x - y;
  } else {
    C = y - x;
  }
  if(C > 180){
    result = 360-C;
  } else {
    result = C;
  }
  return result;
}

int main(){
  cout << adiff(180,270);
  cout << adiff(210,45);
  cout << adiff(0,360);
  cout << adiff(10,350);
  cout << adiff(95,260);
  cout << adiff(90,-90);
  cout << adiff(1000,280);
  cout << adiff(60,244);
}
