#include<iostream>
using namespace std;
char arr[10] = {'a','1','2','3','4','5','6','7','8','9'};

void drawBoard()
{

    ///this function is drawing the playing board

    cout<<endl<<endl<<"        Tic Tac Toe"<<endl<<endl;
    cout<<" Player 1 = [X]  Player 2 = [O]"<<endl<<endl;
    cout<<" Input from 1-9 to put X or Y at a given position"<<endl<<endl;

    cout<<"          |     |     "<<endl;
    cout<<"       "<<arr[1]<<"  |  "<<arr[2]<<"  | "<<arr[3]<<endl;   ///showing input position to the player
    cout<<"     _____|_____|_____"<<endl;
    cout<<"          |     |     "<<endl;
    cout<<"       "<<arr[4]<<"  |  "<<arr[5]<<"  | "<<arr[6]<<endl;    ///showing input position to the player
    cout<<"     _____|_____|_____"<<endl;
    cout<<"          |     |     "<<endl;
    cout<<"       "<<arr[7]<<"  |  "<<arr[8]<<"  | "<<arr[9]<<endl;    ///showing input position to the player
    cout<<"          |     |     "<<endl;
    cout<<endl;
}

int checkifwin()
{
    ///this function return 5 if win
    if(arr[1]==arr[2] && arr[2] == arr[3])
        return 5;
    else if(arr[4]==arr[5] && arr[5] == arr[6])
        return 5;
    else if(arr[7]==arr[8] && arr[8] == arr[9])
        return 5;
    else if(arr[1]==arr[4] && arr[4] == arr[7])
        return 5;
    else if(arr[2]==arr[5] && arr[5] == arr[8])
        return 5;
    else if(arr[3]==arr[6] && arr[6] == arr[9])
        return 5;
    else if(arr[1]==arr[5] && arr[5] == arr[9])
        return 5;
    else if(arr[3]==arr[5] && arr[5] == arr[7])
        return 5;
    else if(arr[1]!='1' && arr[2]!='2' && arr[3]!='3' && arr[4]!='4' && arr[5]!='5' && arr[6]!='6' && arr[7]!='7' && arr[8]!='8' && arr[9]!='9')
        return 0;     /// return 0 when game is draw and has no move left to play
    else
        return -5;    ///checking if the game is running or not

}
int main()
{

    ///needed variables for the game to function
    char value;
    int player = 1;
    int PlayingCondition;
    int inputChoice;

    do
    {
        ///drawing and updating the board for every input
        drawBoard();
        ///this segment of code selecting player 1 and after that player  2 then again player 1 then again player 2 and so on...
        if(player%2==0)
            player = 2;
        else
            player = 1;

        ///taking Playing position input from Player 1 and 2 serially....until win or draw
        cout<<" Player "<<player<<": Enter a Playing position: ";
        cin>>inputChoice;
        cout<<endl;
        ///this segment of code giving player 1 the character 'X' and player 2 'Y' as their input;
        if(player==1)
            value = 'X';
        else
            value = 'O';

        ///this section of code checking the input choice and if the position have not been used then changing its position value....

        if(inputChoice==1 && arr[1]=='1')
            arr[1] = value;
        else if(inputChoice==2 && arr[2]=='2')
            arr[2] = value;
        else if(inputChoice==3 && arr[3]=='3')
            arr[3] = value;
        else if(inputChoice==4 && arr[4]=='4')
            arr[4] = value;
        else if(inputChoice==5 && arr[5]=='5')
            arr[5] = value;
        else if(inputChoice==6 && arr[6]=='6')
            arr[6] = value;
        else if(inputChoice==7 && arr[7]=='7')
            arr[7] = value;
        else if(inputChoice==8 && arr[8]=='8')
            arr[8] = value;
        else if(inputChoice==9 && arr[9]=='9')
            arr[9] = value;
       else{
        cout<<" Not a valid Input"<<endl;
        cin.ignore();
        cin.get();
       }



        ///calling a function to check the game condition
        PlayingCondition = checkifwin();
        if(PlayingCondition==5){
                drawBoard();

            cout<<" Congratulation Player "<<player<<" has won the game"<<endl;
        }
        else
            cout<<" Match draw"<<endl;
        ///increase the player value by 1 to help determine the player number
        player++;

    }
    while(PlayingCondition==-5); ///this loop will run until the game ends


    return 0;
}
