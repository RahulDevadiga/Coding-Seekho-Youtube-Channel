#include <iostream>
using namespace std;

int main() {

    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    int j=0, count_non_zero=0;
    while(j<n){
        if(arr[j] != 0){
            arr[count_non_zero]=arr[j];
            count_non_zero++;
        }
            j++;
    }
    while(count_non_zero<n){
        arr[count_non_zero]=0;
        count_non_zero++;
    }
    
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
