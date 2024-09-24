#include <iostream>
using namespace std;
//#include <ctime>
#include <climits>
int main(){
  int a[100],n,*p,min_i,max_i, sum = 0;
  int min= 0x7FFFFFFF ,max = 0x80000000;
  cout << "enter n: ";
  cin >> n;
  p = a;

  for (int i = 0; i<n; i++){
    *(p+i) = rand()%21 - 10 ;
    cout << *(p+i) << " ";
  }
  for (int i = 0;i < n;i++){
    if(*(p+i) >= max){
      max = *(p+i);
      max_i = i;
    }
    if(*(p+i) < min){
      min = *(p+i);
      min_i = i;
    }
  }
  cout << endl << "min a[" << min_i << "]" << " = " << min << endl << "max a[" << max_i << "]" << " = " << max << endl;
//1
  if(max_i > min_i){
    for(int i = min_i;i<=max_i;i++){
      sum += *(p+i);
    }
  }
  else {
    for(int i = 0; i<=n-min_i + max_i; i++){
      sum += *(p + (min_i + i)%n);
    }
  }

  cout << "sum = "<< sum << endl;
  sum = 0;

//2
  int len;
  if (max_i > min_i) {
    len = max_i - min_i;
  }
  else {
    len = n - min_i + max_i;
  }

  for (int i = 0; i <= len; i++) {
    int idx = (min_i + i) % n;
    sum += *(p + idx);
  }

  cout << "sum = "<< sum << endl;
  sum = 0;
//3
  int i = min_i;
  while (i != (max_i + 1) % n ) {
    sum += *(p + i);
    i = (i + 1) % n;
  }

  cout << "sum = "<< sum << endl;

}
