/*One Elf has the important job of loading all of the rucksacks with supplies for the jungle journey. Unfortunately, that Elf didn't quite follow the packing instructions, and so a few items now need to be rearranged.

Each rucksack has two large compartments. All items of a given type are meant to go into exactly one of the two compartments. The Elf that did the packing failed to follow this rule for exactly one item type per rucksack.

The Elves have made a list of all of the items currently in each rucksack (your puzzle input), but they need your help finding the errors. Every item type is identified by a single lowercase or uppercase letter (that is, a and A refer to different types of items).

The list of items for each rucksack is given as characters all on a single line. A given rucksack always has the same number of items in each of its two compartments, so the first half of the characters represent items in the first compartment, while the second half of the characters represent items in the second compartment.

For example, suppose you have the following list of contents from six rucksacks:

vJrwpWtwJgWrhcsFMMfFFhFp
jqHRNqRjqzjGDLGLrsFMfFZSrLrFZsSL
PmmdzqPrVvPwwTWBwg
wMqvLMZHhHMvwLHjbvcjnnSBnvTQFn
ttgJtRGJQctTZtZT
CrZsJsPPZsGzwwsLwLmpwMDw

The first rucksack contains the items vJrwpWtwJgWrhcsFMMfFFhFp, which means its first compartment contains the items vJrwpWtwJgWr, while the second compartment contains the items hcsFMMfFFhFp. The only item type that appears in both compartments is lowercase p.
The second rucksack's compartments contain jqHRNqRjqzjGDLGL and rsFMfFZSrLrFZsSL. The only item type that appears in both compartments is uppercase L.
The third rucksack's compartments contain PmmdzqPrV and vPwwTWBwg; the only common item type is uppercase P.
The fourth rucksack's compartments only share item type v.
The fifth rucksack's compartments only share item type t.
The sixth rucksack's compartments only share item type s.
To help prioritize item rearrangement, every item type can be converted to a priority:

Lowercase item types a through z have priorities 1 through 26.
Uppercase item types A through Z have priorities 27 through 52.
In the above example, the priority of the item type that appears in both compartments of each rucksack is 16 (p), 38 (L), 42 (P), 22 (v), 20 (t), and 19 (s); the sum of these is 157.

Find the item type that appears in both compartments of each rucksack. What is the sum of the priorities of those item types?*/

/*----------------------------------------------Day 4a-----------------------------------------------------------------------------------------------------*/

#include <iostream>
using namespace std;

string str;
int count = 0;
string letter;
int result = 0;


int main()
{
    for(int i = 0; i < 300; i++)
    {
        //getting input of day3.txt stored into str
        getline(cin,str);

        int l = str.length();

        //checking first half of the string
        for(int j = 0; j< l/2; j++)
        {
            for (int q = l/2; q <=l; q++)
            {
                if (str[j] == str[q])
                {
                    letter = str[j];
                }
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
    }
    cout << "Result: " << result << endl;
}