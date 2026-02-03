#include <string>
#include <vector>
using namespace std;

int solution(vector<int> ingredients) {
    int answer = 0;
    vector<int> stack;
    
    for (int ingredient : ingredients)
    {
        stack.push_back(ingredient);
        
        int size = stack.size();
        if (size >= 4)
        {
            if (stack[size-4] == 1 && stack[size-3] == 2 && stack[size-2] == 3 && stack[size-1] == 1)
            {
                stack.pop_back();
                stack.pop_back();
                stack.pop_back();
                stack.pop_back();
                answer++;
            }
        }
    }
    
    return answer;
}