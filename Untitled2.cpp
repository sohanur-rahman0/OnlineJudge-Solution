#include <iostream>
using namespace std;
int main(){
   int n, num[50], largest, second,max,min;
   cout<<"Enter number of elements: ";
   cin>>n;
   for(int i=0; i<n; i++){
      cout<<"Enter Array Element"<<(i+1)<<": ";
      cin>>num[i];
   }
   max = num[0];
   min = num[0];
   for(int i=1; i<n; i++){
     if(num[i]>max)
        max = num[i];
     if(num[i]<min)
        min = num[i];
   }

   if(num[0]<num[1]){
      largest = num[1];
      second = num[0];
   }
   else{
      largest = num[0];
      second = num[1];
   }
   for (int i = 2; i< n ; i ++) {

      if (num[i] > largest) {
         second = largest;
         largest = num[i];
      }

      else if (num[i] > second && num[i] != largest) {
         second = num[i];
      }
   }
   cout<<"Max :"<<max<<endl<<"Min :"<<min<<endl;
   cout<<"Second max :"<<second;
   return 0;
}
