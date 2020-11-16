#include<iostream>
#include<math.h>

using namespace std;

void zadanie(){
    int n, m, pom;
    cin >> n >> m;

    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= m; j++){
            cin >> pom;
            if(pom%2 != 0){
                printf("%d (%d,%d)\n",pom, j, i);
            }
        }
    }
}

int main(){
    int n;

    cin >> n;

    for(int i=0; i < n; i++){
        zadanie();
    }

    return 0;
}