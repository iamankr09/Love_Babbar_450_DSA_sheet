// Brute Force --> using two loop 
// using hashmap
// using sorting



//  Using Bit Manipulation ---> TC - O(N) & SC-O(1)
#include <bits/stdc++.h>
using namespace std;
vector<pair<char,int>> FindAllDuplicates(string &s){
      int bitVector = 0; // bit vector to check the current character is present or not
      int countChar[26] = {0}; // to store the count of current character
      
      for(int i = 0 ; i < s.length() ; i++){
           int bitIndex = s[i] - 'a';   
          // check is this bitIndex is set or not in bitVector
          if(bitVector &(1<<bitIndex)){
              countChar[bitIndex]++;   // if set increase the char count
          }
          else{
               bitVector = bitVector|(1<<bitIndex); // if not set , than set the count
          }
      }
      
      vector<pair<char,int>> ans;
      for(int i = 0 ; i < 26 ; i++){
          if(countChar[i] > 0){
              ans.push_back({i+'a' , countChar[i] +1});
          }
      }
      
      return ans;
}
int main()
{
    string s;
    cin>>s;
    vector<pair<char,int>> ans = FindAllDuplicates(s);
    for(auto &it : ans){
        cout<<it.first<<"->"<<it.second<<endl;
    }

  return 0;
}
