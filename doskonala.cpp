#include<iostream>
#include<math.h>
#include<vector>

using namespace std;

vector<int> dzielniki(int n){
    vector<int> res;
    res.push_back(1);

    for(int i = 2; i <= sqrt(n); i++){
        if(n%i == 0){
            res.push_back(i);
            res.push_back(n/i);
        }
    }

    return res;
}

int suma(vector<int> input){
    int res=0;

    for(int i=0; i < input.size(); i++){
        res+=input[i];
    }

    return res;
}

bool doskonala(int n){
    return (n == suma(dzielniki(n))) ? (true) : (false);
}

int main(){
    int n, pom;

        cin >> pom;
        if(doskonala(pom)){
            cout << "tak" << endl;
        }else{
            cout << "nie" << endl;
        }

    return 0;
}