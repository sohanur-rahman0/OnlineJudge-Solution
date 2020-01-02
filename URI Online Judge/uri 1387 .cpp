#include<iostream>
int main()
{
    int a,b;
    std::cin>>a>>b;
    while(a!=0 || b!=0){
        std::cout<<a+b<<std::endl;
        std::cin>>a>>b;
    }
    return 0;
}
