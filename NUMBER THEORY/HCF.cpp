#include<iostream>
using namespace std;

int HCF(int n,int m){
	int HCF = 0;
	for(int i=1; i<=n; i++){
		if(n % i == 0 && m % i == 0){
			HCF *= i;
		}
	}
	return HCF;
}

int main(){
	int n,m;
	cout<<"Enter two numbers: "<<endl;
	cin>>n>>m;
	int ans = HCF(n,m);
	cout<<"HCF is : "<<ans;
	
	return 0;
}
