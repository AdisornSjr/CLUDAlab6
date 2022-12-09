#include<iostream>
using namespace std;

int main(){
    int N;
    int even = 0;
    int odd = 0;
    cout << "Enter an integer: ";
    cin >> N;
    
    if(N != 0){
        int e = 0;
        int o = 0;
        while(N > 0){
            if(N%2 == 0){
                e++;
            }else{
                o++;
            }
        cout << "Enter an integer: ";
        cin >> N;
        }
        cout << "#Even numbers = " << e << endl;
        cout << "#Odd numbers = " << odd << endl;
    
    }else{
        cout << "#Even numbers = " << even << endl;
        cout << "Odd numbers = " << odd << endl;
    }

    
    return 0;
}