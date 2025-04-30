// 완주하지 못한 선수
// 정확성: 58.3
// 효율성: 41.7
// 합계: 100.0 / 100.0

#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(vector<string> participant, vector<string> completion) {    
    sort(participant.begin(), participant.end());
    sort(completion.begin(), completion.end());
    
    string answer = "";
    
    for(int i=0; i<completion.size(); i++){
        if(participant.at(i) != completion.at(i)) {
            answer = participant.at(i);
            return answer;
        }
    }
    
    answer = participant.back();
    return answer;
}