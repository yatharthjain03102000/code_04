//Input:
//N = 6
//arr[] = 7 10 4 3 20 15
//K = 3
//Output : 7
//Explanation :
//3rd smallest element in the given
//array is 7

#include <iostream>
using namespace std;
int main(){
    int n,arr[100],min=0;
    cout<<"N: ";
    cin>>n;
    
    cout<<"ELements in array: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Smallest elements are:";
    for(int i=0;i<n;i++){
        if(arr[i]<n){
             cout<<arr[i]<<","<<endl;
                }
    

}
}
