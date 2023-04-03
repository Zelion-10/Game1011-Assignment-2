
#include <iostream>
#include <fstream>
#include <string>

#include "StoryBase.h"




using namespace std;

int main()
{

	
	StoryStart beginStory;


	

	cout << "---------------------------------------------" << endl;
	cout << "GAME1017 - Advanced Programming Assignment 2" << endl;
	cout << "Instructions:" << endl;
	cout << "1. There will be scenarios." << endl;
	cout << "2. which you must make a choices." << endl;
	cout << "3. You MUST type exactly how the choice is displayed. Text is case sensitive!" << endl;
	cout << "4. Once you go through the story scenarios, the program will print the ending in a txt file depending on your actions! But for the Milestone there is no ending." << endl;
	cout << "----------Hit any key to start-------------" << endl;
	getchar();



	//Start game
	system("CLS");
	beginStory.startStoryGame();







}