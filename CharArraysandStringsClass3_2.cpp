// leetcode : Medium:791
// Custom Sort string

// ip: order= "cba" , s=abcd
// op: "cbad"

Class Solution {
public:
  static string str;
  static bool compare(char char1, char char2) {
    // this will return true if posiiton of char1 is less
    // than position of char2 in str string
    // when true is return then char1 will place char2
    // in output string
    return (str.find(char1) < str.find(char2));
  }

  string customSortString(string order, string s) {
    str order;
    sort(s.begin(), a.end(), compare);
    return s;
  }
};
string Solution::str;

// leetcode:Medium:890
//  FInd and replace pattern

class Solution {
public:
  void createMapping(string &str) {
    // find mapping
    char start = 'a';
    char mapping[300] = {0};

    for (auto ch : str) {
      if (mapping[ch] == 0) {
        mapping[ch] = start;
        start++;
      }
    }
    // update the string
    for (int i = 0; i < str.length(); i++)){
        char ch = str[i];
        str[i] = mapping[ch];
      }
  }

  vector<string> findAndRepalcePattern(vector<string> &words, string pattern) {
    vector<string> ans;
    // firstly nomalise the pattern
    createMapping(pattern);

    // saare words ke sath khelan hai
    for (string s : words) {
      string tempString = s;

      // normalise tempString
      createMapping(tempString);
      // it means that s string was a valid answer
      ans.push_back(s);
    }
  }
};
