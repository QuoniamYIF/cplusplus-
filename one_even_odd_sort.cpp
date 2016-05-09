#include<iostream>
using namespace std;
int main()
{
    int a[10];
    int l=0, r=9;
    int temp;
    for(int i = 0;i < 10;i ++){
        cin >> a[i];
    }
    while(l <= r){
        int leftisOdd = a[l] % 2 == 1;
        int rightisEven = a[r] % 2 == 0;
        if(leftisOdd){
            l++;
        }
        if(rightisEven){
            r--;
        }
        if(!leftisOdd && !rightisEven){
            temp = a[l];
            a[l] = a[r];
            a[r] = temp;   
            l++; r--;              
        }
    }
    for(int i = 0;i < 10;i ++){
        cout << a[i] << " ";
    }
    int start = 0, end = l;
    for(int i = start;i < end;i ++){
        for(int j = i+1;j < end;j ++){
            if(a[i] > a[j]){
                temp = a[j];
                a[j] = a[i];
                a[i] = temp;
            }
        }
        cout << endl;
    }
    start = l; end = 10;
    for(int i = start;i < end;i ++){
        for(int j = i+1;j < end;j ++){
            if(a[i] > a[j]){
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }    
    }
    for(int i = 0;i < 10;i ++){
        cout << a[i] << " ";
    }
    return 0;
}
  