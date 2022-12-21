/*--- Part Two ---
As you watch the crane operator expertly rearrange the crates, you notice the process isn't following your prediction.

Some mud was covering the writing on the side of the crane, and you quickly wipe it away. The crane isn't a CrateMover 9000 - it's a CrateMover 9001.

The CrateMover 9001 is notable for many new and exciting features: air conditioning, leather seats, an extra cup holder, and the ability to pick up and move multiple crates at once.

Again considering the example above, the crates begin in the same configuration:

    [D]    
[N] [C]    
[Z] [M] [P]
 1   2   3 
Moving a single crate from stack 2 to stack 1 behaves the same as before:

[D]        
[N] [C]    
[Z] [M] [P]
 1   2   3 
However, the action of moving three crates from stack 1 to stack 3 means that those three moved crates stay in the same order, resulting in this new configuration:

        [D]
        [N]
    [C] [Z]
    [M] [P]
 1   2   3
Next, as both crates are moved from stack 2 to stack 1, they retain their order as well:

        [D]
        [N]
[C]     [Z]
[M]     [P]
 1   2   3
Finally, a single crate is still moved from stack 1 to stack 2, but now it's crate C that gets moved:

        [D]
        [N]
        [Z]
[M] [C] [P]
 1   2   3
In this example, the CrateMover 9001 has put the crates in a totally different order: MCD.

Before the rearrangement process finishes, update your simulation so that the Elves know where they should stand to be ready to unload the final supplies. After the rearrangement procedure completes, what crate ends up on top of each stack?*/

//-----------------------------------Day 5b---------------------------------------------------------------------------------------------------------------------------------------------*/

#include <iostream>
using namespace std; 
#include <stack>
#include <queue>


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

    stack<char>st;

    //Stack to store values an pop back so we can follow the instructions of the problem

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
                st.push(top);
            }
            else if(from == 2)
            {
                top = s2.top();
                s2.pop();
                st.push(top);
            }
            else if(from == 3)
            {
                top = s3.top();
                s3.pop();
                st.push(top);
            }
            else if(from == 4)
            {
                top = s4.top();
                s4.pop();
                st.push(top);
            }
            else if(from == 5)
            {
                top = s5.top();
                s5.pop();
                st.push(top);
            }
            else if(from == 6)
            {
                top = s6.top();
                s6.pop();
                st.push(top);
            }
            else if(from == 7)
            {
                top = s7.top();
                s7.pop();
                st.push(top);
            }
            else if(from == 8)
            {
                top = s8.top();
                s8.pop();
                st.push(top);
            }
            else if(from == 9)
            {
                top = s9.top();
                s9.pop();
                st.push(top);
            }
        }

        for(int i = 0; i < move; i++)
        {
            if(to == 1)
            {
                top = st.top();
                st.pop();
                s1.push(top);
            }
            else if(to == 2)
            {
                top = st.top();
                st.pop();
                s2.push(top);
            }
            else if(to == 3)
            {
                top = st.top();
                st.pop();
                s3.push(top);
            }
            else if(to == 4)
            {
                top = st.top();
                st.pop();
                s4.push(top);
            }
            else if(to == 5)
            {
                top = st.top();
                st.pop();
                s5.push(top);
            }
            else if(to == 6)
            {
                top = st.top();
                st.pop();
                s6.push(top);
            }
            else if(to == 7)
            {
                top = st.top();
                st.pop();
                s7.push(top);
            }
            else if(to == 8)
            {
                top = st.top();
                st.pop();
                s8.push(top);
            }
            else if(to == 9)
            {
                top = st.top();
                st.pop();
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
