#include <iostream>
#include <stdlib.h>
#include <cmath>
#include <ctime>
#include <iomanip>
#include <vector>
#include <windows.h>
using namespace std;

int numBet, num1, num2, num3, num4, num5, num6, num7, num8, num9, num10, bet;
void PayTable() {

        //payout table function
        cout <<"\t\t\t       Pay Table \n";
        cout << "+-------------------------------------------------------------------+ \n";
        cout << "|1 Spot Pays: Catch 1:      3xBet | 2 Spot Pays: Catch 2:     12xBet| \n";
        cout << "|3 Spot Pays: Catch 3:     42xBet | 4 Spot Pays: Catch 4:    120xBet| \n";
        cout << "|             Catch 2:      1xBet |              Catch 3:      3xBet| \n";
        cout << "|5 Spot Pays: Catch 5:    800xBet |              Catch 2:      1xBet| \n";
        cout << "|             Catch 4:      9xBet | 6 Spot Pays: Catch 6:   1500xBet| \n";
        cout << "|             Catch 3:      1xBet |              Catch 5:     88xBet| \n";
        cout << "|7 Spot Pays: Catch 7:   7000xBet |              Catch 4:      4xBet| \n";
        cout << "|             Catch 6:    350xBet |              Catch 3:      1xBet| \n";
        cout << "|             Catch 5:     20xBet | 8 Spot Pays: Catch 8:  20000xBet| \n";
        cout << "|             Catch 4:      2xBet |              Catch 7:   1500xBet| \n";
        cout << "|9 Spot Pays: Catch 9:  25000xBet |              Catch 6:     90xBet| \n";
        cout << "|             Catch 8:   4000xBet |              Catch 5:      9xBet| \n";
        cout << "|             Catch 7:    300xBet |10 Spot Pays: Catch 10: 50000xBet| \n";
        cout << "|             Catch 6:     43xBet |              Catch 9:   8000xBet| \n";
        cout << "|             Catch 5:      4xBet |              Catch 8:   2000xBet| \n";
        cout << "|                                 |              Catch 7:    260xBet| \n";
        cout << "|                                 |              Catch 6:     40xBet| \n";
        cout << "|                                 |              Catch 5:      4xBet| \n";
        cout << "+-------------------------------------------------------------------+\n\n";


}


void BetCondition() {

    //prompt user for bet amount if amount of numbers bet is 10.
    if(numBet == 10)    {
        cout <<"\nYou may bet 2, 5, 10, or 20 credits. ";
        while(!(cin >> bet)) {  //check for non integer input.
              cout <<"\nInvalid bet. Please enter number. ";
              cin.clear();
              cin.ignore(50, '\n');
              }

        while(!(bet == 2 || bet == 5 || bet == 10 || bet == 20))  { //check for valid integer input.
            cout << "\nInvalid bet amount. Please enter 2, 5, 10, or 20. ";
            while(!(cin >> bet)) {
                cout <<"\nInvalid bet. Please enter 2, 5, 10, or 20. ";
                cin.clear();
                cin.ignore(50, '\n');
            }
        }
    }
    //prompt user for bet if amount of numbers bet is less than 10
    else    {
        cout <<"\nYou may bet 1, 5, 10, or 20 credits. ";
        while(!(cin >> bet)) {  //check user input for non integer.
            cout << "\nInvalid bet. Please enter a number. ";
            cin.clear();
            cin.ignore(50, '\n');
              }
        while(!(bet == 1 || bet == 5 || bet == 10 || bet == 20)){ //check user input for valid integer.
            cout << "\nInvalid bet amount. Please enter 1, 5, 10, or 20. ";
            while(!(cin >> bet)){
                  cout <<"\nInvalid bet. Please enter a number. ";
                  cin.clear();
                  cin.ignore(50, '\n');
                  }
        }
    }

}


void BetPrompt() {

while(true) {

    //prompt user for how many numbers to bet.

    cout << "\nYou may bet anywhere from 1 to 10 numbers between (1-80). " << endl << endl << "How many numbers would you like to bet? ";
    while(!(cin >> numBet))   { //check for valid integer input input
        cout <<"\nSorry, please enter a number. ";
        cin.clear();
        cin.ignore(100, '\n');
    }
    cout << endl;


    switch(numBet) {

    case 1:
        cout << "What number would you like to choose for your 1 Spot bet? ";
        cin >> num1;
        break;


    case 2:
        cout << "What two numbers would you like to choose for your 2 Spot bet? ";
        cin >> num1 >> num2;
        break;

    case 3:
        cout << "What three numbers would you like to choose for your 3 Spot bet? ";
        cin >> num1 >> num2 >> num3;
        break;

    case 4:
        cout << "What four numbers would you like to choose for your 4 Spot bet? ";
        cin >> num1 >> num2 >> num3 >> num4;
        break;

    case 5:
        cout << "What five numbers would you like to choose for your 5 Spot bet? ";
        cin >> num1 >> num2 >> num3 >> num4 >> num5;
        break;

    case 6:
        cout <<"What six numbers would you like to choose for your 6 Spot bet? ";
        cin >> num1 >> num2 >> num3 >> num4 >> num5 >> num6;
        break;

    case 7:
        cout <<"What seven numbers would you like to choose for your 7 Spot bet? ";
        cin >> num1 >> num2 >> num3 >> num4 >> num5 >> num6 >> num7;
        break;

    case 8:
        cout <<"What eight numbers would you like to choose for your 8 Spot bet? ";
        cin >> num1 >> num2 >> num3 >> num4 >> num5 >> num6 >> num7 >> num8;
        break;

    case 9:
        cout <<"What nine numbers would you like to choose for your 9 Spot bet? ";
        cin >> num1 >> num2 >> num3 >> num4 >> num5 >> num6 >> num7 >> num8 >> num9;
        break;

    case 10:
        cout <<"What 10 numbers would you like to choose for your 10 Spot bet? ";
        cin >> num1 >> num2 >> num3 >> num4 >> num5 >> num6 >> num7 >> num8 >> num9 >> num10;
        break;


    default:
        cout <<"Sorry you can't bet that many numbers." << endl;
        continue;

    }
    break;
   }
}
int main() {

    int Count = 0;
    int r, z;
    int j = 1;
    int a = 0;
    double payout;

    srand(time(0));
    vector<int> keno1(80);
    vector<int> keno2(20);

    cout << "\t\t\tWelcome to my Keno game! \n\n";

    //prints payout table
    PayTable();

    cout <<"Press 'Enter' when you're ready to play. ";
    cin.get();

    //prompt user for how many numbers to bet
    BetPrompt();

    //prompt user for bet amount
    BetCondition();

    //create numbers 1-80
    for(int i = 0; i < 80; i++) {

        keno1[i] = j;
        j++;

    }

    int t = 0;

        cout << endl << "The winning numbers are";
        while (t < 3){
            cout <<".";
            Sleep(750);
            t++;
        }
    cout << endl;

    //randomly generates 20 non repeating integers between 1-80
    for (int k = 80; k > 60; k--)   {

        r = rand() % k;
        cout <<"+--+" << endl;
        cout << "|" << setw(2) << keno1[r] << "|" << endl;
        cout <<"+--+" << endl;
        keno2[a] = keno1[r]; //2nd vector to store the 20 random numbers
        a++;
        Sleep(1000);


        while (r < k - 1 ){
            keno1[r] = keno1[r + 1];
            r++;
        }
    }

        if (numBet == 1)    {

               //iteration to check if the number bet matches any of the random numbers.
               for(z = 0; z < 20; z++){

                if(keno2[z] == num1){
                    Count = Count + 1;
                }
               }

                if(Count == 1){
                    cout << "You win." << endl;
                    payout = bet * 3;
                }
                else    {
                    cout <<"Sorry, you lose. " << endl;
                    payout = bet * 0;
                }

            }

        if(numBet == 2) {

                for(z = 0; z < 20; z++) {

                    if(keno2[z] == num1 || keno2[z] == num2)    {
                        Count = Count + 1;

                    }
                }
                    if(Count == 2){
                        cout << "You win! You selected both numbers correctly! " << endl;
                        payout  = bet * 12;
                    }
                    else {
                        cout <<"Sorry you lose. " << endl;
                        payout = bet * 0;
                    }
        }
        if(numBet == 3) {

                for(z = 0; z < 20; z++) {

                    if(keno2[z] == num1 || keno2[z] == num2 || keno2[z] == num3)    {
                        Count = Count + 1;

                    }
                }
                    if(Count == 3){
                       cout << "You win! You selected all 3 numbers correctly! " << endl;
                        payout = bet * 42;
                    }

                    if(Count == 2) {
                        cout <<"You win! You selected 2 numbers correctly! " << endl;
                        payout = bet * 1;
                    }
                    else {
                       cout <<"Sorry you lose. " << endl;
                        payout = bet * 0;
                    }


        }

        if(numBet == 4) {

                for(z = 0; z < 20; z++) {

                    if(keno2[z] == num1 || keno2[z] == num2 || keno2[z] == num3 || keno2[z] == num4)    {
                        Count = Count + 1;

                    }
                }
                    if(Count == 4){
                        cout << "You win! You selected all 4 numbers correctly! " << endl;
                        payout = bet * 42;
                    }

                    if(Count == 3) {
                        cout <<"You win! You selected 3 numbers correctly! " << endl;
                        payout = bet * 3;
                    }

                    if(Count == 2)  {
                        cout <<"You win! You selected 2 numbers correctly! " << endl;
                        payout = bet * 1;
                    }
                    else {
                        cout <<"Sorry you lose. " << endl;
                        payout = bet * 0;
                    }


        }

        if(numBet == 5) {

                for(z = 0; z < 20; z++) {

                    if(keno2[z] == num1 || keno2[z] == num2 || keno2[z] == num3 || keno2[z] == num4 || keno2[z] == num5)    {
                        Count = Count + 1;

                    }
                }
                    if(Count == 5)  {
                        cout << "You win! You selected all 5 numbers correctly! " << endl;
                        payout = bet * 800;
                    }

                    if(Count == 4) {
                        cout <<"You win! You selected 4 numbers correctly! " << endl;
                        payout = bet * 9;
                    }

                    if(Count == 3)  {
                        cout <<"You win! You selected 3 numbers correctly! " << endl;
                        payout = bet * 1;
                    }
                    else {
                        cout <<"Sorry you lose. " << endl;
                        payout = bet * 0;
                    }


        }


        if(numBet == 6) {

                for(z = 0; z < 20; z++) {

                    if(keno2[z] == num1 || keno2[z] == num2 || keno2[z] == num3 || keno2[z] == num4 || keno2[z] == num5 || keno2[z] == num6)    {
                        Count = Count + 1;

                    }
                }
                    if(Count == 6)  {
                        cout << "You win! You selected all 6 numbers correctly! " << endl;
                        payout = bet * 1500;
                    }

                    if(Count == 5) {
                        cout <<"You win! You selected 5 numbers correctly! " << endl;
                        payout = bet * 88;
                    }

                    if(Count == 4)  {
                        cout <<"You win! You selected 4 numbers correctly! " << endl;
                        payout = bet * 4;
                    }

                    if(Count == 3)  {
                        cout <<"You win! You selected 3 numbers correctly! " << endl;
                        payout = bet * 1;
                    }

                    else {
                        cout <<"Sorry you lose. " << endl;

                    }


        }

        if(numBet == 7) {

                for(z = 0; z < 20; z++) {

                    if(keno2[z] == num1 || keno2[z] == num2 || keno2[z] == num3 || keno2[z] == num4 || keno2[z] == num5 || keno2[z] == num6 || keno2[z] == num7)    {
                        Count = Count + 1;

                    }
                }
                    if(Count == 7)  {
                        cout << "You win! You selected all 7 numbers correctly! " << endl;
                        payout = bet * 7000;
                    }

                    if(Count == 6) {
                        cout <<"You win! You selected 6 numbers correctly! " << endl;
                        payout = bet * 350;
                    }

                    if(Count == 5)  {
                        cout <<"You win! You selected 5 numbers correctly! " << endl;
                        payout = bet * 20;
                    }

                    if(Count == 4)  {
                        cout <<"You win! You selected 4 numbers correctly! " << endl;
                        payout = bet * 2;
                    }

                    else {
                        cout <<"Sorry you lose. " << endl;
                        payout = bet * 0;
                    }


        }

        if(numBet == 8) {

                for(z = 0; z < 20; z++) {

                    if(keno2[z] == num1 || keno2[z] == num2 || keno2[z] == num3 || keno2[z] == num4 || keno2[z] == num5 || keno2[z] == num6 || keno2[z] == num7 || keno2[z] == num8)    {
                        Count = Count + 1;

                    }
                }
                    if(Count == 8)  {
                        cout << "You win! You selected all 8 numbers correctly! " << endl;
                        payout = bet * 20000;
                    }

                    if(Count == 7) {
                        cout <<"You win! You selected 7 numbers correctly! " << endl;
                        payout = bet * 1500;
                    }

                    if(Count == 6)  {
                        cout <<"You win! You selected 6 numbers correctly! " << endl;
                        payout = bet * 90;
                    }

                    if(Count == 5)  {
                        cout <<"You win! You selected 5 numbers correctly! " << endl;
                        payout = bet * 1;
                    }

                    else {
                        cout <<"Sorry you lose. " << endl;
                        payout = bet * 0;
                    }


        }

        if(numBet == 9) {

                for(z = 0; z < 20; z++) {

                    if(keno2[z] == num1 || keno2[z] == num2 || keno2[z] == num3 || keno2[z] == num4 || keno2[z] == num5 || keno2[z] == num6 || keno2[z] == num7 || keno2[z] == num8 || keno2[z] == num9)    {
                        Count = Count + 1;

                    }
                }
                    if(Count == 9)  {
                        cout << "You win! You selected all 9 numbers correctly! " << endl;
                        payout = bet * 25000;
                    }

                    if(Count == 8) {
                        cout <<"You win! You selected 8 numbers correctly! " << endl;
                        payout = bet * 4000;
                    }

                    if(Count == 7)  {
                        cout <<"You win! You selected 7 numbers correctly! " << endl;
                        payout = bet * 300;
                    }

                    if(Count == 6)  {
                        cout <<"You win! You selected 6 numbers correctly! " << endl;
                        payout = bet * 43;
                    }

                    if(Count == 5)  {
                        cout <<"You win! You selected 5 numbers correctly! " << endl;
                        payout = bet * 4;
                    }

                    else {
                        cout <<"Sorry you lose. " << endl;
                        payout = bet * 0;
                    }


        }

        if(numBet == 10) {

                for(z = 0; z < 20; z++) {

                    if(keno2[z] == num1 || keno2[z] == num2 || keno2[z] == num3 || keno2[z] == num4 || keno2[z] == num5 || keno2[z] == num6 || keno2[z] == num7 || keno2[z] == num8 || keno2[z] == num9 || keno2[z] == num10)    {
                        Count = Count + 1;

                    }
                }
                    if(Count == 10)  {
                        cout << "You win! You selected all 10 numbers correctly! " << endl;
                        payout = bet * 25000;
                    }

                    if(Count == 9) {
                        cout <<"You win! You selected 8 numbers correctly! " << endl;
                        payout = bet * 4000;
                    }

                    if(Count == 8)  {
                        cout <<"You win! You selected 7 numbers correctly! " << endl;
                        payout = bet * 1000;
                    }

                    if(Count == 7)  {
                        cout <<"You win! You selected 6 numbers correctly! " << endl;
                        payout = bet * 130;
                    }

                    if(Count == 6)  {
                        cout <<"You win! You selected 5 numbers correctly! " << endl;
                        payout = bet * 20;
                    }

                    if(Count == 5)  {
                        cout <<"You win! You selected 5 numbers correctly! " << endl;
                        payout = bet * 2;
                    }

                    else {
                        cout <<"Sorry you lose. " << endl;
                        payout = bet * 0;
                    }


        }

        if(payout > 0){
            cout << endl << "Winnings: " << payout <<" credits. " << endl;
        }


        }







