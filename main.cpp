#include <iostream>
using namespace std;

int main(){

    int N, L;
    cin>>N>>L;

    for(int i=L;i<=100;i++){
      int temp = N-i*(i+1)/2;

      if(temp%i==0&&temp/i+1>=0){
          for(int j=temp/i+1;j<=temp/i+i;j++){
            cout<<j<<" ";
          }
    
          
          return 0;
      }

    }

    cout<<"-1"<<endl;

    return 0;
}

