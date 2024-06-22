#include <iostream>
using namespace std;

#define LOG(x) std::cout << x << std:endl

class Robot {
    // Deklarasi Variabel

public:

    Robot() : ..., ..., ... {
        // Default Constructor
    }
    Robot(int posX, int posY, int ord) : ..., ..., ... {
        // Constructor
    }

    ~Robot() {
        // Destructor
    }

    static int getCount() {
        // Returns jumlah robot
    }

    void getPos() {
        // Melakukan print posisi X dan Y dari robot
    }

    void setPos() {
        // Setter untuk posisi robot X dan Y
    }

    void getOrientation() {
        // Getter untuk orientasi robot
        // Melakukan print orientasi dari robot
    }

    void setOrientation() {
        // Setter untuk orientasi robot
    }

    void moveUp() {
        //
    }

    void moveDown() {
        //
    }

    void moveRight() {
        //
    }

    void moveLeft() {
        //
    }
};

int Robot::count = 0;

int main() {
    Robot r1(0, 0, 0);
    r1.getPos();
    r1.moveUp();
    r1.getPos();
    cout << "Number of Robots: " << Robot::getCount() << endl;
    return 0;
}
