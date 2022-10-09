//We will find factors of a number entered by the user.

#include<iostream>

using namespace std;

int FACTORS(int);
	
int main(){
	char choice;
	do{
	int n;
	cout<<"Enter any number of which you want to calculate factors : ";
	cin>>n;
	FACTORS(n);
	cout<<"Do you want to calculate for some other value?\nType 'y' to proceed and 'n' to exit.\n";
	cin>>choice;
	}while(choice=='y' || choice=='Y');
	cout<<"Thank You!!!";
	return 0;
}

int FACTORS(int n){
	for(int i=1;i<=n;i++){
		if(n%i==0){
			cout<<i<<endl;
		}
		else{
			continue;
		}
	}
}
