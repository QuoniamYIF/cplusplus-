#include<iostream>
using namespace std;
int main()
{
  //这是也一道经典的算法问题，在企业面试里出现概率很高，是“找到第K大的数”的变种。先排序再找中位数自然是很直接的做法，但排序本身很慢。我们只想找到第n/2大的数，对于其他数的顺序我们并不关心。那么怎么在不排序的前提下找到第n/2大的数呢？
  int N;
  while(cin >> N){
    if(N == 0) break;  
    int a[N];
    for(int i = 0;i < N;i ++){
        cin >> a[i];
    }
    if(N == 1){
        cout << a[0] <<endl;
        continue;
    }
    for(int i = 0;i < N;i ++){
        for(int j = 1;j < N - i;j ++){
            if(a[j-1] > a[j]){
                int temp = a[j-1];
                a[j-1] = a[j];
                a[j] = temp;
            }                    
        }
    }
       
    
    if(N%2 == 0) {
        cout << (a[N/2 - 1] + a[N/2]) / 2 << endl;
    } else {
        cout << a[N/2] << endl;
    }
  }
  return 0;
}