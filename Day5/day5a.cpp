/*--- Day 5: Supply Stacks ---
The expedition can depart as soon as the final supplies have been unloaded from the ships. Supplies are stored in stacks of marked crates, but because the needed supplies are buried under many other crates, the crates need to be rearranged.

The ship has a giant cargo crane capable of moving crates between stacks. To ensure none of the crates get crushed or fall over, the crane operator will rearrange them in a series of carefully-planned steps. After the crates are rearranged, the desired crates will be at the top of each stack.

The Elves don't want to interrupt the crane operator during this delicate procedure, but they forgot to ask her which crate will end up where, and they want to be ready to unload them as soon as possible so they can embark.

They do, however, have a drawing of the starting stacks of crates and the rearrangement procedure (your puzzle input). For example:

    [D]    
[N] [C]    
[Z] [M] [P]
 1   2   3 

move 1 from 2 to 1
move 3 from 1 to 3
move 2 from 2 to 1
move 1 from 1 to 2
In this example, there are three stacks of crates. Stack 1 contains two crates: crate Z is on the bottom, and crate N is on top. Stack 2 contains three crates; from bottom to top, they are crates M, C, and D. Finally, stack 3 contains a single crate, P.

Then, the rearrangement procedure is given. In each step of the procedure, a quantity of crates is moved from one stack to a different stack. In the first step of the above rearrangement procedure, one crate is moved from stack 2 to stack 1, resulting in this configuration:

[D]        
[N] [C]    
[Z] [M] [P]
 1   2   3 
In the second step, three crates are moved from stack 1 to stack 3. Crates are moved one at a time, so the first crate to be moved (D) ends up below the second and third crates:

        [Z]
        [N]
    [C] [D]
    [M] [P]
 1   2   3
Then, both crates are moved from stack 2 to stack 1. Again, because crates are moved one at a time, crate C ends up below crate M:

        [Z]
        [N]
[M]     [D]
[C]     [P]
 1   2   3
Finally, one crate is moved from stack 1 to stack 2:

        [Z]
        [N]
        [D]
[C] [M] [P]
 1   2   3
The Elves just need to know which crate will end up on top of each stack; in this example, the top crates are C in stack 1, M in stack 2, and Z in stack 3, so you should combine these together and give the Elves the message CMZ.

After the rearrangement procedure completes, what crate ends up on top of each stack?

-----------------------------------Day 5a--------------------------------------------------------------------------------------------------------------------------------------------------------*/

#include <iostream>
using namespace std;
#include <stack>


int main()
{
    //Setting the letters manually 
    char a1[4] = {'G','T','R','W'};
    char a2[8] = {'G','C','H','P','M','S','V','W'};
    char a3[6] = {'C','L','T','S','G','M'};
    char a4[7] = {'J','H','D','M','W','R','F'};
    char a5[8] = {'P','Q','L','H','S','W','F','J'};
    char a6[7] = {'P','J','D','N','F','M','S'};
    char a7[8] = {'Z','B','D','F','G','C','S','J'};
    char a8[3] = {'R','T','B'};
    char a9[5] = {'H','N','W','L','C'};

    //Respective stacks
    stack<char>s1;
    stack<char>s2;
    stack<char>s3;
    stack<char>s4;
    stack<char>s5;
    stack<char>s6;
    stack<char>s7;
    stack<char>s8;
    stack<char>s9;

    //pushing all the letters to their specific stack

    for (int j = 0; j < 4; j++)
    {
        s1.push(a1[j]);
    }
    for (int j = 0; j < 8; j++)
    {
        s2.push(a2[j]);
    }
    for (int j = 0; j < 6; j++)
    {
        s3.push(a3[j]);
    }
    for (int j = 0; j < 7; j++)
    {
        s4.push(a4[j]);
    }
    for (int j = 0; j < 8; j++)
    {
        s5.push(a5[j]);
    }
    for (int j = 0; j < 7; j++)
    {
        s6.push(a6[j]);
    }
    for (int j = 0; j < 8; j++)
    {
        s7.push(a7[j]);
    }
    for (int j = 0; j < 3; j++)
    {
        s8.push(a8[j]);
    }
    for (int j = 0; j < 5; j++)
    {
        s9.push(a9[j]);
    }

    string m,f,t;
    int move,from,to;
    char v;

    string t1,t2,t3;

    for(int i = 0; i < 501; i++)
    {
        //getting input of day3.txt stored into str
        //why 'e'? This is a way to make it easier to skip the letter "move" so we can take the integer input from the command line
        getline(cin,t1,'e');
        getline(cin,m,'f');     //Storing the amount of numbers to move 
        getline(cin,t2,'m');    //Same as I explained in line 132 but with letter "rom" the lette "f" already skipped on th eline before
        getline(cin,f,'t');     //Storing the stack we have to move the letters
        getline(cin,t1,'o');    //Same as I explained in line 132 but with lette "o"
        getline(cin,t);         //Storing the stack we will need to store the letters


        //storing those values into integers(stoi) so we are able to keep track of the variables 
        move = stoi(m);     // number after the word move
        from = stoi(f);     // number after the word from
        to = stoi(t);       // number after the word to

        char top;   //taking care of the letter that needs to be swaped from the top of one stack to the other

        for(int n = 0; n < move; n++)
        {
            //locating the stack we need to take the top letter to store it on the variable called "top" 
            if(from == 1)
            {
                top = s1.top();
                s1.pop();
            }
            else if(from == 2)
            {
                top = s2.top();
                s2.pop();
            }
            else if(from == 3)
            {
                top = s3.top();
                s3.pop();
            }
            else if(from == 4)
            {
                top = s4.top();
                s4.pop();
            }
            else if(from == 5)
            {
                top = s5.top();
                s5.pop();
            }
            else if(from == 6)
            {
                top = s6.top();
                s6.pop();
            }
            else if(from == 7)
            {
                top = s7.top();
                s7.pop();
            }
            else if(from == 8)
            {
                top = s8.top();
                s8.pop();
            }
            else if(from == 9)
            {
                top = s9.top();
                s9.pop();
            }

            //
            if(to == 1)
            {
                s1.push(top);
            }
            else if(to == 2)
            {
                s2.push(top);
            }
            else if(to == 3)
            {
                s3.push(top);
            }
            else if(to == 4)
            {
                s4.push(top);
            }
            else if(to == 5)
            {
                s5.push(top);
            }
            else if(to == 6)
            {
                s6.push(top);
            }
            else if(to == 7)
            {
                s7.push(top);
            }
            else if(to == 8)
            {
                s8.push(top);
            }
            else if(to == 9)
            {
                s9.push(top);
            }

        }
        continue;       // skip to the next line
    }

    //printing all the letters of the top of the stack

   cout << endl << s1.top() << " ";
   cout << s2.top() << " ";
   cout << s3.top() << " ";
   cout << s4.top() << " ";
   cout << s5.top() << " ";
   cout << s6.top() << " ";
   cout << s7.top() << " ";
   cout << s8.top() << " ";
   cout << s9.top() << endl;

   cout << "1 2 3 4 5 6 7 8 9" << endl;
        
}
