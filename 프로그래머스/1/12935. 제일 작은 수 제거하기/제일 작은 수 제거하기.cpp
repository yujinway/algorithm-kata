#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> arr) {
    vector<int> answer;
    auto it = min_element(arr.begin(), arr.end());
    
    for (int num : arr)
    {
        if (*it != num)
        {
            answer.push_back(num);
        }
    }
    
    
    return answer.size() == 0 ? vector<int>{-1} : answer;
}