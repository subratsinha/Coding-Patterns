// Hackerrank Problem: https://www.hackerrank.com/challenges/hotel-prices/problem

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n;
    cin>>n;
    string hotel;
    int bedrooms,bathrooms;
    int all=0;
    for(int i=0;i<n;i++){
        cin>>hotel>>bedrooms>>bathrooms;
        if(hotel=="standard"){
            all+=(bedrooms*50)+(bathrooms*100);
        }
        else if(hotel=="apartment"){
            all+=(bedrooms*50)+(bathrooms*100)+100;
        }
}
cout<<all<<endl;
    return 0;
}