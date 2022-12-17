/*This list represents the Calories of the food carried by five Elves:

The first Elf is carrying food with 1000, 2000, and 3000 Calories, a total of 6000 Calories.
The second Elf is carrying one food item with 4000 Calories.
The third Elf is carrying food with 5000 and 6000 Calories, a total of 11000 Calories.
The fourth Elf is carrying food with 7000, 8000, and 9000 Calories, a total of 24000 Calories.
The fifth Elf is carrying one food item with 10000 Calories.
In case the Elves get hungry and need extra snacks, they need to know which Elf to ask: they'd like to know how many Calories are being carried by the Elf carrying the most Calories. In the example above, this is 24000 (carried by the fourth Elf).

Find the Elf carrying the most Calories. How many total Calories is that Elf carrying?
-------------------------------------Day1---------------------------------------------------------------------------------------------------------------------------------------------------------------*/

#include <iostream>
#include <string>
using namespace std;
int temp,store,first,thrd,sec;
string str;


int main() 
{
    for(int i = 1 ;i < 2249; i++) // 2248 is to set the number of lines of imput we are working with
    {
        //getting input of day1.txt stored into str
        getline(cin,str);
        if(str=="")               //When data of line ends we execute the code inside if statement
        {
            if(store>first)         //This 3 If statements are checking what are the 3 biggest values and storing them if needed
            {
                thrd = sec;
                sec = first;
                first=store;
            }
            else if(store>sec)
            {
                thrd = sec;
                sec = store;
            }
            else if(store>thrd)
            {
                thrd = store;
            }
            store=0;
            continue;
        }
        temp=stod(str);
        store+=temp;
    }

    cout << endl << "Result Day 1-first section: " << first << endl;
    cout << "Result Day 1-secondsection: " << first+sec+thrd << endl;
    return 0;
}
