#include<bits/stdc++.h>
using namespace std;
int main()
{
    map<string,string>dict;
    dict["brasil"] = "Feliz Natal!";
    dict["alemanha"] = "Frohliche Weihnachten!";
    dict["austria"] = "Frohe Weihnacht!";
    dict["coreia"] = "Chuk Sung Tan!";
    dict["espanha"] = "Feliz Navidad!";
    dict["grecia"] = "Kala Christougena!";
    dict["estados-unidos"] = "Merry Christmas!";
    dict["inglaterra"] = "Merry Christmas!";
    dict["australia"] = "Merry Christmas!";
    dict["portugal"] = "Feliz Natal!";
    dict["suecia"] = "God Jul!";
    dict["turquia"] = "Mutlu Noeller";
    dict["argentina"] = "Feliz Navidad!";
    dict["chile"] = "Feliz Navidad!";
    dict["mexico"] = "Feliz Navidad!";
    dict["antardida"] = "Merry Christmas!";
    dict["canada"] = "Merry Christmas!";
    dict["irlanda"] = "Nollaig Shona Dhuit!";
    dict["belgica"] = "Zalig Kerstfeest!";
    dict["italia"] = "Buon Natale!";
    dict["libia"] = "Buon Natale!";
    dict["siria"] = "Milad Mubarak!";
    dict["marrocos"] = "Milad Mubarak!";
    dict["japao"] = "Merii Kurisumasu!";
    string str;
    while(cin>>str)
    {
        if(dict.find(str)!=dict.end())
        {
            cout<<dict[str]<<endl;
        }
        else
        {
            cout<<"--- NOT FOUND ---"<<endl;
        }

    }

}
