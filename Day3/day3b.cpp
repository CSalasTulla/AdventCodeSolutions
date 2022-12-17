/*--- Part Two ---
As you finish identifying the misplaced items, the Elves come to you with another issue.

For safety, the Elves are divided into groups of three. Every Elf carries a badge that identifies their group. For efficiency, within each group of three Elves, the badge is the only item type carried by all three Elves. That is, if a group's badge is item type B, then all three Elves will have item type B somewhere in their rucksack, and at most two of the Elves will be carrying any other item type.

The problem is that someone forgot to put this year's updated authenticity sticker on the badges. All of the badges need to be pulled out of the rucksacks so the new authenticity stickers can be attached.

Additionally, nobody wrote down which item type corresponds to each group's badges. The only way to tell which item type is the right one is by finding the one item type that is common between all three Elves in each group.

Every set of three lines in your list corresponds to a single group, but each group can have a different badge item type. So, in the above example, the first group's rucksacks are the first three lines:

vJrwpWtwJgWrhcsFMMfFFhFp
jqHRNqRjqzjGDLGLrsFMfFZSrLrFZsSL
PmmdzqPrVvPwwTWBwg
And the second group's rucksacks are the next three lines:

wMqvLMZHhHMvwLHjbvcjnnSBnvTQFn
ttgJtRGJQctTZtZT
CrZsJsPPZsGzwwsLwLmpwMDw
In the first group, the only item type that appears in all three rucksacks is lowercase r; this must be their badges. In the second group, their badge item type must be Z.

Priorities for these items must still be found to organize the sticker attachment efforts: here, they are 18 (r) for the first group and 52 (Z) for the second group. The sum of these is 70.

Find the item type that corresponds to the badges of each three-Elf group. What is the sum of the priorities of those item types?

--------------------------------------------Day 3b-----------------------------------------------------------------------------------------------------------*/

#include <iostream>
#include <queue>
using namespace std;

//Store input comand line
string str1;
string str2;
string str3;
//Store letter that matches
string letter;
//Count addition of score of each letter
int result = 0;

string l;

queue<string>first;
queue<string>second;
queue<string>third;

int main()
{
    //Loop checking every group of 3(every 3 lines)
    for(int i = 0; i <100; i++)
    {
        getline(cin,str1);                       //First line
        int length1 = str1.length();
        
        for(int j = 0; j < length1; j++)
        {
            l = str1[j];
            first.push(l);
        }                                       //First Line Stored in queue<string>first

        getline(cin,str2);                       //Second Line
        int length2 = str2.length();
    
        for(int k = 0; k < length2; k++)
        {
            l = str2[k];
            second.push(l);
        }                                       //Second Line Stored in queue<string>second

        getline(cin,str3);                      //Third Line
        int length3 = str3.length();

        for(int m = 0; m < length3; m++)
        {
            l = str3[m];
            third.push(l);
        }                                       //Third Line Stored in queue<string>third

        //letters of each line
        string ltr1;
        string ltr2;
        string ltr3;

        //Repeated words
        queue<string>r1;
        queue<string>r2;
        queue<string>r3;

        //checking if words repeated
        for(int n = 0; n < length1; n++)
        {
            ltr1 = first.front();
            first.pop();
            for (int q = 0 ; q < length2; q++)
            {
                ltr2 = second.front();
                second.pop();
                for (int s = 0 ; s < length3; s++)
                {
                    ltr3 = third.front();
                    third.pop();
                    if (ltr3 == ltr2 && ltr2 == ltr1) 
                    {
                        letter = ltr3;
                    }
                    third.push(ltr3);
                }
                second.push(ltr2);
            }
        }

        if     (letter == "a"){result += 1;}
        else if(letter == "b") {result += 2;}
        else if(letter == "c") {result += 3;}
        else if(letter == "d") {result += 4;}
        else if(letter == "e") {result += 5;}
        else if(letter == "f") {result += 6;}
        else if(letter == "g") {result += 7;}
        else if(letter == "h") {result += 8;}
        else if(letter == "i") {result += 9;}
        else if(letter == "j") {result += 10;}
        else if(letter == "k") {result += 11;}
        else if(letter == "l") {result += 12;}
        else if(letter == "m") {result += 13;}
        else if(letter == "n") {result += 14;}
        else if(letter == "o") {result += 15;}
        else if(letter == "p") {result += 16;}
        else if(letter == "q") {result += 17;}
        else if(letter == "r") {result += 18;}
        else if(letter == "s") {result += 19;}
        else if(letter == "t") {result += 20;}
        else if(letter == "u") {result += 21;}
        else if(letter == "v") {result += 22;}
        else if(letter == "w") {result += 23;}
        else if(letter == "x") {result += 24;}
        else if(letter == "y") {result += 25;}
        else if(letter == "z") {result += 26;}
        else if(letter == "A") {result += 27;}
        else if(letter == "B") {result += 28;}
        else if(letter == "C") {result += 29;}
        else if(letter == "D") {result += 30;}
        else if(letter == "E") {result += 31;}
        else if(letter == "F") {result += 32;}
        else if(letter == "G") {result += 33;}
        else if(letter == "H") {result += 34;}
        else if(letter == "I") {result += 35;}
        else if(letter == "J") {result += 36;}
        else if(letter == "K") {result += 37;}
        else if(letter == "L") {result += 38;}
        else if(letter == "M") {result += 39;}
        else if(letter == "N") {result += 40;}
        else if(letter == "O") {result += 41;}
        else if(letter == "P") {result += 42;}
        else if(letter == "Q") {result += 43;}
        else if(letter == "R") {result += 44;}
        else if(letter == "S") {result += 45;}
        else if(letter == "T") {result += 46;}
        else if(letter == "U") {result += 47;}
        else if(letter == "V") {result += 48;}
        else if(letter == "W") {result += 49;}
        else if(letter == "X") {result += 50;}
        else if(letter == "Y") {result += 51;}
        else if(letter == "Z") {result += 52;}

        //Deleting queues to use them again for next group
        while(!first.empty()){first.pop();}
        while(!second.empty()){second.pop();}
        while(!third.empty()){third.pop();}
        

    }
    cout << "Result: " << result << endl;
}