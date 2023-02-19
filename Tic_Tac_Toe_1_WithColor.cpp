#include <iostream>
#include <time.h>
#include <windows.h>
using namespace std;

string player1Name;
string player2Name;
string winplayer;
string lossplayer;
string player;
int choice;
int bordchoice;
int tosschoice;
char playermark;
int playerchoice;
int menuchoice;
int random;
bool run = true;

void PlayerVsPlayer();
int boradPVP();
void PlayerVsComputer();
void boradPVC();

int main()
{
  do
  {
    HANDLE main = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(main,1);
    cout << "\n ________________________________ \n";
    cout << "|            Main Menu           |\n";
    cout << "|________________________________|\n";
    cout << "|                                |\n";
    cout << "|(1) = Player vs Player          |\n";
    cout << "|                                |\n";
    cout << "|                                |\n";
    cout << "|(2) = Player vs Computer        |\n";
    cout << "|                                |\n";
    cout << "|                                |\n";
    cout << "|(3) = Exit                      |\n";
    cout << "|________________________________|\n";
    cout << "|\n";
    cout << "| Choice :";
    cin >> menuchoice;
    system("CLS");

    if (menuchoice == 1)
    {
      HANDLE pvp = GetStdHandle(STD_OUTPUT_HANDLE);
      SetConsoleTextAttribute(pvp, 2);
      PlayerVsPlayer();
      if (tosschoice == 1 || tosschoice == 2)
      {
        HANDLE bpvp = GetStdHandle(STD_OUTPUT_HANDLE);
        SetConsoleTextAttribute(bpvp, 3);
        boradPVP();
      }
    }
    else if (menuchoice == 2)
    {
      HANDLE pvc = GetStdHandle(STD_OUTPUT_HANDLE);
      SetConsoleTextAttribute(pvc, 4);
      PlayerVsComputer();
      if (player2Name == "Computer")
      {
        HANDLE bpvc = GetStdHandle(STD_OUTPUT_HANDLE);
        SetConsoleTextAttribute(bpvc, 5);
        boradPVC();
      }
    }

    else if (menuchoice == 3)
    {
      cout << "You'r out of Game";
    }
    else
    {
      cout << "Invlid Input";
    }

  } while (menuchoice != 3);
  HANDLE end = GetStdHandle(STD_OUTPUT_HANDLE);
  SetConsoleTextAttribute(end, 7);
}

void PlayerVsPlayer()
{

  // Players Names

  cout << "\n ________________________________ \n";
  cout << "|         Player 1 Name          |\n";
  cout << "|________________________________|\n";
  cout << "|";
  cin >> player1Name;
  system("CLS");
  cout << "\n ________________________________ \n";
  cout << "|         Player 2 Name          |\n";
  cout << "|________________________________|\n";
  cout << "|";
  cin >> player2Name;
  cout << endl;
  system("CLS");

  // Tosss

  cout << "\n ________________________________ \n";
  cout << "|               Toss             |\n";
  cout << "|________________________________|\n";
  cout << "|                                |\n";
  cout << "|(1) = Heads                     |\n";
  cout << "|                                |\n";
  cout << "|                                |\n";
  cout << "|(2) = Tails                     |\n";
  cout << "|                                |\n";
  cout << "|Note :                          |\n";
  cout << "|Invlid Input = MainMenu         |\n";
  cout << "|________________________________|\n";
  cout << "|\n";
  cout << "| Only one player can choice :\n";
  cout << "| Choice :";
  cin >> tosschoice;
  system("CLS");
  int random = rand() % 2;
  if (tosschoice == 1)
  {
    if (random == 0)
    {
      cout << player1Name << "  : WINS \n";
      winplayer = player1Name;
      lossplayer = player2Name;
    }
    else
    {
      cout << player2Name << "  : WINS";
      winplayer = player2Name;
      lossplayer = player1Name;
    }
  }
  else if (tosschoice == 2)
  {
    if (random == 1)
    {
      cout << player2Name << "  : WINS";
      winplayer = player2Name;
      lossplayer = player1Name;
    }
    else
    {
      cout << player1Name << "  : WINS";
      winplayer = player1Name;
      lossplayer = player2Name;
    }
  }

  else
  {
    cout << " Invlid Input";
  }
}
int boradPVP()
{
  char borad[9] = {'0', '1', '2', '3', '4', '5', '6', '7', '8'};
  for (int i = 0; i < 9; i++)
  {

    cout << "\n ________________________________ \n";
    cout << "   " << winplayer << " (X) "
         << "  Vs  " << lossplayer << " (O)"
         << " \n";
    cout << "|________________________________|\n";
    cout << "|                                |\n";
    cout << "|          |         |           |\n";
    cout << "|    " << borad[0] << "     |    " << borad[1] << "    |     " << borad[2] << "     |\n";
    cout << "|   "
         << "--------------------------"
         << "   |\n";
    cout << "|          |         |           |\n";
    cout << "|    " << borad[3] << "     |    " << borad[4] << "    |     " << borad[5] << "     |\n";
    cout << "|   "
         << "--------------------------"
         << "   |\n";
    cout << "|          |         |           |\n";
    cout << "|    " << borad[6] << "     |    " << borad[7] << "    |     " << borad[8] << "     |\n";
    cout << "|________________________________|\n";

    if (i % 2 == 0)
    {
      player = winplayer;
      playermark = 'X';
    }
    else
    {
      player = lossplayer;
      playermark = 'O';
    }

    cout << "| " << "Enter Option :" << player << " : ";cin >> bordchoice;
    system("CLS");

    // Marking

    if (bordchoice >= 0 && bordchoice < 9)
    {
      if (borad[bordchoice] != 'X' && borad[bordchoice] != 'O')
      {
        borad[bordchoice] = playermark;
      }
      else
      {
        system("CLS");
        cout << "Already Mark";
        i--;
        continue;
      }
    }

    else
    {
      system("CLS");
      cout << " Invlid Input";
      i--;
      continue;
    }

    // checking for wins
    if (i >= 4)
    {
      if (borad[0] == borad[1] && borad[1] == borad[2])
      {
        cout << player << "  :  WINS";
        break;
      }
      if (borad[3] == borad[4] && borad[4] == borad[5])
      {
        cout << player << "  :  WINS";
        break;
      }
      if (borad[6] == borad[7] && borad[7] == borad[8])
      {
        cout << player << "  :  WINS";
        break;
      }
      if (borad[0] == borad[3] && borad[3] == borad[6])
      {
        cout << player << "  :  WINS";
        break;
      }

      if (borad[1] == borad[4] && borad[4] == borad[7])
      {
        cout << player << "  :  WINS";
        break;
      }
      if (borad[2] == borad[5] && borad[5] == borad[8])
      {
        cout << player << "  :  WINS";
        break;
      }
      if (borad[2] == borad[4] && borad[4] == borad[6])
      {
        cout << player << "  :  WINS";
        break;
      }
      if (borad[0] == borad[4] && borad[4] == borad[8])
      {
        cout << player << "  :  WINS";
        break;
      }
    }
    // 

    if (i == 8)
    {
      if (borad[0] != borad[1] && borad[1] == borad[2])
      {
        cout << "Draw";
        break;
      }
      if (borad[3] == borad[4] && borad[4] != borad[5])
      {
        cout << "Draw";
        break;
      }
      if (borad[6] != borad[7] && borad[7] == borad[8])
      {
        cout << "Draw";
        break;
      }
      if (borad[0] == borad[3] && borad[3] != borad[6])
      {
        cout << "Draw";
        break;
      }

      if (borad[1] != borad[4] && borad[4] == borad[7])
      {
        cout << "Draw";
        break;
      }
      if (borad[2] == borad[5] && borad[5] != borad[8])
      {
        cout << "Draw";
        break;
      }
      if (borad[2] != borad[4] && borad[4] == borad[6])
      {
        cout << "Draw";
        break;
      }
      if (borad[0] == borad[4] && borad[4] != borad[8])
      {
        cout << "Draw";
        break;
      }
    }
  }
  return (bordchoice);
}

void PlayerVsComputer()
{

  // Players Names

  cout << "\n ________________________________ \n";
  cout << "|         Player 1 Name          |\n";
  cout << "|________________________________|\n";
  cout << "|";
  cin >> player1Name;
  system("CLS");
  player2Name = "Computer";
  cout << endl;
  system("CLS");
}

void boradPVC()
{
  char borad[9] = {'0', '1', '2', '3', '4', '5', '6', '7', '8'};

  for (int i = 0; i < 9; i++)
  {

    cout << "\n ________________________________ \n";
    cout << "   " << player1Name << " (X) "
         << "  Vs  " << player2Name << " (O)"
         << " \n";
    cout << "|________________________________|\n";
    cout << "|                                |\n";
    cout << "|          |         |           |\n";
    cout << "|    " << borad[0] << "     |    " << borad[1] << "    |     " << borad[2] << "     |\n";
    cout << "|   "
         << "--------------------------"
         << "   |\n";
    cout << "|          |         |           |\n";
    cout << "|    " << borad[3] << "     |    " << borad[4] << "    |     " << borad[5] << "     |\n";
    cout << "|   "
         << "--------------------------"
         << "   |\n";
    cout << "|          |         |           |\n";
    cout << "|    " << borad[6] << "     |    " << borad[7] << "    |     " << borad[8] << "     |\n";
    cout << "|________________________________|\n";

    if (i % 2 == 0)
    {

      player = player1Name;
      playermark = 'X';

      cout << "| " << "Enter Option :" << player << " : ";cin >> bordchoice;
    }
    else
    {
      player = player2Name;
      playermark = 'O';

      srand(time(0));
      random = rand() % 9;
      bordchoice = random;
    }
    system("CLS");

    // Marking

    if (bordchoice >= 0 && bordchoice < 9)
    {
      if (borad[bordchoice] != 'X' && borad[bordchoice] != 'O')
      {
        borad[bordchoice] = playermark;
      }
      else
      {
        system("CLS");
        cout << "Already Mark";
        i--;
        continue;
      }
    }

    else
    {
      system("CLS");
      cout << " Invlid Input";
      i--;
      continue;
    }

    // checking for wins
    if (i >= 4)
    {
      if (borad[0] == borad[1] && borad[1] == borad[2])
      {
        cout << player << "  :  WINS";
        break;
      }
      if (borad[3] == borad[4] && borad[4] == borad[5])
      {
        cout << player << "  :  WINS";
        break;
      }
      if (borad[6] == borad[7] && borad[7] == borad[8])
      {
        cout << player << "  :  WINS";
        break;
      }
      if (borad[0] == borad[3] && borad[3] == borad[6])
      {
        cout << player << "  :  WINS";
        break;
      }

      if (borad[1] == borad[4] && borad[4] == borad[7])
      {
        cout << player << "  :  WINS";
        break;
      }
      if (borad[2] == borad[5] && borad[5] == borad[8])
      {
        cout << player << "  :  WINS";
        break;
      }
      if (borad[2] == borad[4] && borad[4] == borad[6])
      {
        cout << player << "  :  WINS";
        break;
      }
      if (borad[0] == borad[4] && borad[4] == borad[8])
      {
        cout << player << "  :  WINS";
        break;
      }
    }
    

    if (i == 8)
    {
      if (borad[0] != borad[1] && borad[1] == borad[2])
      {
        cout << "Draw";
        break;
      }
      if (borad[3] == borad[4] && borad[4] != borad[5])
      {
        cout << "Draw";
        break;
      }
      if (borad[6] != borad[7] && borad[7] == borad[8])
      {
        cout << "Draw";
        break;
      }
      if (borad[0] == borad[3] && borad[3] != borad[6])
      {
        cout << "Draw";
        break;
      }

      if (borad[1] != borad[4] && borad[4] == borad[7])
      {
        cout << "Draw";
        break;
      }
      if (borad[2] == borad[5] && borad[5] != borad[8])
      {
        cout << "Draw";
        break;
      }
      if (borad[2] != borad[4] && borad[4] == borad[6])
      {
        cout << "Draw";
        break;
      }
      if (borad[0] == borad[4] && borad[4] != borad[8])
      {
        cout << "Draw";
        break;
      }
    }
  }
}
