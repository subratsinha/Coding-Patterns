//Determination of focal length

#include<iostream>

using namespace std;

class Solution{
	public:
	int findFocalLength(float R, string type){
	    float f;
	    if(type=="convex"){
	        f=-(R/2);
	    }else{
	        f=R/2;
	    }
	    return f;
	}
};

int main(){
	int tc;
	cin >> tc;
	while(tc--){
		float n;
		string type;
		cin >> type >> n;
		Solution ob;
		int ans = ob.findFocalLength(n, type);
		cout << ans <<"\n";
	}  
	return 0;
}
