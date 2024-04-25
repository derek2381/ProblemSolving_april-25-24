// problem link
// https://leetcode.com/problems/valid-parentheses/submissions/1241746756/

class Solution {
public:
    bool isValid(string s) {
        stack<char> stk;
        int flag = 1;

        for(char i : s){
            if((i == '(' || i == '[' || i == '{')){
                stk.push(i);
            }else if(stk.size() > 0 && i == '}'){
                if(stk.top() == '{'){
                    stk.pop();
                }else{
                    flag = 0;
                }
            }else if(stk.size() > 0 && i == ']'){
                if(stk.top() == '['){
                    stk.pop();
                }else{
                    flag = 0;
                }
            }else if(stk.size() > 0 && i == ')'){
                if(stk.top() == '('){
                    stk.pop();
                }else{
                    flag = 0;
                }
            }else{
                flag = 0;
            }
        }

        if(flag == 1 && stk.size() == 0){
            return true;
        }else{
            return false;
        }
    }
};
