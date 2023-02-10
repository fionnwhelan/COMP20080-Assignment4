#include <iostream>
using namespace std;
#include "Memory.h"

Memory::Memory(int num_words)
{
    n_words = num_words;
    s = num_words/8192;
    int remainder = num_words%8192;
    p = remainder/512;
    remainder = remainder%512;
    w = remainder;

}

Memory::Memory()
{
    s = 0;
    p = 0;
    w = 0;
}

void Memory::mem_print(Memory mem)
{
    cout << "Number of sections: " << mem.s << "\n";
    cout << "Number of pages: " << mem.p << "\n";
    cout << "Number of words: " << mem.w << "\n";
}

Memory Memory::operator+(Memory mem)
{
    Memory mem_combine(n_words + mem.n_words);
    return mem_combine;

}

bool Memory::operator>(Memory mem)
{
    if (n_words > mem.n_words)
    {
        return true;
    }
    else
    {
        return false;
    }
}



void Memory::operator--()
{
    if (n_words > 0) //this means that if there are zero words, the memory will not be decremented (as you cannot have negative memory)
    {
        Memory temp(--n_words);
        s = temp.s;
        p = temp.p;
        w = temp.w;
    }
}

void Memory::mem_add(Memory& mem, int num_words_add)
{
    Memory temp(mem.n_words + num_words_add);
    mem.s = temp.s;
    mem.p = temp.p;
    mem.w = temp.w;
}
