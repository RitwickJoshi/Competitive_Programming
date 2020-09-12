#include<bits/stdc++.h>
using namespace std;
#define fo(i,n) for(i=0;i<n;i++)
#define Fo(i,k,n) for(i=k;k<n?i<n:i>n;k<n?i+=1:i-=1)
#define si(x)	scanf("%d",&x)
#define sl(x)	scanf("%lld",&x)
#define ss(s)	scanf("%s",s)
#define pi(x)	printf("%d\n",x)
#define pl(x)	printf("%lld\n",x)
#define ps(s)	printf("%s\n",s)
#define deb(x) cout << #x << "=" << x << endl
#define deb2(x, y) cout << #x << "=" << x << "," << #y << "=" << y << endl
#define PI 3.1415926535897932384626

void solve() {
  int n, m, max_dominoes=0;
  si(m);si(n);
  if (m%2==0){
	  max_dominoes+=((m/2)*n);
  }
  else if(n%2==0){
	  max_dominoes+=((n/2)*m);
  }
  else if((m%2!=0) && (n%2!=0)){
	  m--;n--;
	  max_dominoes+=(((m/2)*n) + (m/2) + (n/2));
	  }
	pi(max_dominoes);
}

int main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    srand(chrono::high_resolution_clock::now().time_since_epoch().count());

    int t = 1;
    // cin >> t;
    while(t--) {
      solve();
    }

    return 0;
}
