// #include<iostream>
#include <bits/stdc++.h>
using namespace std;



// int main(){
//      string s = "madam";
//      int z = size(s);
//      int i = 0;

//      while(i <= z){
//           if (s[i]==s[z])
//           {
//                i++;
//                z--;
               
//           }else{
//                cout<<false;
//                break;
//           }
//           cout<<"True";
//      }
//      return 0;
// }

// It returnn infinite zeroes 
// It is pending solve it afterwards 





// Prepinsta Solution 




bool isPalRec (char str[], int s, int e)
{
    if (s == e)
    return true;
    
    if (str[s] != str[e])
    return false;
    if (s < e + 1)
    return isPalRec (str, s + 1, e - 1);
    return true;
}

bool isPalindrome (char str[])
{
    int n = strlen (str);
    if (n == 0)
    return true;
    return isPalRec (str, 0, n - 1);
}

int main ()
{
    char str[] = "refer";
    if (isPalindrome (str))
    
    cout << "true";
    else
    cout << "false";
    return 0;
}