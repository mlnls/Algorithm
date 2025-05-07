// 전화번호 목록
// 정확성: 66.7
// 효율성: 0.0
// 합계: 66.7 / 100.0

#include <string>
#include <vector>
#include <algorithm>

using namespace std;

bool comp(const string& a, const string& b) {
    return a.length() < b.length();
}

bool solution(vector<string> phone_book) {
    bool answer = true;
    sort(phone_book.begin(), phone_book.end(), comp);
    
    while(!phone_book.empty()){
        auto tmp = phone_book.front();
        phone_book.erase(phone_book.begin());
        
        for(string s : phone_book) {
            if(s.find(tmp) == string::npos) {
                continue;
            }
            answer = false;
        }
    }
    
    return answer;
}