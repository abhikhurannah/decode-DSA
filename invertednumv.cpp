
//     1
//    2 2
//   3   3
//  4     4

#include<iostream>
using namespace std;
int main(){
    cout<<"n= ";
    int n;
    cin>>n;
    
    for( int i=1;i<=n;i++){

        for(int j=1;j<=2*n-1;j++){
            if((j-i==n+1) ||(i+j==n)){
                cout<<i;
            }
           
            else cout<<" ";
        }
      
        cout<<"\n";
    }
}