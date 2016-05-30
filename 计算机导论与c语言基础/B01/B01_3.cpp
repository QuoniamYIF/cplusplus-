#include<iostream>
using namespace std;
int main()
{
    int m,a[100];
    int oneC=0, fiveC=0, tenC=0;
    cin >> m;
    for(int i = 0;i < m;i ++){
        cin >> a[i];
    }
    for(int i = 0;i < m;i ++){
        if(a[i] == 1) {
            oneC++;
            continue;            
        }
        if(a[i] == 5) {
            fiveC++;
            continue;  
        }
        if(a[i] == 10) {
            tenC++;
        }
    }
    cout << oneC << endl;
    cout << fiveC << endl;
    cout << tenC << endl;    
}