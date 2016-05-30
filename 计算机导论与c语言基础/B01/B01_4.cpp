#include<iostream>
using namespace std;
int main()
{
    int N, m;
    cin >> N;
    for(int i =0;i < N;i ++){
        int oneC = 0;
        // int length = 1;        
        cin >> m;      
        for(int i = 0;m > 0; i ++){
            oneC += m % 2;
            m = m / 2;
            // length = i + 1;  
        }
        // cout << length << endl;
        // for(int i = 0;i < length;i ++){
        //     oneC += binary[i];
        // }
        cout << oneC << endl;
    }
    return 0;
}