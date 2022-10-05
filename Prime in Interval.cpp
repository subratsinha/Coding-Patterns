//Here we will find prime numbers which are between a interval of two numbers entered by user.

#include<iostream>

using namespace std;

int prime(int,int);
int dash();
int main(){
	char c;
	do{
	int a,b;
	cout<<"Enter the lower bound of the interval - ";
	cin>>a;
	cout<<"Enter the upper bound of the interval - ";
	cin>>b;
	if(a<0 || b<0){
		cout<<"Enter positive values as negative number cannot be prime.\n";
	}else{
		prime(a,b);
	}
	dash();
	cout<<"\nDo you want to find prime numbers for some other interval? Type 'y' to proceed and 'n' to exit.\n";
	cin>>c;
	}while(c=='y' || c=='Y');
	cout<<"Thank You!!!";
	return 0;
}

int dash(){
	for(int i=1;i<65;i++){
		cout<<"-";
	}
}

int prime(int a,int b){
	for(int i=a;i<=b;i++){
		int count=0;
		if(i==1 || i==0){
		continue;
		}
		for(int j=2;j<i;j++){
			if(i%j==0){
				count++;
			}
		}
		if(count==0){
		cout<<"The number "<<i<<" is prime."<<endl;
		}
	}
	return 0;
}
