#include <iostream>
using namespace std;
void hollowSquare2(int n){
    for(int i=1; i<=n; i++ ){
       for(int j =1; j<=n; j++){
            if(i==1 || i==n){
                cout<<" * ";
            }
            else{
                //one *
                cout<<" * ";
                //n-2 spaces
                
                for(int j=1; j<=n-2; j++){
                    cout<<"   ";
                }
            
                //one *
                cout<<" * ";
            cout<<endl;
         
            }
        }
     cout<<endl;
    }
}
void hollowSquare(int n){
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if( i==0  || i==n-1 || j==0|| j==n-1){
                cout<<" * ";
            }
            else{
                cout<<"   ";
            }
        }
        cout<<endl;
    }
}
int main (){
    int n;
    cin>>n;
    hollowSquare(n);
    hollowSquare2(n);
}