#include<iostream>
using namespace std;
int main()
{
    int m,n;
    
    cin >> m >> n;
    int sum = 0;
    for(int i = m; i < n + 1;i ++){
        if(i % 2 == 1)
            sum += i;
    }
    
    cout << sum << endl;
}