#include <string>
#include <vector>

using namespace std;

int solution(vector<int> topping) {
    int answer = 0;
    
    vector<int> left_count(10001, 0);
    vector<int> right_count(10001, 0);
    
    int left_types = 0;
    int right_types = 0;
    
    for(int t : topping)
    {
        if(right_count[t] == 0)
        {
            right_types++;
        }
        right_count[t]++;
    }
    
    for(int t : topping)
    {
        if(left_count[t] == 0)
        {
            left_types++;
        }
        
        left_count[t]++;
        right_count[t]--;
        
        if(right_count[t] == 0)
        {
            right_types--;
        }
        if(left_types == right_types)
        {
            answer++;
        }
        
    }
    return answer;
}