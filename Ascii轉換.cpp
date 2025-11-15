#include<iostream>
using namespace std;

int to_ascii(char num){
    return static_cast<int>(num);
}

int main(){
    char ch;
    cin >> ch;
    int ascii_value = to_ascii(ch);
    cout << "The ASCII value of '" << ch << "' is: " << ascii_value;
}
