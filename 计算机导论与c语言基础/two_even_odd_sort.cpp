#include <iostream>
using namespace std;

int main() {
  int a[10], temp;
  for(int i = 0;i < 10;i ++){
      cin >> a[i];
  }
  
  for(int i = 0;i < 9;i ++){
      for(int j = 1;j < 10 - i;j ++){
          int leftisEven = a[j-1] % 2 == 0;
          int rightisEven = a[j] % 2 == 0;
          if((leftisEven && !rightisEven) ||
             ((leftisEven == rightisEven) && a[j-1] > a[j])){
             temp = a[j-1];
             a[j-1] = a[j];
             a[j] = temp;
          }
      }
  }
  for(int i = 0;i < 10;i ++){
      cout << a[i] << " ";
  }
  return 0;
}