#include<iostream>
using namespace std;
int main(){
  cout<<" n = ";
  int n;
  cin>>n;
  int i=1;
  int j=1;
  
  for( i=1;i<2*n;i++){
    int us=i;
    int bs=(2*n-1);
    int ls=j;
    int rs=(2*n-1);
    
    for( j=1;j<2*n;j++){
      
     if((bs==ls && us==rs )||i==us ||j==ls){
        cout<<n;
     }
     }
    // for( j=1;j<2*n;j++){
     
    //  }
    // for(j=1;j<2*n;j++){
     
    //  }
      cout<<endl;
   }
    
  }
 
