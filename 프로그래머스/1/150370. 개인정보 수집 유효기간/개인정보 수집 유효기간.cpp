#include <string>
#include <vector>
#include <sstream>
#include <map>

using namespace std;

vector<int> solution(string today, vector<string> terms, vector<string> privacies) {
    vector<int> answer;
    
    int todayArr[3];
    sscanf(today.c_str(), "%d.%d.%d", &todayArr[0], &todayArr[1], &todayArr[2]);
    
    map<string, int> termsMap;
    
    for(const string& term : terms)
    {
        stringstream ss(term);
        string termType;
        int expDate;
        ss >> termType >> expDate;
        
        termsMap[termType] = expDate;
    }
    
    int index = 0;
    for(const string& privacy : privacies)
    {
        stringstream ss(privacy);
        string date, term;
        ss >> date >> term;
        
        int year, month, day;
        sscanf(date.c_str(), "%d.%d.%d", &year, &month, &day);
        
        
       if((todayArr[0]*12*28 + todayArr[1]*28 + todayArr[2]) >= (year*12*28 + month*28 + day) + termsMap[term] * 28)
       {
           answer.push_back(index + 1);
       }
        index++;
    }
    
    return answer;
    
}