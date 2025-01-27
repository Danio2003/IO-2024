#include <iostream>

using namespace std;
int fibonacci(int n){
	if(n<=1)return n;
	return fibonacci(n-1)+fibonacci(n-2);
}
int main(){
	int x;
	cin>>x;
	if(x<0){
		cout<<"Blad negatywna liczba"<<endl;
		return 1;	
	}
	cout<<x<<" "<<fibonacci(x)<<endl;
	return 0;
}
