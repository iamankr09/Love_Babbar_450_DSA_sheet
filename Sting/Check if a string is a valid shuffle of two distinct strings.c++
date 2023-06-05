#include <bits/stdc++.h>
using namespace std;
bool isValidShuffle(string &s1 , string &s2 , string & shuffleStr){
       int len1 = s1.length() , len2 = s2.length() , len3 = shuffleStr.length();
       if(len1 + len2 != len3) return false;
       sort(s1.begin() , s1.end());
       sort(s2.begin() , s2.end());
       sort(shuffleStr.begin() , shuffleStr.end());
       int i = 0, j = 0 , k = 0;
       while(k < len3){
           if(i < len1 && s1[i] == shuffleStr[k]){
                  i++;
           }
           else if(j < len2 && s2[j] == shuffleStr[k]){
               j++;
           }
           else{
               break;
           }
           k++;
       }
       
       if(k == len3) return true;
       return false;
       
       
}
int main()
{
    string s1;
     cin>>s1;
    string s2;
     cin>>s2;
    string res;
      cin>>res;
      
     bool ans = isValidShuffle(s1 , s2 , res);
     if(ans){
         cout<<"Yes"<<endl;
     }
     else
       cout<<"No"<<endl;
      
  return 0;
}
