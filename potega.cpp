#include<iostream>
#include<math.h>
#include<vector>

using namespace std;

int pot(int a, int n){
    int res=1;

    if(a == 0){
        return 0;
    }

    if(n == 0){
        return 1;
    }

    for(int i=1; i <= n ; i++){
        res*=a;
    }
    return res;
}

int main(){
    int a, n;
    cin >> a >> n;
    cout << pot(a,n);

    return 0;
}