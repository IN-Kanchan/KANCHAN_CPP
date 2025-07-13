#include <iostream>
using namespace std;
void solidReactangle(int n , int m){
    for(int i=0;i<n; i++){
        for(int j = 0 ; j<m; j++){
            cout<<" * ";
        }
        cout<<endl;
    }
}
int main(){
  int row;
  cin>>row;
  int col;
  cin>>col;
  solidReactangle( row , col);
}