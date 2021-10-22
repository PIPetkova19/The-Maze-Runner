#include <iostream>

using namespace std;



void mazeGame()

{

    int choice;

    cout<<"                                                  THE RUNNING MAZE                                 " <<endl<<endl;

    cout<<"                                                     Maze Game                                     " <<endl<<endl;

    cout<< "                           =========================================================              " <<endl<<endl<<endl;




    cout << "                          ---------------------------------------------------------              " << endl << endl;

    cout << "                          ||                     1. Start Game                   ||              " << endl << endl;

    cout << "                          ||                                                     ||              " << endl << endl;

    cout << "                          ||                                                     ||              " << endl << endl;

    cout << "                          ||                                                     ||              " << endl;

    cout << "                          ||                     2. Quit                         ||              " << endl;

    cout<< "                           ---------------------------------------------------------              " <<endl<<endl<<endl;

    cout << "                                           Please select your choice! ";



    cin >> choice;

    if (choice == 1)

    {

        //maze game

    }

    

    else if (choice == 2)

    {

        system("PAUSE");

    }

    else if (choice != 2)

    {

        cout << "                                                  Incorrect Input!" << endl;

        system("PAUSE");

    }

}




int main()

{

    system("PAUSE");

    system("CLS");

    mazeGame();

}