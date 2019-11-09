#include<iostream>
#include<string>

using namespace std;

class myclass{
private:
    string name;

public:
    void setname(string n){
    name = n;
    }
    string getname(){
        return name;
    }

};

int main()
{
    string name;
    myclass myobj;
    cout<<"Enter your name:";
    cin>>name;
    myobj.setname(name);
    cout<<"Thank You ";
    cout<<myobj.getname()<<endl;

   return 0;
}

