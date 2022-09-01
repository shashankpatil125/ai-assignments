#include <iostream>
using namespace std;

char sq[10] = {'o','1','2','3','4','5','6','7','8','9'};

int checkwin();
void box();

int main()
{
	int player = 1,i,choice;

    char mark;
    do
    {
        box();
        player=(player%2)?1:2;

        cout << "player " << player << ", enter a number:  ";
        cin >> choice;

        mark=(player == 1) ? 'X' : 'O';

        if (choice == 1 && sq[1] == '1')
            sq[1] = mark;
        else if (choice == 2 && sq[2] == '2')
            sq[2] = mark;
        else if (choice == 3 && sq[3] == '3')
            sq[3] = mark;
        else if (choice == 4 && sq[4] == '4')
            sq[4] = mark;
        else if (choice == 5 && sq[5] == '5')
            sq[5] = mark;
        else if (choice == 6 && sq[6] == '6')
            sq[6] = mark;
        else if (choice == 7 && sq[7] == '7')
            sq[7] = mark;
        else if (choice == 8 && sq[8] == '8')
            sq[8] = mark;
        else if (choice == 9 && sq[9] == '9')
            sq[9] = mark;
        else
        {
            cout<<"Invalid move ";
            player--;
            cin.ignore();
            cin.get();
        }
        i=checkwin();

        player++;
    }while(i==-1);
    box();
    if(i==1)

        cout<<"==>\aPlayer "<<--player<<" win ";
    else
        cout<<"==>\aGame draw";

    cin.ignore();
    cin.get();
    return 0;
}

int checkwin()
{
    if (sq[1] == sq[2] && sq[2] == sq[3])
        return 1;
    else if (sq[4] == sq[5] && sq[5] == sq[6])
        return 1;
    else if (sq[7] == sq[8] && sq[8] == sq[9])
        return 1;
    else if (sq[1] == sq[4] && sq[4] == sq[7])
        return 1;
    else if (sq[2] == sq[5] && sq[5] == sq[8])
        return 1;
    else if (sq[3] == sq[6] && sq[6] == sq[9])
        return 1;
    else if (sq[1] == sq[5] && sq[5] == sq[9])
        return 1;
    else if (sq[3] == sq[5] && sq[5] == sq[7])
        return 1;
    else if (sq[1] != '1' && sq[2] != '2' && sq[3] != '3' && sq[4] != '4' && sq[5] != '5' && sq[6] != '6' && sq[7] != '7' && sq[8] != '8' && sq[9] != '9')
        return 0;
    else
        return -1;
}


void box()
{
    cout << "Tic Tac Toe";
    cout << "    Player 1 (X)  Player 2 (O)" << endl << endl;
    cout << endl;

    cout << "  " << sq[1] << "_|" << sq[2] << "|_" << sq[3] << endl;
    cout << "  " << sq[4] << "_|" << sq[5] << "|_" << sq[6] << endl;
    cout << "  " << sq[7] << "_|" << sq[8] << "|_" << sq[9] << endl;
}

















