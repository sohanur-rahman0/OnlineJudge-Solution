#include<iostream>
#include<string>

using namespace std;

class myclass{
private:
    string name;

public:
    myclass(string n){
        setname(n);
    }
    void setname(string n){
    name = n;
    }
    string getname(){
        return name;
    }

};

int main()
{
    myclass obj("Information");
    cout<<obj.getname();
    myclass obj2(" Gathering");
    cout<<obj2.getname()<<endl;


   return 0;
}

