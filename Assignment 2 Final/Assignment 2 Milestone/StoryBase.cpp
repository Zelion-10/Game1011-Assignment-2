#include "StoryBase.h"
#include <iostream>
#include <fstream>
#include <string>

#include "PlayerUData.h"
#include "SOUT.h"

using namespace std;

void StoryStart::startStory()
{
	//Class Object
	PlayerDecision karmaCount;
	StoryOutcome storyEnd;

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

	cout << "Previous Story: ";
	//Story 
	for (int i = 1; i <= 4; i++)
	{
		getline(storyFile, line);
		//First Scenario
		if (i == 1)
		{
			cout << line << endl;
			cout << "----------------Scenario 1-----------------" << endl;
			
			cout << "You run into Winton, an old friend, who tells you that he's in trouble. He borrowed money from some dangerous people and now they're threatening him. Winton begs you to help him out." << endl;
			cout << "-------------------------------------------" << endl;
			cout << " Do you help Winton or not?" << endl;
			cout << "1. Help Winton" << endl;
			cout << "2. Don't Help Winton" << endl;
			cout << "-------------------------------------------" << endl;
			getline(cin, command);
			system("Pause");
			system("CLS");

			//IF statements for the choices
			if (command == "1" or command == "Help Winton")
			{
				cout << "------------------------------------------------------------" << endl;
				cout << "You decide to help Winton out of his predicament. You know that it won't be easy, but you can't let your friend suffer." << endl;
				cout << "------------------------------------------------------------" << endl;
				//karmaCounter++;
				karmaCount.setKarmaCounter(karmaCounter++);
			}

			else if (command == "2" or command == "Don't Help Winton")
			{
				cout << "------------------------------------------------------------" << endl;
				cout << "Too bad. He Makes You Help Him Anyway" << endl;
				cout << "------------------------------------------------------------" << endl;
				//karmaCounter--;
				karmaCount.setKarmaCounter(karmaCounter--);
			}

		}
		system("Pause");
		system("CLS");

		//Second Scenario
		if (i == 2)
		{
			cout << "-----------------[Scenario 2]----------------" << endl;
			cout << line << endl;
			cout << "Winton needs to pay off the debt, but he doesn't have the money. He suggests that the two of you rob a bank to get the cash. You're not sure if it's a good idea, but you're willing to hear him out." << endl;
			cout << "-------------------------------------------" << endl;
			
			cout << "Type One Of The Following" << endl;
			cout << "1. Agree to Rob the Bank" << endl;
			cout << "2. Disagree to Rob the Bank" << endl;
			cout << "3.Don't Help Winton" << endl;
			cout << "-------------------------------------------" << endl;
			getline(cin, command);
			system("Pause");
			system("CLS");
			if (command == "1" or command == "Agree to Rob the Bank")
			{
				cout << "------------------------------------------------------------" << endl;
				cout << "You decide to go along with Winton's plan. You both plan out the robbery and execute it flawlessly. You get away with the money and give Winton his share. He thanks you for your help and promises to pay you back as soon as he can. " << endl;
				cout << "------------------------------------------------------------" << endl;
				//karmaCounter++;
				karmaCount.setKarmaCounter(karmaCounter++);
			}

			else if (command == "2" or command=="Disagree to Rob the Bank")
			{
				cout << "------------------------------------------------------------" << endl;
				cout << "You don't feel comfortable with the idea of robbing a bank, and you tell Winton that you can't help him. He pleads with you, but you stand firm. Winton leaves, disappointed, but you feel like you made the right decision." << endl;
				cout << "------------------------------------------------------------" << endl;
				//karmaCounter--;
				karmaCount.setKarmaCounter(karmaCounter--);
			}

			else if (command == "3" or command == "Don't Help Winton")
			{
				cout << "------------------------------------------------------------" << endl;
				cout << "As much as you want to help Winton, you know that getting involved in his problems could put you in danger. You decide that it's best to stay out of it." << endl;
				cout << "------------------------------------------------------------" << endl;
				//karmaCounter--;
				karmaCount.setKarmaCounter(karmaCounter--);
			}
			
		}
		system("Pause");
		system("CLS");
		cout << "Days pass, and you haven't heard from Winton. You begin to worry about his safety. You decide to check up on Winton to make sure he's okay. When you visit him, you find out that he was beaten up by the people he owed money to. He's in bad shape, and he needs your help." << endl;
		system("Pause");
		system("CLS");
		

		//Third Scenario
		if (i == 3)
		{
			cout << "----------------[Scenario 3]------------------" << endl;
			cout << line << endl;
			cout << "Winton tells you that he wants to get revenge on the people who hurt him. He asks for your help in tracking them down." << endl;
			cout << "-------------------------------------------" << endl;
			cout << "Type One Of The Following" << endl;
			cout << "1. Help Winton Seek Revenge" << endl;
			cout << "2. Refuse to Help Seek Revenge" << endl;
			cout << "3. Refuse to Get Involved" << endl;
			cout << "-------------------------------------------" << endl;
			getline(cin, command);
			system("Pause");
			system("CLS");


			if (command == "1" or command == "Help Winton Seek Revenge")
			{
				cout << "------------------------------------------------------------" << endl;
				cout << "You agree to help Winton seek revenge. Together, you track down the people who hurt him and get your revenge. Winton is grateful for your help, but you can't help but feel uneasy about what you did." << endl;
				
				cout << "------------------------------------------------------------" << endl;
				karmaCount.setKarmaCounter(karmaCounter++);
			}

			else if (command == "2" or command == "Refuse to Help Seek Revenge")
			{
				cout << "------------------------------------------------------------" << endl;
				cout << "You don't believe that revenge is the right course of action. You tell Winton that you can't help him and try to convince him to let it go. He's angry with you, but you know that you made the right decision. " << endl;

				cout << "------------------------------------------------------------" << endl;
				karmaCount.setKarmaCounter(karmaCounter++);
			}

			else if (command == "3" or command == "Refuse to Get Involved")
			{
				cout << "------------------------------------------------------------" << endl;
				cout << "You decide that it's best to stay out of Winton's problems. You hope that he'll be okay on his own." << endl;
				cout << "------------------------------------------------------------" << endl;
				karmaCount.setKarmaCounter(karmaCounter--);
			}
		}
		system("Pause");
		system("CLS");



		//Final Scenario
		if (i == 4)
		{
			cout << "----------------[Scenario 4]-----------------" << endl;
			cout << line << endl;
			cout << "Months pass, and you haven't seen or heard from Winton. You assume that he's moved on and forgotten about the whole ordeal." << endl;
			cout << "-------------------------------------------" << endl;
			cout << "Type One Of The Following" << endl;
			cout << "1. Run into Winton" << endl;
			cout << "2. Never See Winton Again" << endl;
			cout << "-------------------------------------------" << endl;
			getline(cin, command);
			system("Pause");
			system("CLS");

			if (command == "1" or command == "Run into Winton")
			{
				cout << "------------------------------------------------------------" << endl;
				cout << "You run into Winton on the street one day. He looks different, healthier, and happier. He tells you that he's turned his life around and is doing much better. He thanks you for your help and apologizes for dragging you into his problems." << endl;
				cout << "------------------------------------------------------------" << endl;
				karmaCount.setKarmaCounter(karmaCounter = -10);
			}

			else if (command == "2" or command == "Never See Winton Again")
			{
				cout << "------------------------------------------------------------" << endl;
				cout << "You never run into Winton again. You hope that he's doing well and that he's moved on from the difficulties he faced. You're glad that you made the decisions that you did, and you hope that you helped him in some small way." << endl;
				cout << "------------------------------------------------------------" << endl;
				karmaCount.setKarmaCounter(karmaCounter++);
			}
		}



	}
	system("Pause");
	system("CLS");

	//After going through the four scenarios
	cout << "Ending File created. View it to see your ending and other information of the story." << endl;

	//Depending on the player's actions, output the ending into a textfile. 
	//Print Story Good End
	if (karmaCounter > 0)
	{
		storyEnd.Good();
	}

	//Print Story Bad End
	else if (karmaCounter < -3)
	{
		storyEnd.Bad();
	}
	
	//Close the story file after iteration
	storyFile.close();
}
