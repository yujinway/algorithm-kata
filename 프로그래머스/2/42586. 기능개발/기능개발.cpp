#include <string>
#include <vector>
#include <queue>

using namespace std;

vector<int> solution(vector<int> progresses, vector<int> speeds) {
    vector<int> answer;
    queue<int> q;
    
    for(int i = 0; i < progresses.size(); i++)
    {
        int remaningDays = (100 - progresses[i]);
        int daysToDeploy = remaningDays / speeds[i];
        
        if(remaningDays % speeds[i] != 0)
        {
            daysToDeploy++;
        }
        
        q.push(daysToDeploy);
    }
    
    
    while(!q.empty())
    {
        int base = q.front();
        int count = 0;
        
        while(!q.empty() && q.front() <= base)
        {
            q.pop();
            count++;
        }
        
        answer.push_back(count);
    }
    
    return answer;
}