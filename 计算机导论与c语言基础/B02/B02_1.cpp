#include<iostream>
using namespace std;
int main()
{
    int n,x,y;
    cin >> n >> x >> y;    
    if(y%x == 0) {
        if(n > y/x) {
            cout << n - y/x << endl;              
        }else {
            cout << 0 << endl;                
        }
        
    } else {
        if(n > y/x - 1)
            cout << n - y/x -1 << endl;             
        else
            cout << 0;
    }      
}