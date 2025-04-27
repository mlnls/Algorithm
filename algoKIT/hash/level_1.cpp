// 정확성: 58.3
// 효율성: 0.0
// 합계: 58.3 / 100.0

#include <string>
#include <vector>

using namespace std;

string solution(vector<string> participant, vector<string> completion) {    
    for(int j=0; j<completion.size(); j++){
        for(int i=0; i<participant.size(); i++) {
            if(completion.at(j) == participant.at(i)) {
                participant.erase(participant.begin()+i); 
                break;
            }
        } 
    }
    
    string answer = participant.front();
    return answer;
}