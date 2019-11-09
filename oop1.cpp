#include<iostream>

using namespace std;

class print{
public:
    void call(){
        cout<<"hello world!"<<endl;
    }

};

int main()
{
    print hello;
    hello.call();
   return 0;
}
