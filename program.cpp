#include <iostream>

using namespace std;
int fibonacci(int n){
	if(n<=1)return n;
	return fibonacci(n-1)+fibonacci(n-2);
}
int main(){
	int x;
	cin>>x;
	cout<<x<<" "<<fibonacci(x)<<endl;
	return 0;
}
