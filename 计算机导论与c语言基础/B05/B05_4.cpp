#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
   int a[5][5];
   int n, m;
   for(int i = 0;i < 5;i ++){
       for(int j = 0;j < 5;j ++){
           cin >> a[i][j];
       }
   }
   cin >> n >> m;
   if(n < 5 && m < 5 && n >=0 && m >= 0) {
       for(int i =0;i < 5;i ++){
           int temp = a[n][i];
           a[n][i] = a[m][i];
           a[m][i] = temp;
       }   
       for(int i = 0;i < 5;i ++){
        for(int j = 0;j < 5;j ++){           
            cout << setw(4) << a[i][j];    
            if(j == 4){
                cout << endl;
            }       
        }
       }                      
   } else {
       cout << "error" << endl;
   }
   return 0;
}