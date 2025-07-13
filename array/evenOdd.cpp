#include <iostream>
using namespace std;
void solve(int arr[], int n){
    for(int i=0; i<n; i++){
        if((arr[i]&1)==0){
            cout<<"even"<<endl;
        }
        else{
            cout<<"odd"<<endl;
        }
    }
}
int main(){
    int arr[]={12,13,82,62,55,36,96,54,51,53,59,57,58,};
    solve(arr , 13);
    return 0;
}