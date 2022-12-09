#include <iostream>
#include <string>
#include <vector>

using namespace std;

vector<int> string_to_vector_int(string s) {
    vector<int> v;
    for (auto c : s) {
        v.push_back(c - '0');
    }
    return v;
}

struct Node {
    int value;
    Node * grey_line;
    Node * red_line;
};

class Mod7 {
public:
    Mod7() {
        // Create the graph here
    }

    int remainder(string number) {
        // change this member function to make the test pass
        return 0;
    }

    // Insert your help functions here


private:

    // Insert extra data members if needed
};


int main() {
    string test1{"243"};

    Mod7 modder{};

    if (modder.remainder("243") == 5) {
        cout << "Correct" << endl;
    }

    if (modder.remainder("11111111111111111111111111111") == 2) {
        cout << "Correct" << endl;
    }

    // more test cases here
}
