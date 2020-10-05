#include <iostream>
#include <string>
using namespace std;

struct coord {
    int x, y;

    coord() : x{0}, y{0} {}
    ~coord() {}

    void set(int _x, int _y) {
        x = _x;
        y = _y;
    }
};

class example : public coord {
    
    public:
        example(string nm) : coord(), _name(nm) {}
        ~example() {}

    private:
        string _name;
};

int main()
{

    example myExample("myExample");
    myExample.set(4,2);
    
	return 0;
}
