#include<iostream>

using namespace std;

class student{
	public:
		char name[50];
		int roll_no; 
		
		void display(){
			cout<<endl<<"The function is called successfully.";
		}
};

int main(){
	student s[2];
	for(int i=1;i<3;i++){
		cout<<"Enter the name of student : ";
		cin>>s[i].name;
		cout<<"Enter roll number of student : ";
		cin>>s[i].roll_no;
	}
	s[2].display();
	return 0;
}
