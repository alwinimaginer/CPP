#include<iostream>
#include<string>

using namespace std;


string longestPalindrome(string s) {
        
        int len = 0;
        int maxlen = 0;
        int right = 0;
        int left = 0;
        int index = 0;

        for(int i = 0; i < s.length(); i ++){

            // odd length
            left = i;
            right = i;

            while(left >= 0 && right <= s.length() && s[left] == s[right]){
                len = right - left + 1;
                if(len > maxlen){
                    maxlen = len;
                    index = left;
                }
                left --;
                right ++;
            }

            // even length
            left = i;
            right = i + 1;
            
            while(left >= 0 && right <= s.length() && s[left] == s[right]){
                len = right - left + 1;
                if (len > maxlen){
                    maxlen = len;
                    index = left;
                }
                left --;
                right ++;
            }


        }
        return s.substr(index,maxlen);
    }

    int main(){
        string s;
        cin >> s;
         string result = longestPalindrome(s);

         cout << result;

         return 0;
    }