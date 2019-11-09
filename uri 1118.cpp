#include<bits/stdc++.h>
using std::cin;
using std::cout;
using std::endl;
using std::fixed;
using std::setprecision;

int main()
{
    double a,b,x=1,avg;
    while(x==1){
        while(true){
            cin>>a;
            if(a>=0 && a <=10)
                break;
            cout<<"nota invalida"<<endl;
        }
        while(true){
            cin>>b;
            if(b>=0 && b<=10)break;

            cout<<"nota invalida"<<endl;

        }
        avg = (a+b)/2.00;
        cout<<fixed<<setprecision(2)<<"media = "<<avg<<endl;
        while(true){
            cin>>x;
            if(x>=1 && x <=2)break;

            cout<<"novo calculo (1-sim 2-nao)"<<endl;
        }
        cout<<"novo calculo (1-sim 2-nao)"<<endl;
    }
    return 0;
}
