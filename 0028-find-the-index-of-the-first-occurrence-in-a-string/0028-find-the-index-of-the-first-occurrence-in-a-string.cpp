class Solution {
public:
    int strStr(string haystack, string needle) {
        int n=haystack.find(needle);
        if(n>haystack.size())return -1;
        return n;
    }
};