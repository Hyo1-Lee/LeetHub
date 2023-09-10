class Solution {
public:
	bool isValid(string s) {
		map<char, char> myMap;
		stack<int> stack;

		myMap['}'] = '{';
		myMap[']'] = '[';
		myMap[')'] = '(';

		for (auto& bracket : s) {
			if (bracket == '{' or bracket == '[' or bracket == '(') {
				stack.push(bracket);
			}
			else {
				if (!stack.empty() and myMap[bracket] == stack.top()) {
					stack.pop();
				}
				else {
					return false;
				}
			}
		}
		if (!stack.empty()) {
			return false;
		}
		else {
			return true;
		}
	}
};