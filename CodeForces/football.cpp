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
#define pb push_back
#define mp make_pair
#define F first
#define S second
#define all(x) x.begin(), x.end()
#define clr(x) memset(x, 0, sizeof(x))
#define sortall(x) sort(all(x))
#define tr(it, a) for(auto it = a.begin(); it != a.end(); it++)
#define PI 3.1415926535897932384626
#define fast ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)
typedef pair<int, int>	pii;
typedef pair<ll, ll>	pl;
typedef vector<int>		vi;
typedef vector<ll>		vl;
typedef vector<pii>		vpii;
typedef vector<pl>		vpl;
typedef vector<vi>		vvi;
typedef vector<vl>		vvl;

/******************************** FOR DEBUG PROCESS *******************************************/
#define deb(x) cout << #x << " = " << x << endl
#define deb2(x, y) cout << #x << " = " << x << " , " << #y << " = " << y << endl
template<typename T, size_t n>
void pa(T const(& arr)[n]){
	fast;
	for(size_t i=0; i<n; i++)
	cout << "[" << i << "]" << ": " << arr[i] << " \n";
}
void __print(int x) {cerr << x;}
void __print(long x) {cerr << x;}
void __print(long long x) {cerr << x;}
void __print(unsigned x) {cerr << x;}
void __print(unsigned long x) {cerr << x;}
void __print(unsigned long long x) {cerr << x;}
void __print(float x) {cerr << x;}
void __print(double x) {cerr << x;}
void __print(long double x) {cerr << x;}
void __print(char x) {cerr << '\'' << x << '\'';}
void __print(const char *x) {cerr << '\"' << x << '\"';}
void __print(const string &x) {cerr << '\"' << x << '\"';}
void __print(bool x) {cerr << (x ? "true" : "false");}

template<typename T, typename V>
void __print(const pair<T, V> &x) {cerr << '{'; __print(x.first); cerr << ','; __print(x.second); cerr << '}';}
template<typename T>
void __print(const T &x) {int f = 0; cerr << '{'; for (auto &i: x) cerr << (f++ ? "," : ""), __print(i); cerr << "}";}
void _print() {cerr << "]\n";}
template <typename T, typename... V>
void _print(T t, V... v) {__print(t); if (sizeof...(v)) cerr << ", "; _print(v...);}
#ifndef ONLINE_JUDGE
#define debug(x...) cerr << "[" << #x << "] = ["; _print(x)
#else
#define debug(x...)
#endif
/******************************** ABOVE FOR DEBUG PROCESS **************************************/

void test_cases() {
	fast;
	ll int cntZ=0, cntO=0, i;
	// cnt=0;
	string input;
	cin>>input;
	ll int resultZ = 0, resultO = 0;
	ll int j;
	fo(i, input.length()){
		fo(j, 7){
			if (input[i+j] == '0'){
				cntZ ++;
				resultZ = max(resultZ, cntZ);
			}
			else {
				break;
			}
		}
		fo(j, 7){
			if (input[i+j] == '1'){
				cntO++;
				resultO = max(resultO, cntO);
			}
			else {
				break;
			}
		}
		// debug(cntZ, cntO);
		cntZ=cntO=0;
	}
	if(resultZ >= 7 || resultO >= 7)
		cout<<"YES";
	else
		cout<<"NO";
}

int main() {
    fast;

    int t = 1;
    // cin >> t;
    while(t--) {
      test_cases();
    }
    return 0;
}
