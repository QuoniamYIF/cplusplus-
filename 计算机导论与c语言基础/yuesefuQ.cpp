#include<iostream>
using namespace std;

int main()
{
    int n, m;
    int pre[350],next[350];            
    while(true)
    {
        cin >> n >> m;
        if(n == 0 && m == 0)
            break;
        
        //创建顺序
        for(int i = 0;i < n - 1;i ++){
            next[i] = i + 1;
            pre[i + 1] = i;
        }
        pre[0] = n-1;
        next[n-1] = 0;        
        //开始数数  
        int current = 0; 
        while(true){
            for(int i = 0;i < m - 1;i ++){
                current = next[current];
            }
            
            int preP = pre[current];
            int nextP = next[current];
            
            next[preP] = nextP;
            pre[nextP] = preP;
            
            if(preP == nextP){
                cout << preP + 1 << endl;
                break;
            }
            
            current = nextP;
        }
    }
    return 0;
} 