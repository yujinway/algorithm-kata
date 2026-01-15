#include <string>
#include <vector>
#include <set>

using namespace std;

vector<int> solution(int k, vector<int> score) {
    vector<int> answer;
    multiset<int> multiSet;

    for (int i = 0; i < score.size(); i++)
    {
        multiSet.insert(score[i]);
        if(i < k)
        {
            auto it = prev(multiSet.end(), i + 1);
            answer.push_back(*it);
        }
        else
        {
            auto it = prev(multiSet.end(), k);
            answer.push_back(*it);
        }
    }
    
    return answer;
}