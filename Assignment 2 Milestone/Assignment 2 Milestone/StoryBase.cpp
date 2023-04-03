#include "StoryBase.h"
#include <iostream>
#include <fstream>
#include <string>

#include "PlayerUData.h"

using namespace std;

void StoryStart::startStoryGame()
{
	//Class Object
	PlayerDecision karmaCount;
	

	//Variables
	int karmaCounter = 0;
	int lineNumber = 0;
	int playerChoice = 0;
	string line;
	string command;

	//Text File
	ifstream storyFile;

	//Open the file
	storyFile.open("Story.txt");

	//File open VALIDATION
	if (!storyFile.is_open())
	{
		cout << "ERROR OPENING Story.txt!" << endl;
		//exit(0);
	}

	else
	{
		cout << "File opened successfully" << endl;
	}


	//Story 
	for (int i = 1; i <= 1; i++)
	{
		getline(storyFile, line);
		//First Scenario
		if (i == 1)
		{
			cout << "----------------Scenario 1-----------------" << endl;
			cout << line << endl;
			cout << "-------------------------------------------" << endl;
			cout << "(Type one of the following)" << endl;
			cout << "Throw hands" << endl;
			cout << "Leave Him" << endl;
			cout << "-------------------------------------------" << endl;
			getline(cin, command);
			system("CLS");

		}
		
		
	}
	
	storyFile.close();
}
