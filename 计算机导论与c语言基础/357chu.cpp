#include<iostream>
using namespace std;
int main()
{
    int m;
    int a[3];
    while(cin >> m){ 
        int i = 0;
        if(m%3 == 0 || m%5 == 0 || m%7 == 0) {  
            if(m % 3 == 0) {
                a[i++] = 3;
            }
            if(m % 5 == 0) {
                a[i++] = 5;
            }
            if(m % 7 == 0) {
                a[i++] = 7;
            }    
            int current = i;
            if(current == 1){
                cout << a[0] << endl;
                continue;
            }
            for(int i = 0;i < current;i ++){
                cout << a[i] << " ";
                if(i == current - 1) 
                    cout << endl;               
            }        
        } else {
            cout << 'n' << endl;
        }
    }
    return 0;
}