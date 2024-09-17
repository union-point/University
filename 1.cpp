#include <iostream>
using namespace std;
int main(){
  float a,b,c,d;
  cout << "enter [a,b] [c,d]" << endl;
  cin >> a >> b >> c >> d;

  if (c > b || a > d){
    cout << "no intersect";
  }
  else{
    if(c >= a)
      cout << "[" << c << ",";
    else
      cout << "[" << a << ",";

    if(b <= d)
      cout << b << "]";
    else
      cout << d << "]";
  }


  cout << endl;
  return 0; 
}
