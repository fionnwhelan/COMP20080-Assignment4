class Memory
{
private:
    int n_words;
    int w;
    int p;
    int s;
public:
    Memory(int num_words);
    Memory();
    Memory operator+(Memory mem);
    bool operator>(Memory mem);
    void operator--();
    void mem_add(Memory& mem, int num_words_add);
    void mem_print(Memory mem);

};
