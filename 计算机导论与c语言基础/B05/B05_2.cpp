#include<iostream>
using namespace std;
int main()
{
    char s1[80];
    char s2[80];  
    char result;  
    cin.getline(s1, 80);
    cin.getline(s2, 80);
    int i = 0;
    while(s1[i] != '\0'){
        if(s1[i] < 90)
            s1[i] += 32;
        if(s2[i] < 90)
            s2[i] += 32;            
        if(s1[i] == s2[i])
            i ++;
        else
            break;
    }
    if (s1[i] > s2[i]) {
        result = '>';
    } else if (s1[i] < s2[i]) {
        result = '<';
    } else{
        result = '=';
    }
    cout << result << endl;
    return 0;
}