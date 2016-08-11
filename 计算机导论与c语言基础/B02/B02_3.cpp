#include<iostream>
using namespace std;
int main()
{
    int n, a[100];
    cin >> n;
    
    int max = 0;
    for(int i = 0;i < n;i ++){
        cin >> a[i];
    }
    for(int i = 0;i < n;i ++){
        max = a[i] > max ? a[i] : max;
    }
    cout << max << endl;
    return 0;
}