#include <iostream>
#include <conio.h>
#include <windows.h>
#include <time.h>

using namespace std;
int playMenuChoice;
int mainMenuChoice;
string winPlayer;
string lossPlayer;
string player;
char playerMark;
int bordchoice;
string player1Name;
string player2Name;
int random;
void MainMenu();
void PlayerVsPlayer();
int boradPVP();
void GameDrawMessage();
void GameDrawMessagePVC();
void GameWinMessage();
void GameWinMessagePVC();
void PlayerVsComputer();
void boradPVC();

    int main()
{
  do
  {
     MainMenu();
      if (mainMenuChoice == 1)
      {
        PlayerVsPlayer();
        boradPVP();
      }
      else if (mainMenuChoice == 2)
      {
        PlayerVsComputer();
        boradPVC();
      }
    }while (mainMenuChoice != 3);
}


void MainMenu()
{
  int menuchoice = 1;
  char key;
  do
  {
    cout << "\n ________________________________ \n";
    cout << "|            Main Menu           |\n";
    cout << "|________________________________|\n";
    cout << "|                                |\n";
    cout << "|" << (menuchoice == 1 ? "->" : "  ") << " = Player vs Player           |\n";
    cout << "|                                |\n";
    cout << "|                                |\n";
    cout << "|" << (menuchoice == 2 ? "->" : "  ") << " = Player vs Computer         |\n";
    cout << "|                                |\n";
    cout << "|                                |\n";
    cout << "|" << (menuchoice == 3 ? "->" : "  ") << " = Exit                       |\n";
    cout << "|                                |\n";
    cout << "|Use UP/Down Arrow KEY           |\n";
    cout << "|                                |\n";
    cout << "|Press Enter to Select           |\n";
    cout << "|________________________________|\n";
    cout << "|";
    key = getch();

    switch (key)
    {
    case 72:
      menuchoice = (menuchoice - 1 < 1 ? 3 : menuchoice - 1);
      break;
    case 80:
      menuchoice = (menuchoice + 1 > 3 ? 1 : menuchoice + 1);

    default:
      break;
    }
    system("CLS");
  } while (key != 13);

  switch (menuchoice)
  {
  case 1:
    mainMenuChoice = menuchoice;
    break;

  case 2:
    mainMenuChoice = menuchoice;
    break;
  case 3:
    mainMenuChoice = menuchoice;
    break;

  default:
    break;
  }
}

void PlayerVsPlayer()
{
  string player1Name;
  string player2Name;

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

  char key;
  int tosschoice = 1;
  do
  {

    cout << "\n ________________________________ \n";
    cout << "|            Play Menu           |\n";
    cout << "|________________________________|\n";
    cout << "|                                |\n";
    cout << "|" << (tosschoice == 1 ? "->" : "  ") << " = Heads                      |\n";
    cout << "|                                |\n";
    cout << "|" << (tosschoice == 2 ? "->" : "  ") << " = Tails                      |\n";
    cout << "|                                |\n";
    cout << "|Use UP/Down Arrow KEY           |\n";
    cout << "|                                |\n";
    cout << "|Press Enter to Select           |\n";
    cout << "|________________________________|\n";
    cout << "|";
    key = getch();
    system("CLS");

    switch (key)
    {
    case 72:
      tosschoice = (tosschoice - 1 < 1 ? 2 : tosschoice - 1);

      break;

    case 80:
      tosschoice = (tosschoice + 1 > 2 ? 1 : tosschoice + 1);
      break;

    default:

      break;
    }
    system("CLS");

  } while (key != 13);
  srand(time(0));
  int random = rand() % 2;
  if (tosschoice == 1)
  {
    if (random == 0)
    {

      cout << "\n ________________________________ \n";
      cout << "|              TOSS              |\n";
      cout << "|________________________________|\n";
      cout << "|                                |\n";
      cout << "       " << player1Name << "        \n";
      cout << "|                WINS            |\n";
      cout << "|                                |\n";
      cout << "|Press any key to Countine       |\n";
      cout << "|________________________________|\n";
      winPlayer = player1Name;
      lossPlayer = player2Name;
      getch();
      system("CLS");
    }
    else
    {
      cout << "\n ________________________________ \n";
      cout << "|              TOSS              |\n";
      cout << "|________________________________|\n";
      cout << "|                                |\n";
      cout << "      " << player2Name << "       \n";
      cout << "|                 WINS           |\n";
      cout << "|                                |\n";
      cout << "|Press any key to Countine       |\n";
      cout << "|________________________________|\n";
      winPlayer = player2Name;
      lossPlayer = player1Name;
      getch();
      system("CLS");
    }
  }
  else if (tosschoice == 2)
  {
    if (random == 1)
    {
      cout << "\n ________________________________ \n";
      cout << "|              TOSS              |\n";
      cout << "|________________________________|\n";
      cout << "|                                |\n";
      cout << "      " << player2Name << "       \n";
      cout << "|                 WINS           |\n";
      cout << "|                                |\n";
      cout << "|Press any key to Countine       |\n";
      cout << "|________________________________|\n";
      winPlayer = player2Name;
      lossPlayer = player1Name;
      getch();
      system("CLS");
    }
    else
    {
      cout << "\n ________________________________ \n";
      cout << "|              TOSS              |\n";
      cout << "|________________________________|\n";
      cout << "|                                |\n";
      cout << "      " << player1Name << "       \n";
      cout << "|                 WINS           |\n";
      cout << "|                                |\n";
      cout << "|Press any key to Countine       |\n";
      cout << "|________________________________|\n";
      winPlayer = player1Name;
      lossPlayer = player2Name;
      getch();
      system("CLS");
    }
  }
}

int boradPVP()
{
  
  char borad[9] = {'0', '1', '2', '3', '4', '5', '6', '7', '8'};
  for (int i = 0; i < 9; i++)
  {

    cout << "\n ________________________________ \n";
    cout << "      " << winPlayer << " (X) "
         << "  Vs  " << lossPlayer << " (O)"
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
    cout << "|Press Only Given Keys on Borad  |\n";
    cout << "|Other wise game will crash      |\n";
    cout << "|________________________________|\n";

    if (i % 2 == 0)
    {
      player = winPlayer;
      playerMark = 'X';
    }
    else
    {
      player = lossPlayer;
      playerMark = 'O';
    }

    cout << "| "
         << "Enter Option :" << player << " : ";
    cin >> bordchoice;
    system("CLS");
    
    if (bordchoice >= 0 && bordchoice < 9)
    {
      if (borad[bordchoice] != 'X' && borad[bordchoice] != 'O')
      {
        borad[bordchoice] = playerMark;
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

    
    if (i >= 4 && i <= 8)
    {
      if (borad[0] == borad[1] && borad[1] == borad[2])
      {
        GameWinMessage(); 
        break;
      }
      if (borad[3] == borad[4] && borad[4] == borad[5])
      {
        GameWinMessage();
        break;
      }
      if (borad[6] == borad[7] && borad[7] == borad[8])
      {
        GameWinMessage();
        break;
      }
      if (borad[0] == borad[3] && borad[3] == borad[6])
      {
        GameWinMessage();
        break;

        system("CLS");
        break;
      }

      if (borad[1] == borad[4] && borad[4] == borad[7])
      {
        GameWinMessage();
        break;
      }
      if (borad[2] == borad[5] && borad[5] == borad[8])
      {
        GameWinMessage();
        break;
        
      }
      if (borad[2] == borad[4] && borad[4] == borad[6])
      {
        GameWinMessage();
        break;
      }
      if (borad[0] == borad[4] && borad[4] == borad[8])
      {
        GameWinMessage();
        break;
      }
    }

    if (i == 8)
    {
      if (borad[0] != borad[1] && borad[1] == borad[2])
      {
        GameDrawMessage();
        break;
      }
      if (borad[3] == borad[4] && borad[4] != borad[5])
      {
        GameDrawMessage();
        break;
      }
      if (borad[6] != borad[7] && borad[7] == borad[8])
      {
        GameDrawMessage();
        break;
      }
      if (borad[0] == borad[3] && borad[3] != borad[6])
      {
        GameDrawMessage();
        break;
      }

      if (borad[1] != borad[4] && borad[4] == borad[7])
      {
        GameDrawMessage();
        break;
      }
      if (borad[2] == borad[5] && borad[5] != borad[8])
      {
        GameDrawMessage();
        break;
        ;
      }
      if (borad[2] != borad[4] && borad[4] == borad[6])
      {
        GameDrawMessage();
        break;
      }
      if (borad[0] == borad[4] && borad[4] != borad[8])
      {
        GameDrawMessage();
        break;
      }
    }
  }
  return (bordchoice);
}



void GameWinMessage()
{
  char key;
  cout << "\n ________________________________ \n";
  cout << "|              Game              |\n";
  cout << "|________________________________|\n";
  cout << "|                                |\n";
  cout << "      " << player << "            \n";
  cout << "|                 WINS           |\n";
  cout << "|                                |\n";
  cout << "|Press R key to Restart game     |\n";
  cout << "|Press Esc key to Game Menu      |\n";
  cout << "|________________________________|\n";
  cout << "|";
  key = getch();
  system("CLS");
  if (key == 27)
  {
    MainMenu();
  }
  else if (key == 114)
  {
    boradPVP();
  }

  
}
void GameDrawMessage()
{
  char key;
  cout << "\n ________________________________ \n";
  cout << "|              Game              |\n";
  cout << "|________________________________|\n";
  cout << "|                                |\n";
  cout << "|              Draw              |\n";
  cout << "|                                |\n";
  cout << "|Press R key to Restart game     |\n";
  cout << "|Press Esc key to Game Menu      |\n";
  cout << "|________________________________|\n";
  cout << "|";
  key = getch();
  system("CLS");
  if (key == 27)
  {
    MainMenu();
  }
  else if (key == 114)
  {
    boradPVP();
  }

  
}
void GameWinMessagePVC()
{
  char key;
  cout << "\n ________________________________ \n";
  cout << "|              Game              |\n";
  cout << "|________________________________|\n";
  cout << "|                                |\n";
  cout << "      " << player << "            \n";
  cout << "|                 WINS           |\n";
  cout << "|                                |\n";
  cout << "|Press R key to Restart game     |\n";
  cout << "|Press Esc key to Game Menu      |\n";
  cout << "|________________________________|\n";
  cout << "|";
  key = getch();
  system("CLS");
  if (key == 27)
  {
    MainMenu();
  }
  else if (key == 114)
  {
    boradPVC();
  }
}
void GameDrawMessagePVC()
{
  char key;
  cout << "\n ________________________________ \n";
  cout << "|              Game              |\n";
  cout << "|________________________________|\n";
  cout << "|                                |\n";
  cout << "|              Draw              |\n";
  cout << "|                                |\n";
  cout << "|Press R key to Restart game     |\n";
  cout << "|Press Esc key to Game Menu      |\n";
  cout << "|________________________________|\n";
  cout << "|";
  key = getch();
  system("CLS");
  if (key == 27)
  {
    MainMenu();
  }
  else if (key == 114)
  {
    boradPVC();
  }
}

void PlayerVsComputer()
{
  

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
    cout << "|Press Only Given Keys on Borad  |\n";
    cout << "|Other wise game will crash      |\n";
    cout << "|________________________________|\n";

    if (i % 2 == 0)
    {

      player = player1Name;
      playerMark = 'X';

      cout << "| "
           << "Enter Option :" << player << " : ";
      cin >> bordchoice;
    }
    else
    {
      player = player2Name;
      playerMark = 'O';

      srand(time(0));
      random = rand() % 8;
      bordchoice = random;
    }
    system("CLS");


    if (bordchoice >= 0 && bordchoice < 9)
    {
      if (borad[bordchoice] != 'X' && borad[bordchoice] != 'O')
      {
        borad[bordchoice] = playerMark;
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

    if (i >= 4 && i <= 8)
    {
      if (borad[0] == borad[1] && borad[1] == borad[2])
      {
        GameWinMessagePVC();
        break;
      }
      if (borad[3] == borad[4] && borad[4] == borad[5])
      {
        GameWinMessagePVC();
        break;
      }
      if (borad[6] == borad[7] && borad[7] == borad[8])
      {
        GameWinMessagePVC();
        break;
      }
      if (borad[0] == borad[3] && borad[3] == borad[6])
      {
        GameWinMessagePVC();
        break;

        system("CLS");
        break;
      }

      if (borad[1] == borad[4] && borad[4] == borad[7])
      {
        GameWinMessagePVC();
        break;
      }
      if (borad[2] == borad[5] && borad[5] == borad[8])
      {
        GameWinMessagePVC();
        break;
      }
      if (borad[2] == borad[4] && borad[4] == borad[6])
      {
        GameWinMessagePVC();
        break;
      }
      if (borad[0] == borad[4] && borad[4] == borad[8])
      {
        GameWinMessagePVC();
        break;
      }
    }

    if (i == 8)
    {
      if (borad[0] != borad[1] && borad[1] == borad[2])
      {
        GameDrawMessagePVC();
        break;
      }
      if (borad[3] == borad[4] && borad[4] != borad[5])
      {
        GameDrawMessagePVC();
        break;
      }
      if (borad[6] != borad[7] && borad[7] == borad[8])
      {
        GameDrawMessagePVC();
        break;
      }
      if (borad[0] == borad[3] && borad[3] != borad[6])
      {
        GameDrawMessagePVC();
        break;
      }

      if (borad[1] != borad[4] && borad[4] == borad[7])
      {
        GameDrawMessagePVC();
        break;
      }
      if (borad[2] == borad[5] && borad[5] != borad[8])
      {
        GameDrawMessagePVC();
        break;
        ;
      }
      if (borad[2] != borad[4] && borad[4] == borad[6])
      {
        GameDrawMessagePVC();
        break;
      }
      if (borad[0] == borad[4] && borad[4] != borad[8])
      {
        GameDrawMessagePVC();
        break;
      }
    }
  }
}
