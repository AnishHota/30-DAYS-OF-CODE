#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    double M,tot;
    int T,X;
    cin>>M>>T>>X;
    tot=M+((T*M)/100)+((M*X)/100);
    tot=round(tot);
    cout<<"The final price of the meal is $"<<tot<<".";
    return 0;
}
