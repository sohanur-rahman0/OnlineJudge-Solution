#include<iostream>

using namespace std;

int main()
{
    int a,b,n,inter=0,gremio=0,grenal = 0,empate = 0;
    while(1)
    {
        cin>>a>>b;
        if(a>b)
            inter++;
        if(a<b)
            gremio++;
        if(a==b)
            empate++;
        grenal++;
        cout << "Novo grenal (1-sim 2-nao)"<<endl;
        cin>>n;
        if(n==1)
            continue;
        if(n==2)
            break;
    }
    cout << grenal <<" grenaisn"<<endl;
    cout << "Inter:" << inter << endl;
    cout << "Gremio:" << gremio <<endl;
    cout << "Empates:" << empate << endl;
    if(inter > gremio)
        cout << "Inter venceu maisn"<<endl;
    if(inter < gremio)
        cout << "Gremio venceu maisn"<<endl;
    if(inter == gremio)
        cout << "Nao houve vencedorn"<<endl;
    return 0;
}
