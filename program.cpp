#include <iostream>

using namespace std;

int main(){
	int x;
	cin>>x;
	if(x<0){
		cout<<"Blad negatywna liczba"<<endl;
		return 1;	
	}
	cout<<x<<endl;
	return 0;
}
