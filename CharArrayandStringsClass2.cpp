// Remove all adjacents duplicate in strings
string removeDuplicate(string s) {
  string ans = "";
  int index = 0;

  while (index < s.length()) {
    // ans rightmost character ia same as current character of s
    if ((ans.length() > 0 && ans[ans.length() - 1]) == s[index]) {
      // remove character from ans
      ans.pop_back();
    } else {
      // insert into ans
      ans.push_back(s[index]);
    }
    index++;
  }
}

// Remove all occurance of substring
string removeaOccurance(string s, string part) {

  while (s.find(part) != string::npos) {
    // if inside loop it means that part exist in s string
    s.erase(s.find(part), part.length());
  }
  return s;
}

// Valid palindrom 2
// return true  if the s cann be palindrome after deleting at most 1 character
bool checkPalindrome(jstring s) {
  int i = 0;
  int j = s.lenght() - 1;
  while (i <) {
    if (s[i] != s[j]) {
      return false;
    } else {
      i++;
      j--;
    }
  }
  return true;
}

bool validPalindrome(string s) {
  int i = 0;
  int j = s.length() - 1;

  while (i < j) {
    if (s[i] == s[j]) {
      i++;
      j--;
    } else {
      // remove from i
      bool ans1 = checkPalindrome(s, i + 1, j);
      // remove from j
      bool ans2 = checkPalindrome(s, i, j - 1);

      return ans1 || ans2;
    }
  }
  // if you reach upto here it means that you have reached the end of string
  // and you can return true
  return true;
}

// Very Important
// Palindrome substring
int expand(string s, int i, int j) {
  int count = 0;
  while (i > 0 && j < s.length() && s[i] == s[j]) {
    count++;
    i--;
    j++;
  }
}

int subString(string s) {
  int totalcount = 0;
  for (int i = 0; i < s.length(); i++) {
    // ODD
    int j = i;
    int oddAns = expand(s, i, j);
    // EVEN
    j = i + 1;
    int evenAns = expand(s, i, j);
    totalCount = totalCount + oddAns + evenAns;
  }
  return totalCount;
}