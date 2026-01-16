#include <string>
#include <vector>
#include <map>

using namespace std;

string solution(int a, int b) {
    string answer = "";
    int day[12] = {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    map<int, string> week = {
        {1, "FRI"},
        {2, "SAT"},
        {3, "SUN"},
        {4, "MON"},
        {5, "TUE"},
        {6, "WED"},
        {0, "THU"},
    };
    
    int daySum = 0;
    for(int i = 0; i < a - 1; i++)
    {
        daySum += day[i];
    }
    answer = week[(daySum + b) % 7];
    
    return answer;
}