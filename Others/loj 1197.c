#include <iostream> #include <cstdio> #include <string> #include <cstring> #include <cmath > #include <sstream> #define N 100090using namespace Std;typedef long long ll;ll pri[n];int vis[n];int cnt;int F[n]    ; void Eulerpri () {cnt=0;        for (ll i=2;i<=70000;i++) {if (vis[i]==0) pri[cnt++]=i;            for (int j=0;j<cnt && i*pri[j]<=70000;j++) {vis[i*pri[j]]=1;        if (i%pri[j]==0) break;    }}}int Main () {//cout<< (77086800/209475) <<endl;    ll A, B;    int T;   Eulerpri ();   scanf ("%d", &t);       for (int ca=1;ca<=t;ca++) {scanf ("%lld%lld", &a,&b);       printf ("Case%d:", CA);//for (int i=0;i<=50;i++)//cout<<pri[i]<< "" <<endl;       int n=b-a;           Memset (f,0,sizeof f);//Because A, B is larger, in order to facilitate storage, consider a as 0 position for (int i=0;pri[i]*pri[i]<=b && i<cnt;i++) { int j=0;//used to store the label j= (A/pri[i]) *pri[i];//find the first number to be marked in A to B          if (j<a) j+=pri[i];//if less than a, then in the forward a prime period j-=a;//deposit is subscript for (; J<=n;j+=pri[i]) {           if (J+a==pri[i]) continue;//If the first number is the prime itself, then the f[j]=1 is not marked;       }} int ans=0;           for (int i=0;i<=n;i++) {if (f[i]==0) {ans++;        }} if (A==1) ans--;   printf ("%d\n", ans); } return 0;}