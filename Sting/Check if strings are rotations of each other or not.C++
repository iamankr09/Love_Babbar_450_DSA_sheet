bool areRotations(string s1,string s2)
 {
           int len1 = s1.length();
           int len2 = s2.length();
           if(len1 != len2) return false;
           // concatenate the first string with itself
           s1 += s1;
           if(s1.find(s2) != -1){
               return true;
           }
          return false;
 }
