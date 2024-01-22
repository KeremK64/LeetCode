class Solution {
public:
    bool halvesAreAlike(string s) {
        int length = s.size();
        string a = s.substr(0,length/2);
        string b = s.substr(length/2, length/2);
        int vowels1 = 0;
        for(int i = 0; a[i]; i++)  
        {
            if(a[i]=='a'|| a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u'
            ||a[i]=='A'||a[i]=='E'||a[i]=='I'||a[i]=='O' ||a[i]=='U')
            {
		        vowels1++;
            }
        }

        int vowels2 = 0;
        for(int i = 0; b[i]; i++)  
        {
            if(b[i]=='a'|| b[i]=='e'||b[i]=='i'||b[i]=='o'||b[i]=='u'
            ||b[i]=='A'||b[i]=='E'||b[i]=='I'||b[i]=='O' ||b[i]=='U')
            {
		        vowels2++;
            }
        }

        if(vowels1 == vowels2){
            return true;
        }else{
            return false;
        }
    }
};
