#include<bits/stdc++.h>
using namespace std;




int main(){
	int n, k, contestant[101], count_adv=0;
	cin >> n >> k;
	for (int i=1; i<=n; i++){
		cin>>contestant[i];
	}
	for (int i=1; i<=n; i++){
		if((contestant[i]>=contestant[k]) && (contestant[i]>0)){
			count_adv++;
		}
		if(contestant[i]<contestant[k]){
			break;
		}
	}
	cout<<count_adv;
}










