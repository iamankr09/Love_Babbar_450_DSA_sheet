bool Palindrome(string &s , int start , int end){
	    if(start >= end) return true;
	    if(s[start] != s[end]) return false;
	    return Palindrome(s , start+1 , end-1);
	}
	int isPalindrome(string S)
	{
	    int n = S.length();
	    return Palindrome(S , 0 , n-1 );
	}
