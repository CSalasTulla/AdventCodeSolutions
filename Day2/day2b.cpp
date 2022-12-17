#include <iostream>
#include <string>
using namespace std;
string str;
int score = 0;


int main()
{
    for(int i = 1; i<=2500;i++)
    {
        getline(cin,str);
        if (str == "A Y" )
        {
            score +=4;
        }
        else if(str == "B X")
        {
            score +=1;
        }
        else if(str == "C Z")
        {
            score +=7;
        }
        else if(str == "A X")
        {
            score += 3;
        }
        else if(str == "A Z")
        {
            score += 8;
        }
        else if(str == "B Y")
        {
            score += 5;
        }
        else if(str == "B Z")
        {
            score += 9;
        }
        else if(str == "C X")
        {
            score += 2;
        }
        else if(str == "C Y")
        {
            score += 6;
        }

    }

    cout << score << endl;
}