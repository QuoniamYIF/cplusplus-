#include<iostream>
using namespace std;
int main()
{
    char s[500];
    cin.getline(s, 500, '.');
    int max, currentIndex;
    max = currentIndex = 0;
    int count = 0;
    int i;
    for(i = 0;s[i] != '\0';i ++){
        if(s[i] != ' ') {
            count ++;
        } else {
            if(max < count){
                max = count;
                currentIndex = i - max;                
            }
            count = 0;
        }         
    }    
    if(max < count){
        max = count;
        currentIndex = i - max;                
    }  
    for(int i = currentIndex;i < currentIndex + max;i ++){
        cout << s[i];
    }    
    return 0;
}