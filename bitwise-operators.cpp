
#include<iostream>
using namespace std;
/**------Bitwise Operators---------
    It works on binary digits:-
    AND:- &
    4&5=>

    100
    101
   -----
    100 = 4 Ans

    OR=> |

    4|5=>

    100
    101
   -----
    101 = 5 Ans


    NOT=> ~
    1.Write the 32 bit binary equivalent number
    2.Use NOT operator on it i.e inverse it.
    3.MSB decides whether it is positive or not.
    4.If negative Find the 2's complement of the value from step 2

    ~3= ~(00000000000000000000000000000011)

      =   11111111111111111111111111111100    ...(i)
    Since MSB =1 , then find 2's complement of (i)
    to find final answer

      1's Complement , 2's complement = (1's complement + 1)
      =   00000000000000000000000000000011
                                        +1
                                    000100

        = -4 Ans


    XOR ^
    4^5=>

    100
    101
   -----
    001 = 1 Ans
*/
int main()
{

    int a=4,b=3;
    cout<<"a&b = "<<(a&b)<<endl;
    cout<<"a|b = "<<(a|b)<<endl;
    cout<<"~a = "<<~a<<" ~b = "<<~b<<endl;
    cout<<"a^b = "<<(a^b)<<endl;

    return 0;
}
