#include<iostream>
using namespace std;

int reverse_function(int n){
    int result = 0;
    while(n != 0){
        int digit = n % 10;
        if(digit != 0){
            result = result * 10 + digit;
            n /= 10;
        }else{
            n /= 10;
            return reverse_function(n);
        }
    }
    return result;
}

int main(){
    int n;
    cin >> n;
    cout << reverse_function(n);
}
