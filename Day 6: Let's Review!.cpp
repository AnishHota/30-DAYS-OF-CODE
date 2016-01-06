#include<iostream>
using namespace std;


int main(){
    int n;
    cin >> n;
    int i,j,k,space=(n-1);
    for(i=0;i<n;i++)
    {
        for(j=0;j<space;j++)
            cout<<" ";
        for(k=0;k<=i;k++)
            cout<<"#";
        cout<<"\n";
        space--;
    }
    return 0;
}
