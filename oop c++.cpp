#include<iostream>
#include<string>
using namespace std;

class cars{
private:
    string company_name;
    string model_name;
    string fuel_type;
    float milage;
    double price;

public:
    void setdata(string cname, string mname,string ftype, float m,double p){
        company_name = cname;
        model_name = mname;
        fuel_type = ftype;
        milage = m;
        price = p;
    }

    void displaydata(){
        cout << "Car info:"<<endl<<endl;
        cout<< "Company name: "<<company_name<<endl;
        cout<<"Model name: "<<model_name<<endl;
        cout<<"Fuel type: "<<fuel_type<<endl;
        cout<<"Milage: "<<milage<<endl;
        cout<<"Price : "<<price<<endl;


    }


};

int main()
{
    cars car1;

    car1.setdata("Tesla", "R-15", "Petrol", 20.50, 100000);
    car1.displaydata();
    return 0;
}
