#include <iostream>

#ifndef SOLUTION_H
#define SOLUTION_H

class Solution {
    private:
        int NetworkAddr;
        int FirstUsableAddr;
        int LastUsableAddr;
        int BroadCastAdd;
    public:
        Solution();
        Solution(int n, int f, int l, int b);
        ~Solution();
        friend std::ostream &operator<<( std::ostream &output, const Solution &S ) { 
            output << "X.X.X." << S.NetworkAddr << "\t X.X.X." << S.FirstUsableAddr << "\t X.X.X." << S.LastUsableAddr << "\t X.X.X." << S.BroadCastAdd;
            return output;            
        }
};

#endif // !SOLUTION_H