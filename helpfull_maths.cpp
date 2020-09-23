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
  int i, numbersInt[60], max;
  char input[100];
  ss(input);
  char *numbersChar = strtok(input, "+");	
  numbersInt[0] = (int)*numbersChar;
  
  i=1;
  while(numbersChar!=NULL){
	numbersInt[i] = (int)*numbersChar;
	numbersChar = strtok(NULL, "+");
	deb(numbersChar[#i]);
	i++;
  }
  
  
  
  max = numbersInt[0];
  int arrSize = sizeof(numbersInt)/ sizeof(numbersInt[0]);
  
  
  Fo(i,1,arrSize){
	deb(numbersInt[i]);
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
