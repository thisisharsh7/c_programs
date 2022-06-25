#include <iostream>

using namespace std;

int main()
{

  int a[4];
  cin>>a[0];
  cin>> a[1];
  cin>> a[2];
  cin>> a[3];

  for(int i=0;i<4;i++){
                if(a[i]>=a[0]){
                    if(a[i]>=a[1]){
                        if(a[i]>=a[2]){
                            if(a[i]>=a[3]){
                                cout<<a[i];
                            }
                        }
                    }
                }

  }


    return 0;
}
