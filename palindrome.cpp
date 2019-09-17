#include <cstring>
#include <iostream>
//used some bits of code from stackoverflow

using namespace std;

int main() {
  char input1[80]; //Variable initilizations
  char newInput[80];
  bool palindromeorno = true;
  cout << "Put an input in and I'll check if its a palindrome or not!" << endl;
  cin.getline(input1, sizeof(input1)); //Use Cin.getline to get the entire input
  for (int i = 0, l = 0; i <= strlen(input1); i++) 
    
    {
      if((input1[i] != ' ') && (ispunct(input1[i]) == false)) {//If the character in the input does not contain a space or any punctuation, copy it into another string. Use of variable l is to remove spaces
	
	newInput[l] = tolower(input1[i]);
        l++;
	}
    }
  for (int i = 0, j = strlen(newInput)-1; i < j; i++, --j) {//Initializes an array and a reverse array such that the middle value in the input is ignored because its a palindrome anyways.
    if (palindromeorno == true) { //As long as the two values compared are equal, keep checking until done
      if (!(newInput[i] == newInput[j])) {
	palindromeorno = false; //If not equal, set it as false and break out of the code
	}
    }
  }

  if (palindromeorno == true) { //If it is a palindrome, return that it is a palindrome, if it isn't, then don't return it as a palindrome
    cout << "The input entered was a palindrome!" << endl;
  } else {
    cout << "The input entered was not a palindrome!" << endl;
  }
  return 0; //return
}
