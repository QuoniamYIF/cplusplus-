#include<iostream>
using namespace std;
int main()
{
  int L,M;
  int count = 0;
  cin >> L >> M;
  const int len = L + 1;
  const int area = M;
  int a[len];
  for(int i = 0;i < len;i ++){
      a[i] = 0;
  }
  int b[M][2];  
  for(int i = 0;i < M;i ++){
      for(int j = 0;j < 2;j ++){
          cin >> b[i][j];
      }
  }
  for(int i = 0;i < M;i ++){
      for(int j = b[i][0];j <= b[i][1];j ++){
          a[j] = 1;
      }
  }
  for(int i = 0;i < len;i ++){
      if(a[i] == 0){
          count++;
      }
  }
  cout << count << endl;
  return 0;
}