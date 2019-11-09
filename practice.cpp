#include<bits/stdc++.h>
using namespace std;
/*
    *
    * Prosen Ghosh
    * American International University - Bangladesh (AIUB)
    *
*/
int main(){
    int T,n;

    cin >> T;
    for(int t = 0; t < T; t++){
        int cnt[10] = {0};
        cin >> n;
        for(int i = 1; i <= n; i++){
            int tmp = i;
            while(tmp != 0){
                cnt[tmp%10]++;
                tmp/=10;
            }
        }
        for(int i = 0; i <= 9; i++){
            cout << cnt[i];
            if(i < 9)cout << " ";
        }
        cout << endl;
    }
    return 0;
}
