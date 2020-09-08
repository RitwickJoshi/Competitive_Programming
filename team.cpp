#include<bits/stdc++.h>
using namespace std;




int main(){
	int n;
	cin >> n;
	int petya, vasya, tonya, solution_count=0;
	
	for(int i=0; i<n; i++){
		cin>>petya>>vasya>>tonya;
		if( (petya+vasya+tonya) >= 2 ){
			solution_count++;
		}
	}
	cout<<solution_count;
	return 0;
	
}





