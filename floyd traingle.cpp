#include<iostream>

using namespace std;

int main()
{
   int i,j,p,q, rows = 5;
	
	//1st loop control the number of rows to be printed
   for(i=1;i<=rows;i++)
	{	
		//check for row if even
		//set p=1 and q=0
		//otherwise, p=0 and q=1
		if(i%2==0)
		{ 
			p=1;
			q=0;
		}
		else
		{ 
			p=0;
			q=1;
		}
		// loop to print the output
	    for(j=1;j<=i;j++)
	    {
	    	//if j is even print p
			if(j%2==0)
				cout<<p;
			//otherwise q
			else
				cout<<q;
		}
		cout<<endl;
	}
}

