#include <iostream>
using namespace std;

int main(){

    int N, L;
    cin>>N>>L;

    for(int i=L;i<=100;i++){
      int temp = N-i*(i+1)/2;

      if(temp%i==0&&temp/i+1>=0){//해당 문제에서 temp/i+1<0인 경우가 test case에 있어서 이를 방지
          for(int j=temp/i+1;j<=temp/i+i;j++){//확정된 L은 i 이다.
            cout<<j<<" ";
          }
    
          
          return 0;
      }

    }

    cout<<"-1"<<endl;

    return 0;
}

