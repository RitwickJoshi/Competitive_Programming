#include<bits/stdc++.h>
#define fo(i,n) for(i=0;i<n;i++)
#define Fo(i,k,n) for(i=k;k<n?i<n:i>n;k<n?i+=1:i-=1)
#define si(x)	scanf("%d",&x) // scan integer si
#define sl(x)	scanf("%lld",&x)
#define ss(s)	scanf("%s",s) // scan string ss
#define pi(x)	printf("%d\n",x) // print integer pi
#define pl(x)	printf("%lld\n",x)
#define ps(s)	printf("%s\n",s) // print string ps
#define deb(x) cout << #x << "=" << x << endl
#define deb2(x, y) cout << #x << "=" << x << "," << #y << "=" << y << endl
using namespace std;

void solve() {
  int i, j, moveInJ=0, moveInI=0, minMoves=0; 
  int m1[5][5]; //matrix 
  for(i=0;i<5;i++)
  {
  	for(j=0;j<5;j++)
  	{
  		si(m1[i][j]);
	}
  }
  for(i=0;i<5;i++)
  {
  	for(j=0;j<5;j++)
  	{
  		 if(m1[i][j]==1) // position of 1 i=x; j=y;
        {
          	// j checking 
			  if (j>2) 
          	{
			  moveInJ += j-2;
			  }
			else if(j<2){
				moveInJ += 2-j;
			}
			else{
				moveInJ += 0;
			}
			
			// i checking
			if(i>2){
				moveInI += i-2;
			}
			else if(i<2){
				moveInI += 2-i;
			}
			else{
				moveInI += 0;
			}
			
			// min moves calculate
			minMoves += moveInI+moveInJ;
			break;
          	
        }
        
  		
	  }
  }
  cout<<minMoves;
  
 
  

}


int main() { 
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0); // used for taking fast inputs

    int t = 1;
    //cin >> t;
    while(t--) {
      solve();
    }

    return 0;
}
