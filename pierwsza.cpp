#include<iostream>
#include<math.h>

using namespace std;

static string PIERWSZA = "PIERWSZA";
static string ZLOZONA = "ZLOZONA";

bool pierwsza(int n){
    if(n == 2){
        return true;
    }

    for(int i=2; i <= sqrt(n);i++){
        if(n%i == 0){
            return false;
        }
    }

    return true;
}

int main(){
    int n, pom;

    cin >> n;

    for(int i=0; i < n; i++){
        cin >> pom;
        if(pierwsza(pom)){
            cout << PIERWSZA << endl;
        }else{
            cout << ZLOZONA << endl;
        }
    }

    return 0;
}