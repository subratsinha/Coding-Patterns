//Class Example Robert Lafore Q.3

#include<iostream>

using namespace std;

class leverage{
	private:
		int crowbar;
	public:
		void pry(){
			cout<<endl<<"This is function calling.This is first function";
		}
		void boom(){
			cout<<endl<<"Here I called the second function.";
		}
		int getcrow(){
			return crowbar;
		}
};

int main(){
	leverage lever1;
	cout<<"This is my first program of class.";
	lever1.pry();
	lever1.boom();
	return 0;
}
