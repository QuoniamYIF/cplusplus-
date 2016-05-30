#include<iostream>
using namespace std;
int main()
{
    int n, temp;
    int a[1000];
    cin >> n;
    for(int i = 0;i < n;i ++){
        cin >> a[i];
    }
    for(int j = 0;j < n;j ++){
        for(int i = 1; i < n - j;i ++){
            if(a[i-1] > a[i]){
                temp = a[i-1];
                a[i-1] = a[i];
                a[i] = temp;
            }
        }
    }
    for(int i = 0;i < n;i ++){
        cout << a[i] << endl;
    }
}