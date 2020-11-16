#include<iostream>
#include<math.h>
#include<vector>
using namespace std;

void reverse(int n){
    while(n != 0){
        cout << n%10;
        n/=10;
    }
}

int main(){
    int n;

    cin >> n;
    
    reverse(n);

    return 0;
}