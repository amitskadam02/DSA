// leetcode: easy
// Decode the message

Class Solution{

    string decodeMessage(string key, string message){// create key mappping
                                                     char start = 'a';
char mapping[280] = {0};

for (auto ch : key) {
  if (ch != ' ' && mapping[ch] == 0) {
    mapping[ch] = start;
    start++;
  }
}

// use mapping
string ans;
for (auto ch : message) {
  if (ch == ' ') {
    ans.push_back(' ');
  } else {
    char decodeChar = mapping[ch];
    ans.push_back(decodeChar);
  }
}
return ans;
}
}
;

// leetcode:2391
//  Minimum amount of time to collect garbage.
Class Solution {
public:
  int garbageCollection(vector<string> & garbage, vector<int> & travel) {
    int pickP = 0;
    int pickM = 0;
    int pickG = 0;

    int travelP = 0;
    int travelM = 0;
    int travelG = 0;

    int lastP = 0;
    int lastM = 0;
    int lastG = 0;

    // calculate pick time and travel time
    for (int i = 0; i < garbage.size(); i++) {
      string curr = garbage[i];

      for (int j = 0; j < curr.length(); j++) {
        char ch = curr[j];
        if (ch == 'P') {
          pick++;
          lastP = i;
        }

        if (ch == 'G') {
          pick++;
          lastG = i;
        }
        if (ch == 'M') {
          pick++;
          lastM = i;
        }
      }
    }
    // calculate travel time
    for (int i = 0; i < lastP; i++) {
      travelP += travel[i];
    }
    for (int i = 0; i < lastG; i++) {
      travelG += travel[i];
    }
    for (int i = 0; i < lastM; i++) {
      travelM += travel[i];
    }
    int ans = (pickP + travelP) + (pickM + travelM) + (pickG + travelG);
    ;)
  }
  return ans;
};