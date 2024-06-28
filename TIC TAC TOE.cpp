//Install visual studio
#include<iostream>
#include<stdlib.h>
#include<ctime>
#include<limits>
using namespace std;

char one = '1', two = '2', three = '3', four = '4', five = '5', six = '6', seven = '7', eight = '8', nine = '9';
int PC = 0, score_1 = 0, score_2 = 0;

void credits()
{
	system("cls");
	cout << "\nTHIS GAME IS MADE BY UMER HAYAT OF SECTION D...!" << endl;
}

void instructions()
{
	system("cls");
	cout << "Will be added soon...!" << endl << endl;
}

void score()
{
	system("cls");
	cout << "Score Player 1 = " << score_1 << endl;
	cout << "Score Player 2 or PC = " << score_2 << endl;
}

void board()
{
	system("cls");
	cout << "**************************************************" << endl;
	cout << "*\t\t*\t\t *\t\t *" << endl;
	cout << "*\t\t*\t\t *\t\t *" << endl;
	
	cout << "*\t" << one << "\t*\t" << two << "\t *\t" << three << "\t *" << endl;
	
	cout << "*\t\t*\t\t *\t\t *" << endl;
	cout << "*\t\t*\t\t *\t\t *" << endl;
	
	cout << "*\t" << four << "\t*\t" << five << "\t *\t" << six << "\t *" << endl;
	
	cout << "*\t\t*\t\t *\t\t *" << endl;
	cout << "*\t\t*\t\t *\t\t *" << endl;
	
	cout << "*\t" << seven << "\t*\t" << eight << "\t *\t" << nine << "\t *" << endl;
	
	cout << "*\t\t*\t\t *\t\t *" << endl;
	cout << "*\t\t*\t\t *\t\t *" << endl;
	cout << "**************************************************" << endl;
}

char winning_condition()
{
	if(one == two && two == three) return one;//1) horizontal
	else if(four == five && five == six) return four;//2) horizontal
	else if(seven == eight && eight == nine) return seven;//3) horizontal
	else if(one == four && four == seven) return one;//4) vertical
	else if(two == five && five == eight) return two;//5) vertical
	else if(three == six && six == nine) return three;//6) vertical
	else if(one == five && five == nine) return nine;//7) diagonally
	else if(three == five && five == seven) return three;//8) diagonally
	return 'f';
}

void loosing_condition(char input)
{
	if(input == 'f')
	{
		board();
		cout << "\nMatch Drawn....!" << endl;
	}
}

void play_game(int turn)
{
	char position;
	int store;
	
	if(turn == 1)
	{
		cout << "\nPlayer_1 = ";
		cin >> position;
		
		while(1)
		{
			if(cin.fail())
			{
				cin.clear();
				cin.ignore(numeric_limits < streamsize > :: max(), '\n');
				
				system("cls");
				cout << "\nPlayer_1 = " <<endl;
				cin >> position;
			}
			
			if(!cin.fail())
			break;
		}
		
		if(position == '1' && one != 'O')
		one = 'X';
		else if(position == '2' && two != 'O')
		two = 'X';
		else if(position == '3' && three != 'O')
		three = 'X';
		else if(position == '4' && four != 'O')
		four = 'X';
		else if(position == '5' && five != 'O')
		five = 'X';
		else if(position == '6' && six != 'O')
		six = 'X';
		else if(position == '7' && seven != 'O')
		seven = 'X';
		else if(position == '8' && eight != 'O')
		eight = 'X';
		else if(position == '9' && nine != 'O')
		nine = 'X';
	}
	
	else if(turn == 2)
	{
		cout << "\nPlayer_2 = ";
		cin >> position;
		
		while(1)
		{
			if(cin.fail())
			{
				cin.clear();
				cin.ignore(numeric_limits < streamsize > :: max(), '\n');
				
				system("cls");
				cout << "\nPlayer_2 = " <<endl;
				cin >> position;
			}
			
			if(!cin.fail())
			break;
		}
	
		if(position == '1' && one != 'X')
		one = 'O';
		else if(position == '2' && two != 'X')
		two = 'O';
		else if(position == '3' && three != 'X')
		three = 'O';
		else if(position == '4' && four != 'X')
		four = 'O';
		else if(position == '5' && five != 'X')
		five = 'O';
		else if(position == '6' && six != 'X')
		six = 'O';
		else if(position == '7' && seven != 'X')
		seven = 'O';
		else if(position == '8' && eight != 'X')
		eight = 'O';
		else if(position == '9' && nine != 'X')
		nine = 'O';
	}
	
	else if(turn == 3)
	{
		//cout << "PC's Turn" << endl;
		//system("pause");
		
		//PRIORITY NUMBER 1
		/*if(five == '5')
		{
			five == 'O';
			cout << "five = " << five << endl;
			cout << "priority number 1 excuted" << endl;
		}*/
		//PRIORITY NUMBER 2
		if(two == 'O' && three == 'O' && one == '1')//1 Horizontal
		one = 'O';
		else if(one == 'O' && three == 'O' && two == '2')
		two = 'O';
		else if(one == 'O' && two == 'O' && three == '3')
		three = 'O';
		
		else if(five == 'O' && six == 'O' && four == '4')//2 Horizontal
		four = 'O';
		else if(four == 'O' && six == 'O' && five == '5')
		five = 'O';
		else if(four == 'O' && five == 'O' && six == '6')
		six = 'O';
		
		else if(eight == 'O' && nine == 'O' && seven == '7')//3 Horizontal
		seven = 'O';
		else if(seven == 'O' && nine == 'O' && eight == '8')
		eight = 'O';
		else if(seven == 'O' && eight == 'O' && nine == '9')
		nine = 'O';
		
		else if(four == 'O' && seven == 'O' && one == '1')//4 Vertical
		one = 'O';
		else if(one == 'O' && seven == 'O' && four == '4')
		four = 'O';
		else if(one == 'O' && four == 'O' && seven == '7')
		seven = 'O';
	
		else if(five == 'O' && eight == 'O' && two == '2')//5 Vertical
		two = 'O';
		else if(two == 'O' && eight == 'O' && five == '5')
		five = 'O';
		else if(two == 'O' && five == 'O' && eight == '8')
		eight = 'O';
		
		else if(six == 'O' && nine == 'O' && three == '3')//6 Vertical
		three = 'O';
		else if(three == 'O' && nine == 'O' && six == '6')
		six = 'O';
		else if(three == 'O' && six == 'O' && nine == '9')
		nine = 'O';
		
		else if(five == 'O' && nine == 'O' && one == '1')//7 Diagonal
		one = 'O';
		else if(one == 'O' && nine == 'O' && five == '5')
		five = 'O';
		else if(one == 'O' && five == 'O' && nine == '9')
		nine = 'O';
		
		else if(five == 'O' && seven == 'O' && three == '3')//8 Diagonal
		three = 'O';
		else if(three == 'O' && seven == 'O' && five == '5')
		five = 'O';
		else if(three == 'O' && five == 'O' && seven == '7')
		{
			seven = 'O';
			cout << "priority number 2 executed" << endl;
		}
		//PRIORITY NUMBER 3
		else if(two == 'X' && three == 'X' && one == '1')//1 Horizontal
		one = 'O';
		else if(one == 'X' && three == 'X' && two == '2')
		two = 'O';
		else if(one == 'X' && two == 'X' && three == '3')
		three = 'O';
		
		else if(five == 'X' && six == 'X' && four == '4')//2 Horizontal
		four = 'O';
		else if(four == 'X' && six == 'X' && five == '5')
		five = 'O';
		else if(four == 'X' && five == 'X' && six == '6')
		six = 'O';
		
		else if(eight == 'X' && nine == 'X' && seven == '7')//3 Horizontal
		seven = 'O';
		else if(seven == 'X' && nine == 'X' && eight == '8')
		eight = 'O';
		else if(seven == 'X' && eight == 'X' && nine == '9')
		nine = 'O';
		
		else if(four == 'X' && seven == 'X' && one == '1')//4 Vertical
		one = 'O';
		else if(one == 'X' && seven == 'X' && four == '4')
		four = 'O';
		else if(one == 'X' && four == 'X' && seven == '7')
		seven = 'O';
	
		else if(five == 'X' && eight == 'X' && two == '2')//5 Vertical
		two = 'O';
		else if(two == 'X' && eight == 'X' && five == '5')
		five = 'O';
		else if(two == 'X' && five == 'X' && eight == '8')
		eight = 'O';
		
		else if(six == 'X' && nine == 'X' && three == '3')//6 Vertical
		three = 'O';
		else if(three == 'X' && nine == 'X' && six == '6')
		six = 'O';
		else if(three == 'X' && six == 'X' && nine == '9')
		nine = 'O';
		
		else if(five == 'X' && nine == 'X' && one == '1')//7 Diagonal
		one = 'O';
		else if(one == 'X' && nine == 'X' && five == '5')
		five = 'O';
		else if(one == 'X' && five == 'X' && nine == '9')
		nine = 'O';
		
		else if(five == 'X' && seven == 'X' && three == '3')//8 Diagonal
		three = 'O';
		else if(three == 'X' && seven == 'X' && five == '5')
		five = 'O';
		else if(three == 'X' && five == 'X' && seven == '7')
		{
			seven = 'O';
			cout << "priority number 3 executed" << endl;
		}
		//PRIORITY NUMBER 4
		else if(one == '1' && one != 'X')
		one = 'O';
		else if(two == '2' && two != 'X')
		three = 'O';
		else if(seven == '7' && seven != 'X')
		seven = 'O';
		else if(nine == '9' && nine != 'X')
		{
			nine = 'O';
			cout << "priority number 4 executed" << endl;
		}
		else
		{
			store = rand() % 10;
			cout << "Random number executed" << endl;
			while(1)
			{
				if(store == 1 && one == '1')
				{
					one = 'O';
					break;
				}
				else
				store = rand() % 10;	
					
				if(store == 2 && two == '2')
				{
					two = 'O';
					break;
				}
				else
				store = rand() % 10;
					
				if(store == 3 && three == '3')
				{
					three = 'O';
					break;
				}
				else
				store = rand() % 10;
					
				if(store == 4 && four == '4')
				{
					four = 'O';
					break;
				}
				else
				store = rand() % 10;
					
				if(store == 5 && five == '5')
				{
					five = 'O';
					break;
				}
				else
				store = rand() % 10;
					
				if(store == 6 && six == '6')
				{
					six = 'O';
					break;
				}
				else
				store = rand() % 10;
					
				if(store == 7 && seven == '7')
				{
					seven = 'O';
					break;
				}
				else
				store = rand() % 10;
					
				if(store == 8 && eight == '8')
				{
					eight = 'O';
					break;
				}
				else
				store = rand() % 10;
					
				if(store == 9 && nine == '9')
				{
					nine = 'O';
					break;
				}
				else
				store = rand() % 10;
			}
		}	
	}
}

void player_turn(int toss_won_by_player, int PC)
{
	int turns;
	
	if(toss_won_by_player == 1)// 1 for player#1 that is user
	turns = 10;
	else if(toss_won_by_player == 2)// 2 for player#2 or PC
	turns = 11;
	
	for(toss_won_by_player; toss_won_by_player < turns; toss_won_by_player++)
	{
		board();
		if(toss_won_by_player % 2 == 1 && PC == 0)
		play_game(1);
		else if(toss_won_by_player % 2 == 0 && PC == 0 )
		play_game(2);
		if(toss_won_by_player % 2 == 1 && PC == 1)
		play_game(1);
		else if(toss_won_by_player % 2 == 0 && PC==1)
		play_game(3);
		
		if(winning_condition() == 'X')
		{
			board();
			cout << "\nPlayer 1 Wins...!" << endl;
			score_1++;
			break;
		}
		else if(winning_condition() == 'O')
		{
			board();
			cout << "\nPlayer 2 or PC Wins...!" << endl;
			score_2++;
			break;
		}
	}
}

bool toss()
{
	bool toss_win;
	
	toss_win = rand() % 2;
	
	return toss_win;
}

int menu()
{
	int choice = 0, option = 0;
	bool toss_choice;
	
	cout << "\n*****MENU*******" << endl << endl;
	cout << " 1)CREDITS\n 2)Instructions\n 3)Score\n 4)Play Game" << endl;
	cout << "\nChoice = ";
	cin >> choice;
	
	while(1)
	{
		if(cin.fail())
		{
			cin.clear();
			cin.ignore(numeric_limits < streamsize > :: max(), '\n');
			
			system("cls");
			cout << " 1)CREDITS\n 2)Instructions\n 3)Score\n 4)Play Game" << endl;
			cout << "\nChoice = " <<endl;
			cin >> choice;
		}
		
		if(!cin.fail())
		break;
	}
	
	if(choice == 1)
	{
		credits();
	}
	
	else if(choice == 2)
	{
		instructions();
	}
	
	else if(choice == 3)
	{
		score();
	}
	
	else if(choice == 4)
	{
		system("cls");
		cout << "1)Player VS Player" << endl;
		cout << "2)Player VS PC" << endl;
		cout << "\nOption = ";
		cin >> option;
		
		while(1)
		{
			if(cin.fail())
			{
				cin.clear();
				cin.ignore(numeric_limits < streamsize > :: max(), '\n');
				
				system("cls");
				cout << "1)Player VS Player" << endl;
				cout << "2)Player VS PC" << endl;
				cout << "\nOption = " << endl;
				cin >> option;
			}
			
			if(!cin.fail())
			break;
		}
		
		system("cls");
		cout << "Heads or Tail(1 or 0) = ";
		cin >> toss_choice;
		
		while(1)
		{
			if(cin.fail())
			{
				cin.clear();
				cin.ignore(numeric_limits < streamsize > :: max(), '\n');
				
				system("cls");
				cout << "Heads or Tail(1 or 0) = " << endl;
				cin >> toss_choice;
			}
			
			if(!cin.fail())
			break;
		}
		
		if(option == 1)// 1 for Player VS Player
		{
			if(toss_choice == toss())
			{
				cout << "Player 1 won the toss....!" << endl << endl;
				system("pause");
				player_turn(1, 0);//passing 1 for player 1 and 0 showing PC is set off.
			}
			else
			{
				cout << "Player 2 won the toss....!" << endl << endl;
				system("pause");
				player_turn(2, 0);//passing 2 for player 2 and 0 showing PC is set off.
			}
		}
		
		else if(option == 2)// 2 for Player VS PC
		{
			if(toss_choice == toss())
			{
				cout << "Player 1 won the toss....!" << endl << endl;
				system("pause");
				player_turn(1, 1);//passing 1 for player 1 and 1 showing PC is set on.
			}
			else
			{
				cout << "PC won the toss....!" << endl << endl;
				system("pause");
				player_turn(2, 1);//passing 2 for player 2 and 1 showing PC is set on.
		
			}
		}
		
		return 1;//1 shows user chose to play the game.
	}
	
	return 0;// 0 shows user did not choose to play the game or he chose other functions.
}

int main()
{
	int returned_value = 0;
	char choice;
	
	srand((time(0)));
		
	while(1)
	{
		cout << "Welcome User" << endl;
		cout << "This is a Tic Tac Toe Game" << endl;
	
		returned_value = menu();
		
		if(returned_value == 1)
			if(winning_condition() == 'f')
				loosing_condition('f');
				
		one = '1';
		two = '2';
		three = '3';
		four = '4';
		five = '5';
		six = '6';
		seven = '7';
		eight = '8';
		nine = '9';
		
		system("pause");
		system("cls");
		cout << "Do you wish to play again(y/n)";
		cin >> choice;
		
		while(1)
		{
			if(cin.fail())
			{
				cin.clear();
				cin.ignore(numeric_limits < streamsize > :: max(), '\n');
				
				system("cls");
				cout << "Do you wish to play again(y/n) = ";
				cin >> choice;
			}
			
			if(!cin.fail())
			break;
		}
		
		if(choice == 'n' || choice == 'N')
		break;
	}		
	
	return 0;
}

