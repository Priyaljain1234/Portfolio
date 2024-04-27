#include <iostream>
using namespace std;

int c=0;
void selection_sort(int n, int arr[]){
    int temp=0;
    c+=2;
    for(int i=0; i<n; i++){
        c+=2;
        for(int j=i;j<n;j++){
            if(arr[i]>arr[j]){
               temp=arr[i];
               arr[i]=arr[j];
               arr[j]=temp;
            c+=4;
            }
            c+=3;
        }
        
    }
    cout<<"sorted array"<<endl;
    c+=2;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
        c+=3;
    }
    c++;
    cout<<"\nno. of operations performed : ";
    cout<<c;
}
int main(){
    int n, arr[1000];
    cout<<"enter the size of array"<<endl;
    cin>>n;
    
    c++;
    cout<<"enter the elements in the array"<<endl;
    c+=2;
    for(int i=0; i<n; i++){
        cin>>arr[i];
        c+=3;
    }
    
    selection_sort(n,arr);
    c++;
}