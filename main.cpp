//Menu driven program to perform various sorting algorithms on an array of integers.
#include<iostream>
using namespace std;

void input(int arr[], int n){
    cout<<"Enter "<<n<<" elements of the array: ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
}
void print(int *A , int n){
    for (int i = 0 ; i<n;i++){
        cout<<A[i]<<" ";
    }
}
void insertionsort(int* A, int n)
{
 // For each pass we need a loop 
 for(int i=1;i<=n-1;i++){
    int key = A[i];
    int j = i-1;
    //For comparing key with previous element
    while(j>=0 && A[j]> key){
        A[j+1] = A[j];
        j--;
    }
    A[j+1] = key;
 }
}
int main (){
    int A[] = {12, 11, 13, 5, 6 , 7};
    int n = 6;
    print(A , n);
    insertionsort(A, n);
    cout << "\n";
    print(A , n);
}