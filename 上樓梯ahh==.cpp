#include<iostream>
using namespace std;

int upstair(int n){
    if(n == 0 || n == 1)
        return 1;
    else
        return upstair(n - 1) + upstair(n - 2);
}//與費波那契數列公式相同

int main(){
    int n;
    cin>>n;
    cout<<upstair(n)<<endl;
    return 0;
}
