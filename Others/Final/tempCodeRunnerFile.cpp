#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
	 float x[10] = {5,7,11,13,17}, y[10] = {150,392,1452,2366,5202}, xp, yp=0, p;
	 int i,j,n = 5;
     xp = 10;
	 
	 for(i=1;i<=n;i++)
	 {
		  p=1;
		  for(j=1;j<=n;j++)
		  {
			   if(i!=j)
			   {
			    	p = p* (xp - x[j])/(x[i] - x[j]);
			   }
		  }
		  yp = yp + p * y[i];
	 }
	 cout<< endl<<"Interpolated value at "<< xp<< " is "<< yp;

	 return 0;
}