class Solution {

  bool isPalindrome(String s) {

    int left = 0;
    int right = s.length - 1;
   
    while (s[left] == s[right]){


      // If the pointers have met in the middle, return true since the string is a palindrome
      if (left + 1 == right){
        return true;
      }


      // Move the pointers one character towards the middle of the string
      left++;
      right--;


      // If the pointers have met in the middle, return true since the string is a palindrome
      if (left == right){
        return true;
      }
    }
    // If the while loop terminates, the string is not a palindrome, so return false
    return false;
  }
}