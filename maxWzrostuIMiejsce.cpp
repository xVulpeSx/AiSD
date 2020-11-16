#include<iostream>
#include<math.h>

using namespace std;

void zadanie(int n){
    int res = -1, pos = -1, pom;

    for(int i=1; i <=n ;i++){
        cin >> pom;
        if(pom > res){
            res = pom;
            pos = i;
        }
    }

    printf("%d %d", res, pos);

}

int main(){
    int n;

    cin >> n;

    zadanie(n);

    return 0;
}