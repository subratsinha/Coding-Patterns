#include<iostream>
#include<string.h>

using namespace std;

//function to reverse the string using pointers.
//input parameter string
char* reverse(char* list){
//front pointer of type char to point to the first character of the string
	char *front = list; 

//rear pointer of type char to point to the last character of the string.
//strlen function to get the length of the string.
	char *rear = list + strlen(list) - 1;
	
//loop will continue till the front is less than rear
    while (front < rear) {
    	//assign the front value to temp and then assign the rear value to front and
//    	then increment the front pointer value and assignment temp value to rear pointer
//and then decrement the rear value
        char temp = *front;
        *front++ = *rear;
        *rear-- = temp;
    }
    return list;
}

int main(){
//	str variable to take user input
	char str[100];
	cout<<"Original String: ";
	
// taking user input usig cin.get to take spaces as input too.
	cin.get(str,100);
	cout<<"Reversed String: ";
	
//calling reverse function with str as parameter
	cout<<reverse(str);
	
	return 0;
}
