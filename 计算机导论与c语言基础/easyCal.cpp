#include<iostream>
using namespace std;
int main()
{
    int n,m;
    char c;
    cin >> n >> m >> c;
    if(m == 0){
        cout << "Divided by zero!" << endl;
    }
    if(c != '+' && c != '-' && c != '*' && c != '/'){
        cout << "Invalid operator!" << endl;            
    }
    switch(c){
        case '+': cout << n + m << endl;break;
        case '-': cout << n - m << endl;break;
        case '*': cout << n * m << endl;break;
        case '/': cout << n / m << endl;break;            
    }

    return 0;
}