// lab5.cpp : Defines the entry point for the console application.
// Leo Chaisson
// Comp 201 09-10

#include "stdafx.h"
#include <iostream> 
#include <string>
#include <cctype>
using namespace std; 

void swap(char& v1, char& v2);
string reverse(const string& s1);
string make_lower(const string& s1);
bool is_pal(const string& s1);

int main( ) 
{ 
     string s1("Black"), s2("Black"); 
     unsigned int length1, length2; 

      // Find their lengths 
      length1 = s1.length(); 
      length2 = s2.length(); 
      // Compare their length 
      if(length1 == length2) 
      { 
           cout << "The two strings are the same length, are they the same? \n"; 
      } 

	  if(s1 == s2) 
      { 
           cout << "The two strings: "; 
           cout << s1 << " and " << s2 << " are the same \n";
      } 
      else 
      { 
          cout << "The two strings: "; 
          cout << s1 << " and " << s2 << " are NOT the same \n"; 
      } 

      cout << "Now I let you enter two strings\n"; 
      cout << "Enter the first string, then the second \n"; 
      // Another way to initialize the two strings 
      cin >> s1 >> s2; 
	  s1.append(s2);
	  cout << s1; 
	  cout << endl;
	  if(is_pal(s1))
		  cout << s1 << " is a palindrome!";
	  else
		  cout << s1 << " is not a plaindrome.";
		  cout << endl;
      return 0; 
}
void swap(char& v1, char& v2)
{
	char temp = v1;
	v1=v2;
	v2=temp;
}
string reverse(const string& s1)
{
	int start = 0;
	int end = s1.length();
	string temp(s1);
	while (start < end)
	{
		end--;
		swap(temp[start],temp[end]);
		start++;
	}
	return temp;
}
string make_lower(const string& s1)
{
	string temp(s1);
	for (int i=0; i<s1.length(); i++)
		temp[i] =tolower(s1[i]);
	return temp;
}
string remove_punct(const string& s1, const string& punct)
{
	string no_punct;
	int s1_length = s1.length();
	int punct_length = punct.length();
	for (int i=0; i<s1_length; i++)
	{
		string a_char =s1.substr(i,1);
		int location = punct.find(a_char, 0);
		if(location < 0|| location >= punct_length)
			no_punct = no_punct + a_char;
	}
	return no_punct;
}
bool is_pal(const string& s1)
{
	string punct(",;:.?!'\" ");
	string str(s1);
	str = make_lower(str);
	string lower_str = remove_punct(str,punct);

	return (lower_str == reverse(lower_str));
}
/*
//Test 1
The two strings are the same length, are they the same?
The two strings: Black and Black are the same
Now I let you enter two strings
Enter the first string, then the second
Race car
Racecar
Racecar is a palindrome!

//Test 2
The two strings are the same length, are they the same?
The two strings: Black and Black are the same
Now I let you enter two strings
Enter the first string, then the second
Cat dog
Catdog
Catdog is not a plaindrome.
*/