#include<iostream>
using namespace std;
int main()
{
    int even[6], odd[6], c[6];
    
    int oddMax = 0;
    int evenMin = 1000;
    int evenC = 0;
    int oddC = 0;    
    for(int i = 0;i < 6;i ++){
        cin >> c[i];        
    }
    for(int i = 0;i < 6;i ++){
        if(c[i] % 2 == 0){
            even[evenC++] = c[i];            
        }
    }
    for(int i = 0;i < 6;i ++){
        if(c[i] % 2 != 0){
            odd[oddC++] = c[i];            
        }
    }
    for(int i = 0;i < evenC;i ++){
        evenMin = even[i] < evenMin ? even[i] : evenMin;
    }
    for(int i = 0;i < oddC;i ++){
        oddMax = odd[i] > oddMax ? odd[i] : oddMax;
    }
    if(evenMin > oddMax){
        cout << evenMin - oddMax;
    }else{
        cout << -(evenMin - oddMax);        
    }
    return 0;
}