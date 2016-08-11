#include<iostream>
using namespace std;
int main()
{
    int m, a[3];
    int iC = 0;
    cin >> m;
    while(m > 0){
        a[iC++]=m%10;
        m /= 10;
    }
    while(iC > 0){
        cout << a[--iC] <<endl;
    }
    
    return 0;
}