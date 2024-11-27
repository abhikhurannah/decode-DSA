#include<iostream>
using namespace std;
            //      *
            //     ***
            //    * * *
            //   *******
            //    * * *
            //     ***
            //      * 
                               //work for even no(upper) +odd number(lower)

int main(){
    int m,n;
    cout<<"enter no of rows :";
    cin>>m;
    int st=1;
    int sp=m-1;
    int gt=1;
    int gp=m-1;
    for(int i=1;i<=m;i++){
        if(i<m/2){
                    for(int z=1;z<=sp;z++){
                    cout<<" ";
                    }
                    sp--;
                    for(int j=1;j<=st;j++){
                    cout<<"*";
                     }
                    st+=2;}
        else
                {
                     for(int z=1;z<=sp;z++){
                     cout<<" ";
                     }
                    sp++;
                    for(int j=1;j<=gp;j++){
                     cout<<"*";
                     }
                     gp-=2;
               }
         
       
        
         
         
     cout<<endl;
         }

    // int md=m/2+1;
    // for(int i=1;i<=m;i++){
    //      for(int j=1;j<=sp;j++){
    //         cout<<" ";
    //     }
    //     for(int z=1;z<=st;z++){
    //         cout<<"*";
    //     }
    //     if(i<md) {
    //         sp--;
    //         st+=2;
    //     }
    //     else{
    //         sp++;
    //         st-=2;
    //     }
    //     cout<<endl;
   // }
    return 0 ;
}