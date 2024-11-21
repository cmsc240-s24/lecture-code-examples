#include <iostream>
#include <vector>

using namespace std;

class Particle {
public:
    Particle(float x, float y) : posX(x), posY(y) {}
    ~Particle(){ 
        
        cout << "DESTRUCT" << endl; 
        delete x;
        
    }
    void move(float dx, float dy) {
        posX += dx;
        posY += dy;
    }

    void printPosition() const {
        std::cout << "Position: (" << posX << ", " << posY << ")" << std::endl;
    }

private:
    float posX, posY;
    int x = new int;
};

int main() {

    vector<Particle*> particles;

    for(int i = 0; i < 100; i++)
    {
        Particle* p1 = new Particle(5.0, 7.5);
        p1->move(2.0, -3.0);
        p1->printPosition();
        particles.push_back(p1);
    }

    // Do some simulation...

    // Free the memory.
    for(int i = 0; i < 100; i++)
    {
        delete particles[i];
    }

 

    return 0;
}