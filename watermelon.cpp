#include<bits/stdc++.h>
using namespace std;



int main(){
	int w,count=0;
	cin >> w;
	for (int i=1, j=w-1; i<w, j>0; i++, j--){
		if ((i%2==0) && (j%2==0)){
			cout<<"YES";
			count+=1;
			break;
		}
	}
	if (count==0){
		cout<<"NO";
	}
	return 0;
}



