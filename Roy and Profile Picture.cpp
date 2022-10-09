#include<iostream>

using namespace std;

int main(){
	
	int L,N;
	cin>>L;
	cin>>N;
	int W[N];
	int H[N];
	for(int i=0;i<N;i++){
		cin>>W[i]>>H[i];
	}
	for(int i=0;i<N;i++){
		if(W[i]<L || H[i]<L){
			cout<<"UPLOAD ANOTHER"<<endl;
		}else if(W[i]>=L && H[i]>=L){
			if(W[i]==H[i]){
				cout<<"ACCEPTED"<<endl;
			}else{
				cout<<"CROP IT"<<endl;
			}
		}
	}
	return 0;
}
