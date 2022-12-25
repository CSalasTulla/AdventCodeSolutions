/*--- Part Two ---
Your device's communication system is correctly detecting packets, but still isn't working. It looks like it also needs to look for messages.

A start-of-message marker is just like a start-of-packet marker, except it consists of 14 distinct characters rather than 4.

Here are the first positions of start-of-message markers for all of the above examples:

mjqjpqmgbljsphdztnvjfqwrcgsmlb: first marker after character 19
bvwbjplbgvbhsrlpgdmjqwftvncz: first marker after character 23
nppdvjthqldpwncqszvftbrmjlhg: first marker after character 23
nznrnfrfntjfmvfwmzdfjlvtqnbhcprsg: first marker after character 29
zcfzfwzzqfrljwzlrfnpqdbhtmscgvjw: first marker after character 26
How many characters need to be processed before the first start-of-message marker is detected?
-----------------------------------Day6 b-----------------------------------------------------------------------------------------------------------------*/

#include <iostream>
using namespace std;

string str;
int j,k;

int main()
{
getline(cin,str);                               //Input of the string pasted on the command line

    for(int i = 0; i < str.length(); i++)       //for loop to go through the whole string
    {
        bool repeated = false;                  // setting the boolean variable "repeated" to false to make sure every time we go throught 
        for(j = i; j < 14+i;j++)                //the loop we set it again to false for loop to go through the 14 next letters 
        {
            for(k = i; k < 14+i;k++)            //Second for loop to go throught the 14 next letters to compared them with the ones from 
            {                                   //the firts loop and check if they the letters are repeated
                if (j != k && str[j] == str[k]) //(j != k) makes sure that we are not counting as repeated the 2 same characters (if j=k then
                {                               //it is going to be repeated obviously and we want to exclude this case from counting it repeated)
                    repeated = true;
                    break;
                }
            }
            if (repeated == true) { break; }    //Breakig the next loop to make sure we leave both loops and we go to the next character
        }

        if(repeated == false)                   //This would be the case we go through the whole 14 letters and we do not have repeated letter
        {                                       //We know this because we have the boolean variable set to false, meaning we have not foud any repeated letter
            cout << i + 14 << endl;
            return 0;
        }
    }
}