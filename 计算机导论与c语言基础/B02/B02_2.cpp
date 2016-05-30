#include<iostream>
using namespace std;
int main()
{
    int h, r;
    cin >> h >> r;
    double pi = 3.14159;
    double square = pi * r * r * h;    
    double result = 20000 / square;    
    if(result == int(result) ){
        cout << result << endl;
    } else {
        cout << int(result) + 1 << endl;
    }   
    return 0;
}