#include <iostream>
using namespace std;

int main(){
    int n,x,t,sum;
    cout<<"Masukkan n: ";cin>> t;

    
    if (t >= 1 && t <= 100){
        for (int i = 0; i<t;i++){
            cin >> x >> n;
            
        }
    }
    cout<<endl;

    for (int u = 0; u<t;u++){
        if (x >= 1 && x <= 10 && n >= 1 && n <= 10){
            for (int j = 0; j < n; j++){
                sum = 0;
                if (j == 0){
                    sum += x;
                }
                else if (j % 2 == 0){
                    sum += x;
                }
                else {
                    sum += -x;
                }
            }
        }
        cout<<sum<<endl;
    } 
}