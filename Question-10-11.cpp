#include <iostream>
#include <sstream>
#include <string>
using std::cout;
using std::endl;
using std::string;

class LinkedList {
   private:
    // The internal linked-list node struct
    struct List {
        string value;
        List *next;
    };

    // A pointer to this objects internal list
    List *theList;

   public:
    // Print the list to the provided ostream
    void print(std::ostream &out);
    int length;
    string get(int Index);
    bool contains(string needle);
    void insertAt(int pos, string value);
    void deleteAt(int pos);
};

int main() {}
