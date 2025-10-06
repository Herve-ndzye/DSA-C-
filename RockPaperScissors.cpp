#include <iostream>
using namespace std;
string rps(string a,string b)
{
   string result;
   bool c=false;
   a=="Rock" && b=="Scissors"? result ="Player 1 wins ":c=true;
   a=="Scissors" && b=="Rock"? result = "Player 2 Wins":c=true;
   a=="Scissors" && b=="Paper"? result = "Player 1 wins":c=true;
   a=="Paper" && b =="Scissors"?result = "Player 2 wins":c=true;
   a=="Paper" && b=="Rock"?result = "Player 1 wins":c=true;
   a=="Rock" && b=="Paper"?result = "Player 2 wins": c=true;
   a==b?result = "TIE":c=true;
   return result;
}