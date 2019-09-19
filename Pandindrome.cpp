// Pandindrome.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

using namespace std;

bool checkWord(char word[]);
bool checkPal(char word[], int b, int e);

int main()
{
	char word[30]; //Declare array to hold word
 
	//Prompt user to enter a word
	cout << "Enter a word to check: ";
	cin.getline(word, 30);
	cout << endl;

	if (checkWord(word)) //Check the word is a palindrome
	{
		cout << "TRUE";
	}
	else
	{
		cout << "FALSE";
	}

	return 0;
}

bool checkWord(char word[])
{
	int l; //declare variable to hold length of word

	//set l equal to the number of characters in the string
	l = strlen(word);

	if (l == 0) //If nothing was entered, prompt the user to enter a word.
	{
		cout << "Please enter a word and try again!" << endl;
		return false;
	}
	else
	{
		return checkPal(word, 0, l - 1); //Pass the word to the recursive function along with positions of first and last elements.
	}

}

bool checkPal(char word[], int b, int e) //b represents the first element in the array, e represents the last element in the array
{
	//If the word entered is a single character, return True
	if (b == e)
	{
		return true;
	}
	
	if (word[b] != word[e]) //Compare the array elements, if they don't match return False. 
	{
		return false;
	}

	//Check the rest of the characters recursively, counting up from the first element (b) and down from the last element (e).
	if (b < e + 1) 
	{
		return checkPal(word, b + 1, e - 1); 
		return true;
	}

}