/*--- Part Two ---
It seems like there is still quite a bit of duplicate work planned. Instead, the Elves would like to know the number of pairs that overlap at all.

In the above example, the first two pairs (2-4,6-8 and 2-3,4-5) don't overlap, while the remaining four pairs (5-7,7-9, 2-8,3-7, 6-6,4-6, and 2-6,4-8) do overlap:

5-7,7-9 overlaps in a single section, 7.
2-8,3-7 overlaps all of the sections 3 through 7.
6-6,4-6 overlaps in a single section, 6.
2-6,4-8 overlaps in sections 4, 5, and 6.
So, in this example, the number of overlapping assignment pairs is 4.

In how many assignment pairs do the ranges overlap?*/
//----------------------------Day 4b---------------------------------------------------------------------------------------------------------------------------------------

#include <iostream>
using namespace std;
#include <stack>

int v1,v2,v3,v4;
string str;
int result = 0;


int main()
{
    for(int i = 0; i < 1000; i++)
    {
        //getting input of day3.txt stored into str
        getline(cin,str,'-');

        v1 = stoi(str);//storing those values to each variable to be able to keep track of them

        getline(cin,str,',');

        v2 = stoi(str);

        getline(cin,str,'-');

        v3 = stoi(str);

        getline(cin,str);
        
        v4 = stoi(str);

        //checking values that have those special characteristics(values that it's range fully contains the other)
        if((v3 >= v1 && v3 <= v2)||(v1 >= v3 && v1 <=v4)) //|| ((v1 >= v3 || v1 <= v4)||(v2 >= v3 || v2 <= v4)))
        {
            result +=1;//counting how many times those values that it's range fully contains the other
        }

        continue; // Ending getline function since there is nothing after the number so it does not know when to stop
    }

    cout << "Result: " << result << endl;
}
