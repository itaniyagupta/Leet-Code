class Solution {
public:
    int strStr(string haystack, string needle) {
     
        int len=needle.length();
        if(len==0)
            return 0; 
        
         for(int i=0;i<haystack.length();i++)
         {
           if(haystack[i]==needle[0])
           {               
                string ans=haystack.substr(i,len);
                if(ans==needle)
                    return i;
           }
         }
        return -1;
        
    }
};