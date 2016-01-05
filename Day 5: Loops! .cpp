#include<iostream>

using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int t,i;
    cin>>t;
    for(i=0;i<t;i++)
    {
        int sum,a,b,j,k,n;
        cin>>a>>b>>n;
        for(j=0;j<=(n-1);j++)
        {
            sum=a;
            for(k=0;k<=j;k++)
                sum+=pow(2,k)*b;
            cout<<sum<<" ";
        }
        cout<<endl;
    }
    return 0;
}
