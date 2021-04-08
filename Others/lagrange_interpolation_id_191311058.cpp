#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
	 float x[10] = {300,304,305,307}, y[10] = {2.4771,2.4829, 2.4843, 2.4871}, xp, yp=0, p;
	 int i,j,n = 4;
     xp = 301;
	 
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