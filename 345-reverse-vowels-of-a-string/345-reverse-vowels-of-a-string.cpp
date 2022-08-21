class Solution {
public:
	bool isVowel(char s){
		if( s=='a' || s=='e'|| s=='i'|| s=='o'|| s=='u' || s=='A' || s=='E'|| s=='I'|| s=='O'|| s=='U' ){
			return true;
		}
		else
			return false;
	}

string reverseVowels(string s) {
    int l = s.size();
    int i=0 ,j =l-1;
    
    while( i<j ){
        
        if( !isVowel(s[i]) ){
            i++;
        }
        else if( !isVowel(s[j]) ){
            j--;
        }
        else{
            swap( s[i] , s[j] );
            i++;
            j--;
        }           
        
    }
    return s;
}
};