#include<iostream>
using namespace std;
int main() {
    int ArrayofInt[100];
    int size;
    int temp;

    cout<<"Enter the size of array: ";
    cin>>size;

    for(int i=0;i<size;i++){
        cout<<"Enter at array index " << i <<" : ";
        cin>>ArrayofInt[i];
    }

    cout << "Unsorted array: ";
    for(int i=0;i<size;i++){
        cout<<ArrayofInt[i]<<" ";
    }

    for(int i=0;i<size-1;i++){
        for(int j=i+1;j<size;j++){
            if(ArrayofInt[i]>ArrayofInt[j]){
                temp = ArrayofInt[j];
                ArrayofInt[j] = ArrayofInt[i];
                ArrayofInt[i] = temp;
            }
        }
    }

    cout << "\nSorted array: " << endl;
    for (int i=0;i<size;i++) {
        cout << ArrayofInt[i] << " ";
    }
    return 0;
}