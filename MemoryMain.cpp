#include <iostream>
using namespace std;
#include "Memory.h"

int main()
{
    Memory combined_mem, mem_add1, mem_add2;
    int x;
    cout << "Please enter your first value for number of words:\n";
    cin >> x;
    Memory mem1(x);
    mem1.mem_print(mem1); //printing data values of mem1
    cout << "Please enter your second value for number of words:\n";
    cin >> x;
    Memory mem2(x);
    mem1.mem_print(mem2); //printing data values of mem2
    combined_mem = mem1 + mem2;
    cout << "The following are the values for the combined memory: \n";
    mem1.mem_print(combined_mem); //printing data values of combination of two memory objects
    if (mem1 > mem2) {
        cout << "Memory 1 is greater than Memory 2.\n";
    }
    else if (mem2 > mem1) {
        cout << "Memory 2 is greater than Memory 1.\n";
    }
    else {
        cout << "Both memories are equal.\n";
    }
    cout << "The following are the values for memory 1, after it has been decremented by 1:\n";
    --mem1;
    mem1.mem_print(mem1);
    cout << "The following are the values for memory 2, after it has been decremented by 1:\n";
    --mem2;
    mem1.mem_print(mem2);
    cout << "How many words would you like to add to the memory?\n";
    cin >> x;
    mem1.mem_add(mem1, x);
    mem1.mem_add(mem2, x);
    cout << "The following are the values for Memory 1, after the addition:\n";
    mem1.mem_print(mem1);
    cout << "The following are the values for Memory 2, after the addition:\n";
    mem1.mem_print(mem2);

}





