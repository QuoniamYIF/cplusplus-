#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;
int main()
{
    int m;
    cin >> m;
    float a[m * 2];
    for(int i = 0;i < m*2;i ++){
        cin >> a[i];
    }
    float max = 0;
    for(int i = 0;i < m * 2 - 2;i += 2){
        for(int j = 0;j < m*2;j += 2){
            float dis = (a[i] - a[j])*(a[i] - a[j]) + (a[i+1] - a[j+1])*(a[i+1] - a[j+1]);
            if(max < dis)
                max = dis;
        }
    }    
    cout << fixed << setprecision(4) << sqrt(max) << endl;
    return 0;
}