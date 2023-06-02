#include <map>
#include <sstream>
#include <string>
#include <vector>

using namespace std;

// https://school.programmers.co.kr/learn/courses/30/lessons/120838?language=cpp
string solution(string letter) {
    string answer = "";
    map<string, string> mp{{".-", "a"}, {"-...", "b"}, {"-.-.", "c"}, {"-..", "d"}, {".", "e"}, {"..-.", "f"}, {"--.", "g"}, {"....", "h"}, {"..", "i"}, {".---", "j"}, {"-.-", "k"}, {".-..", "l"}, {"--", "m"}, {"-.", "n"}, {"---", "o"}, {".--.", "p"}, {"--.-", "q"}, {".-.", "r"}, {"...", "s"}, {"-", "t"}, {"..-", "u"}, {"...-", "v"}, {".--", "w"}, {"-..-", "x"}, {"-.--", "y"}, {"--..", "z"}};
    stringstream sstream;
    sstream.str(letter);

    string cut_letter;
    while (sstream >> cut_letter) {
        answer += mp.find(cut_letter)->second;
    }

    return answer;
}