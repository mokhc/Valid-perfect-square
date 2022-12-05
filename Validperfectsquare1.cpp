//Program tests whether an integer is a perfect square (Leetcode problem 367).
//Program returns true if it is a perfect square and false otherwise.
//Trivial - How do you obtain an increasing perfect square sequence?
//header
#include <iostream>
//declaration
using namespace std;

//class
class Solution {
public:
    long int result = 0;
    long int count = 1;
    bool ret = false;
    //function 1
    bool isPerfectSquare1(int num) {
        while (result <= num) {
            if (result == num) {
                ret = true;
                break;
            }
            result = count * count;
            //cout << result << endl;
            count++;
        }
        return ret;
    }
    //function 2
    bool isPerfectSquare2(int num) {
        result = 1;
        while (result >= 0) {
            if (result == 0) {
                ret = true;
                break;
            }
            result = num - (count * count);
            //cout << result << endl;
            count++;
        }
        return ret;
    }
};

int main()
{
    Solution s1;
    cout << s1.isPerfectSquare1(101) << endl;
    Solution s2;
    cout << s2.isPerfectSquare2(101) << endl;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
