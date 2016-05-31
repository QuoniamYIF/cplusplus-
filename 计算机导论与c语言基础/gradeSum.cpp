#include<iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    //输入分数并求和
    int num,demo;
    char slash;
    int sumn = 0,
        sumd = 1;
    while(n--){
        cin >> num >> slash >> demo;
        sumn = sumn * demo + num * sumd;
        sumd = sumd * demo;
    }
    //注：(a,b)和(a, a mod b)的最大公约数是一样的，欧几里得算法
    //求最大公约数
    int a = sumd,
        b = sumn,
        c;
    while(a != 0) {
        c = a;a = b % a;b = c;
    }
    
    int gcd = b;
    sumn = sumn / gcd;
    sumd = sumd / gcd;
    if(sumd == 1)
        cout << sumn << endl;
    else 
        cout << sumn << '/' << sumd;
    return 0;
}