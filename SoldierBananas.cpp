#include<bits/stdc++.h>
using namespace std;
#define gc getchar_unlocked
#define fo(i,n) for(i=0;i<n;i++)
#define Fo(i,k,n) for(i=k;k<n?i<n:i>n;k<n?i+=1:i-=1)
#define ll long long
#define si(x)	scanf("%d",&x)
#define sl(x)	scanf("%lld",&x)
#define ss(s)	scanf("%s",&s)
#define pi(x)	printf("%d\n",x)
#define pl(x)	printf("%lld\n",x)
#define ps(s)	printf("%s\n",s)
#define deb(x) cout << #x << "=" << x << endl
#define deb2(x, y) cout << #x << "=" << x << "," << #y << "=" << y << endl


 // 3$ has to pay for each banana he buys
 // have 17$
 // need 4 bananas
 // 3*1 + 3*2 + 3*3 + 3*4 => 3+6+9+12 => 30 - he has



void solve() {
  int i, wBananas, kDollarEach, nDollarHas, FinalAmt = 0;
  cin >> kDollarEach >> nDollarHas >>  wBananas;
  Fo(i, 1, wBananas+1){
	  FinalAmt += kDollarEach*i;
	  // deb2(i, FinalAmt);
  }
  
  int Borrow = FinalAmt-nDollarHas;
  if (Borrow <= 0){
	cout<<0;  
	}
	else{
		cout<<Borrow;
	}
  
}

int main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    // srand(chrono::high_resolution_clock::now().time_since_epoch().count());

    int t = 1;
    // cin >> t;
    while(t--) {
      solve();
    }

    return 0;
}
