#include<bits/stdc++.h>
using namespace std;
int main()
{
    char n;
    cin >> n;
    (n >= 65 && n <= 122)? (n >= 'A'&& n <= 'Z')?
        cout <<"ALPHA"<<endl<<"IS CAPITAL"
        :cout << "ALPHA" <<endl<< "IS SMALL"
    :cout <<"IS DIGIT"<<endl;
    
//   if (n >= 65 && n <= 122)
//   {
    if (n>= 'A'&& n<= 'Z')
//     {
//         cout <<"ALPHA"<<endl<<"IS CAPITAL";
//     }else
//     {
//         cout << "ALPHA" <<endl<< "IS SMALL";
//     }
    
//   }
//   else
//   {
//     cout <<"IS DIGIT";
//   }
  
    
    
    return 0;
}