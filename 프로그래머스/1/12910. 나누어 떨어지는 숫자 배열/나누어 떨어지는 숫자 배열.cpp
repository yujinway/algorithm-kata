#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> arr, int divisor) {
    vector<int> answer;
    
    for(int num : arr)
    {
        if(num % divisor == 0)
        {
            answer.push_back(num);
        }
    }
    
    sort(answer.begin(), answer.end());
    
    return answer.size() == 0 ? vector<int>{-1} : answer;
}