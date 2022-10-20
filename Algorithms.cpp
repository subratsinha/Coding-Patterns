#include <iostream>
#include<algorithm>
#include<vector>
#include<numeric>
using namespace std;
bool comp(int el1,int el2){
if(el1 <= el2)
return true;
else
return false;
}
int main() {
  //sorting

  // array,vector
  int n;
  cin>>n;
  int arr[n];
  for(int i=0;i<n;i++)cin>>arr[i];
  
  sort(arr,arr+n);

  //vector
  // vector<int>v(5,0);
  // for(int i=0;i<n;i++){
  //   cin>>v[i];
  // }
  // sort(v.begin(),v.end());

  //vec ->{1,6,2,7,4}
  //sort it so only indexes from 1 to 3
  //final vec ->{1,2,6,7,4}
  // vector<int>v1={1,6,2,7,4};
  // for(auto it:v1){
  //   cout<<it<<endl;
  //   }
  //   sort(v1.begin()+1,v1.begin()+4);
  //   cout<<"sorted";
  //   cout<<endl;
  //   for(auto itr:v1){
  //     cout<<itr<<endl;
  //   }

//if i wanna reverse the array or a vector 
//reverse(StartItertor,endIterator)    ->[)

// reverse(arr,arr+n);
// reverse(arr+1,arr+4);
// reverse(v1.begin(),v1.end());

//if i want to find the maximum element in a given range

// int maxi=INT_MIN;
// for(int k=i;k<=j;k++){
//   if(a[k]>maxi){
//     maxi=a[k];
//   }
// }

//algorithm
//to find the minimum element and maximum element in a given range 
// int el=*max_element(arr,arr+n);
// int el_1=*min_element(arr,arr+n);

//similarly it is done in vectors

// int el_v=*max_element(vec.begin(),vec.end());
// int el_v=*min_element(vec.begin(),vec.end());
// int el_vec=*min_element(vec.begin()+1,vec.begin()+4);

//if i give you a range and i want to find the sum in that range
//determine the sum in that range 
//basic implementation
// int sum=0
// ;
// for(k=i;k<=j;k++){
//   sum+=a[k];

// }
// int n;
// cin>>n;
// int arr[n];
// for(int i=0;i<n;i++)cin>>arr[i];
//accumulate(StartItertor,endIterator,initialsum)
// int sum=accumulate(arr, arr+n,0);
//in case of the vectors
// int sum_1=accumulate(vec.begin(),vec.end(),0);

//arr -> [1,6,7,1,2,1,3]
//tell me how many 1 are there in the array
//  int count=0;
//  int k=1;
//  for(int i=0;i<n;i++){
//    if(arr[i]==k){
//      count++;
//    }
//  }
//  cout<<count<<endl;
//use count method instead of upper implementation:-
//k(key)-->1
//count(firstIterator,lastIterator,k)
// int cnt=count(arr,arr+n,1);


//arr ->{1,2,5,1,2,4,4}
//i want to find the first occurance of 2
//it is in the index 1

// int x=3;
// int index=-1;
// for(int i=0;i<n;i++){
//   if(arr[i]==x){
//     index=i;
//     cout<<index<<x;
//     break;
//   }
// }

// auto it=find(arr,arr+n,2); //return an iterator 
//pointing to the first instance of it, or else it 
//returns pointing to the end() if it is not there
//iterator-begin() --> gives the index of the iterator pointing to 
//arr-->first iterator
//arr+n-->last iterator 
//*(itr) -->makes the element visible 

// int index=it-arr;
// auto it=find(v.begin(),v.end(),2);
// int ind=it-vec.begin();

//if if if 
//arr[] ->{1,5,6,2,3,5,6}
//x=4;
// auto it =find(vec.begin(),vec.end(),4)
//if the element is not present int vector so then it will point to 
//vec.end()
// if(it==vec.end())
// {
//   cout<<"element not found"<<endl;
// }
// else
// {
//   cout<<"element is found at the position :->"<<it-v.begin()<<endl;
// }


//binary search
//this stl only works on SORTED arrays
//arr[]->{1,5,7,8,9}
//x=9
//true ->9 exists in my array
// x=8
//false -> 8 does not exist on the array
//works in log complexity
// bool res=binary_search(arr,arr+n,8);
// bool res=binary_search(vec.begin(),vec.end() ,8);

//lower_bound function
//returns an iterator pointing to the first element just which is not less than x
//arr[] -->{1,5,7,7,8,10,10,10,11,11,12} 
// the lower and upper bound of a binary search are the lowest and highest position where the value could be inserted without breaking the ordering.

// auto it = lower_bound(arr,arr+n,x);
// ind=it-arr;
// auto it =lower_bound(vec.begin(),vec.end(),x);
// int ind=it-vec.begin();

//upper bound function
//returns an iterator which element which is just greater than x
//arr[] -->{1,5,7,7,8,10,10,10,11,11,12}
//x=7 -->7
//x=12->end()iterator
//x=15 ->end() iterator 


//find me the first index where the element x lies 
//find function can be used that takes O(N) times
// the array is sorted
//1st way ---> 2(logn) approach
// if(binary_search(arr,arr+n,x)==true){
    // int index = lower_bound(arr,arr+n,x)-arr;
// }

//find me the last occurance of x in an array
// arr[] ={1,5,7,7,8,10,10,11,11,12}
//last occurance of x=10 and ans=7th index
//last occurance of x=6 and answer is doesnt exist
//last occurance of x=0 and answer is -1,which doesnt exist
// if(binary_search(arr,arr+n,x)){
    // int index=upper_bound(arr,arr+n,x)-arr;
    // int index_x=index-1;
    // if(arr[index_x]==x && index_x>=0){
    //   cout<<"found at --> "<<index_x<<endl;
    //return index_x;
    // }
    // else{
    //   cout<<"element not found"<<endl;
    //return -1;
    // }
// }
  

  //tell me the number of times the x appears in arr
  //arr[] -->{1,5,7,7,8,10,10,10,11,11,12}
  //x=10,ans=3;
  //x=7,ans=2;
  //occurances =upper_bound-lower_bound
  // int occuraces=(upper_bound(arr,arr+n,x)-arr)-(lower_bound(arr,arr+n,x));
   
   //NEXT permutation
   //sorted lexicographically
   //string s="abc"
   //all permutations are as follows

   //abc
   //acb
   //bac
   //bca
   //cab
   //cba

   //s="bca";
   //bool res=next_permutation(s.begin(),s.end());


   //if i give you any random string s="bca"
   // i want you to print all the permutations
   //O(N) complexity
  //  string s="bca";
  //  sort(s.begin(),s.end());
  //  do{
  //    cout<<s<<endl;
  //    }while(next_permutation(s.begin(), s.end()));

//next permutation in arrays
/*
int arr[]={1,6,5};
int n=3;
sort(arr,arr+n);
do{
  for(int i=0;i<n;i++)  cout<<arr[i]<<" ";
  cout<<endl;
}while(next_permutation(arr,arr+n));
*/
//do not follow in interviews ... do it in competitive programming


// prev_permutation(v.begin(),v.end())
//bool res=prev_permutation(s.begin(),s.end())




//COMPERATOR 
// sort(arr,arr+n); //sorts everything in ascending order


// sort(arr,arr+n,comp);
//comperator
// bool comp(int el1,int el2){
//   if(el1<el2){
//     return true;
//   }
//   else{
//     return false;
//   }
// }



//arr
//pair<int,int>arr[]={{1,4},{5,2},{6,9}};
//after sorting pair<int,int>arr[]={{1,4},{5,9},{5,2}};
// sort(arr,arr+3,comp);
//bool comp(pair<int>el1,pair<int>el2){
  // if(el1.first()<el2.first()){
  //   return true;
  // }
  //  if(el1.first()==el2.second()){
      //  if   (el1.second()>e2.second()){
        // return true;
      // }
  // }
// }
//i want you to sort this in such a way 
//that the element who have the first element in pair smaller
//appears first, and if first is equal then sort according
//to keep and keep the larger element



//if you wanted to sort in descending order
//sort(v.begin(),v.end(),greater<int>)
//where greater<int> is a inbuilt comperator 
//which only works if you wanna do this in descending
//comperator will only be used in linear 
// vector<vector<int>>vec(n,vector<int>(n,0));

}
