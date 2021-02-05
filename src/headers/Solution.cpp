#include "Solution.h"

Solution::Solution() {

}

Solution::Solution(int n, int f, int l, int b) {
    this->NetworkAddr = n;
    this->FirstUsableAddr = f;
    this->LastUsableAddr = l;
    this->BroadCastAdd = b;
}

Solution::~Solution() {
    
}