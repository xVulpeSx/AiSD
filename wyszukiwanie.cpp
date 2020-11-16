#include<iostream>
#include<math.h>
#include<vector>
using namespace std;

int szukaj(vector<int> tab){
    int n;
    cin >> n;

    for(int i=0; i< tab.size(); i++){
        if(tab[i] == n){
            return i+1;
        }
    }
    return -1;
}

void zadanie(){
    int wystapienie = -1, n, pom;
    vector<int> tab;

    cin >> n;

    for(int i=0; i < n; i++){
        cin >> pom;
        tab.push_back(pom);
    }

    wystapienie = szukaj(tab);

    if(wystapienie == -1){
        cout << "BRAK";
    }else{
        cout << wystapienie;
    }
}

int main(){
    int n;

    cin >> n;

    for(int i=0; i<n; i++)
        zadanie();

    return 0;
}