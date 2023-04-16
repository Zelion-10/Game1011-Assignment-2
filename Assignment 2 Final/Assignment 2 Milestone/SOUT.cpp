#include "SOUT.h"


#include <iostream>
#include <fstream>
#include <ostream>

using namespace std;

void StoryOutcome::Bad()
{
	ofstream endingFile("Story.txt");



	Facts();

	endingFile << "-------------[THE BAD ENDING]----------------" << endl;
	endingFile << "Winton becomes more and more consumed by revenge, and he starts ";
	endingFile << "to lose sight of what's important. He gets into more trouble and ends ";
	endingFile << "up in jail. You hear about his fate and feel guilty for not being able to help him more. ";
	endingFile << "You vow to never get involved in other people's problems again." << endl;
	endingFile << "---------------------------------------------" << endl;




	endingFile.close();
};

void StoryOutcome::Good()
{
	ofstream endingFile("Story.txt");



	Facts();

	endingFile << "-------------[THE GOOD ENDING]----------------" << endl;
	endingFile << "After Winton turns his life around, he starts working hard and saving up money. He pays off his debt and starts a small business. He invites you to the grand opening of his new store, and you're proud to see how far he's come. He thanks you for your help and tells you that he couldn't have done it without you." << endl;
	endingFile << "----------------------------------------------" << endl;



	endingFile.close();
};


void StoryOutcome::Facts()
{
	ofstream endingFile("Story.txt");
	endingFile << "--------------------------------[Story Background]----------------------------------------" << endl;
	endingFile << "You run into Winton, an old friend, who tells you that he's in trouble. He borrowed money from some dangerous people and now they're threatening him. Winton begs you to help him out." << endl;
	endingFile << "First Scenario: Winton's Dilemma" << endl;
	endingFile << "Second Scenario: Seeking Help & Winton's Fate" << endl;
	endingFile << "Third Scenario: Seeking Justice" << endl;
	endingFile << "Final Scenario:  Winton's Redemption" << endl;
	endingFile << "--------------------------------------------------------------------------------------------" << endl;

	endingFile.close();

};
