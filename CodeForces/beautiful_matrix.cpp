#include<bits/stdc++.h>
using namespace std;
#define gc getchar_unlocked
#define fo(i,n) for(i=1;i<=n;i++)
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
  int i, j, moves=0, n=5, arr[6][6], move_x=0, move_y=0;
  fo(i,n){
	  fo(j,n){
		  cin>>(arr[i][j]);
	  }
  }
  
  
  fo(i,n){
	  fo(j,n){
		  if (arr[i][j] == 1){
			  if (i<3){
				  move_x += 3 - i;
			  }
			  else if(i>3){
				  move_x += i - 3;
			  }
			  else{
				  move_x += 0;
			  }
			  if(j<3){
				  move_y += 3 - j;
			  }
			  else if(j>3){
				  move_y += j - 3;
			  }
			  else{
				  move_y += 0;
			  }
			  moves+=move_x+move_y;
			  break;
		  }
	  }
  }
  cout<<moves;
  
}

int main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    // srand(chrono::high_resolution_clock::now().time_since_epoch().count());

    int t = 1;
   
    while(t--) {
      solve();
       }

    return 0;
}
