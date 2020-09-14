#include<bits/stdc++.h>
using namespace std;
#define gc getchar_unlocked
#define fo(i,n) for(i=0;i<n;i++)
#define Fo(i,k,n) for(i=k;k<n?i<n:i>n;k<n?i+=1:i-=1)
#define ll long long
#define si(x)	scanf("%d",&x)
#define sl(x)	scanf("%lld",&x)
#define ss(s)	scanf("%s",s)
#define pi(x)	printf("%d\n",x)
#define pl(x)	printf("%lld\n",x)
#define ps(s)	printf("%s\n",s)
#define deb(x) cout << #x << "=" << x << endl
#define deb2(x, y) cout << #x << "=" << x << "," << #y << "=" << y << endl

void solve() {
  string in1, in2;
  cin>>in1>>in2;
  transform(in1.begin(), in1.end(), in1.begin(), ::tolower);
  transform(in2.begin(), in2.end(), in2.begin(), ::tolower);
  // deb2(in1, in2);
  if(in1.compare(in2) == 0){
	  cout<<"0"<<endl;
  }
  else if(in1.compare(in2) < 0){
	  cout<<"-1"<<endl;
  }
  else if(in2.compare(in1) < 0){
	  cout<<"1"<<endl;
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
