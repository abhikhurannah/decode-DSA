
//     *
//    * *
//   *   *
//  *     *
// *       *
//  *     *
//   *   *
//    * *
//     *
#include<iostream>
using namespace std;
int main(){
    cout<<"n= ";
    int n;
    cin>>n;
    
    for( int i=1;i<=2*n-1;i++){

        for(int j=1;j<=2*n-1;j++){
            if((j==i)|| i+j==2*n){
                cout<<"*";
            }
            else cout<<" ";
        }
      
        cout<<"\n";
    }
}