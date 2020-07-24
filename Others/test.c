#include<stdio.h>

main()
{
	int n=0,t;
	long long int a,b;

	scanf("%d",&t);
	while(n<t){
		scanf("%lld %lld",&a,&b);
			if(a>0 && b>0){
		if(a%10 == b%10) printf("encaixa\n");
		else printf("nao encaixa\n");
	}
		n++;
	}

}
