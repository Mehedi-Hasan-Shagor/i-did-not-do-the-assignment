#include <iostream>

using namespace std;

int main()
{
    int n,c=0;
    cin>>n;
    for(int i=2;i<n;i++){
        if(n%i==0){
            c=1;
            break;
        }
    }
    if(c==1){
        for(int i=0;i<n;i++){
            cout<<"I DID NOT DO THE ASSIGNMENT."<<endl;
        }
    }
    else{
        cout<<"NO PUNISHMENT";
    }
    return 0;
}
