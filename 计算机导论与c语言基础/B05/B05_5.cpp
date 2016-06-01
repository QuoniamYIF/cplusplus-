#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
   int N;
   int a[100][100];
   cin >> N;
   int count = 0;
   for(int i = 0;i < N;i ++){
       for(int j = 0;j < N;j ++){
           cin >> a[i][j];
       }
   }
   for(int i = 1;i < N - 1;i ++){
       for(int j = 1;j < N - 1;j ++){
           int e,b,c,d;
           e = a[i-1][j] - a[i][j];//up
           b = a[i+1][j] - a[i][j];//down
           c = a[i][j-1] - a[i][j];//left
           d = a[i][j+1] - a[i][j];//right
           if(e >= 50 && b >= 50 && c >= 50 && d >= 50)
            count ++;
       }
   }
   cout << count << endl;
   return 0;
}