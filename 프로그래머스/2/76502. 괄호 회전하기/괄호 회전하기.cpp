#include <string>
#include <vector>
#include <stack>
#include <algorithm>

using namespace std;

bool IsBalanced(string s)
{
    stack<char> braceStack;
    
    for(char c : s)
    {
        if(c == '(' || c == '[' || c == '{')
        {
            braceStack.push(c);
        }
        else
        {
            if(braceStack.empty())
            {
                return false;
            }
            char top = braceStack.top();
            if((c == ')' && top == '(') ||
               (c == ']' && top == '[') ||
               (c == '}' && top == '{'))
            {
                braceStack.pop();
            }
            else
            {
                return false;
            }
        }
    }
    return braceStack.empty();
}

int solution(string s) {
    int answer = 0;
    
    for (int i = 0; i < s.size(); i++)
    {
        if(IsBalanced(s))
        {
            answer++;
        }
        
        rotate(s.begin(), s.begin() + 1, s.end());
    }
    
    return answer;
}