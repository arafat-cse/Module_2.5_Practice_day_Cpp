#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c;
    cin >>a>>b>>c;
    int ms=min(a,min(b,c));
    int mx=max(a,max(b,c));
    cout << ms <<" "<<mx<< endl;
    
    
    return 0;
}