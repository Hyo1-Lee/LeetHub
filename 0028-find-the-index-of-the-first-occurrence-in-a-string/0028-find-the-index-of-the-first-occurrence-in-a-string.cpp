class Solution {
public:
	int strStr(string haystack, string needle) {
		for (int i = 0; i < haystack.length(); i++) {
			if(haystack[i] == needle[0]){
				if (needle.length() == 1) {
					return i;
				}
				for (int j = 1; j < needle.length(); j++) {
					if (haystack[i + j] != needle[j]) {
						break;
					}
					else if (j + 1 == needle.length()) {
						return i;
					}
				}
			}
		}
		return -1;
	}
};