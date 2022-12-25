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
    getline(cin,str);

    for(int i = 0; i < str.length(); i++)
    {
        bool repeated = false;
        for(j = i; j < 14+i;j++)
        {
            for(k = i; k < 14+i;k++)
            {
                if (j != k && str[j] == str[k])
                {
                    repeated = true;
                    break;
                }
            }
            if (repeated == true) { break; }
        }

        if(repeated == false)
        {
            cout << i + 14 << endl;
            return 0;
        }
    }
}