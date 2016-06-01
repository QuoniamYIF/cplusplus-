#include<iostream>
using namespace std;
int main()
{
  int n,m;
  cin >> n >> m;
  const int l = n; \
  int a[n];
  for(int i = 0;i < n;i ++){
      cin >> a[i];
  }
  for(int j = 0;j < m;j ++){
    int temp = a[n-1];    
    for(int i = n - 1;i > 0;i --){
      a[i] = a[i - 1];  
    }
    a[0] = temp;    
  }
 
  for(int i = 0;i < n;i ++){
      cout << a[i] << " ";
  }
  return 0;
}