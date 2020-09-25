#include<bits/stdc++.h>
using namespace std;


void Firstlast(string str){
	cout<<str[0]<<str.length()-2<<str[str.length()-1]<<"\n";
}


int main(){
	int n;
	cin >> n;
	string str;
	for (int i=0; i<n; i++){
		cin>>str;
		if (str.length()>10){
			Firstlast(str);	
		}
		else{
			cout<<str<<"\n";
		}
	}
}




