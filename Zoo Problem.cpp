#include<iostream>
#include<string.h>
using namespace std;

int main(){
	char word[20];
	int x,z=0,o=0;
	cin>>word;
	x=strlen(word);
	for(int i=0;i<x;i++){
		if(word[i]=='z' || word[i]=='Z'){
			z++;
		}else{
			o++;
		}
	}
	if(2*z==o){
		cout<<"Yes";
	}else{
		cout<<"No";
	}
	return 0;
}
