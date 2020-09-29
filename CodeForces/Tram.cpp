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
#define pb push_back
#define mp make_pair
#define F first
#define S second
#define all(x) x.begin(), x.end()
#define clr(x) memset(x, 0, sizeof(x))
#define sortall(x) sort(all(x))
#define tr(it, a) for(auto it = a.begin(); it != a.end(); it++)
#define PI 3.1415926535897932384626
typedef pair<int, int>	pii;
typedef pair<ll, ll>	pl;
typedef vector<int>		vi;
typedef vector<ll>		vl;
typedef vector<pii>		vpii;
typedef vector<pl>		vpl;
typedef vector<vi>		vvi;
typedef vector<vl>		vvl;

void fastscan(int &number) 
{ 
	bool negative = false; 
	register int c; 
	number = 0; 
	c = getchar(); 
	if (c=='-') 
	{ 
		negative = true; 
		c = getchar(); 
	} 
	for (; (c>47 && c<58); c=getchar()) 
		number = number *10 + c - 48; 
	if (negative) 
		number *= -1; 
} 

void solve() {
	int i;
	int exitTram[1000], enterTram[1000];
	int peoplebefore = 0, peopleafter = 0 ,maxintram = 0;
	int stops;
	cin >> stops;
	fo(i,stops){
		cin >> exitTram[i] >> enterTram[i];
	}
	fo(i,stops){
		peopleafter = (peoplebefore-exitTram[i]) + enterTram[i];
		if((peoplebefore < peopleafter)){
			if(maxintram < peopleafter){
				maxintram = peopleafter;
			}
		}
		peoplebefore = peopleafter;
	}
	cout<<maxintram;
	
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
