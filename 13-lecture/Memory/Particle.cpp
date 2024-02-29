#include <iostream>
#include <vector>

class Particle 
{
public:
    Particle(float x, float y) : posX(x), posY(y) {}
    ~Particle() { delete p; }

    void move(float dx, float dy) 
    {
        posX += dx;
        posY += dy;
    }

    void printPosition() const 
    {
        std::cout << "Position: (" << posX << ", " << posY << ")" << std::endl;
    }

    void setPointer(Particle* pInput)
    {
        p = pInput;
    }

private:
    float posX, posY;
    Particle* p;
};


int main() 
{
    Particle* p1 = new Particle(5.0, 7.5);
    Particle* p2 = new Particle(3.0, 9.5);
    Particle* p3 = new Particle(9.0, 1.5);
    p1->setPointer(p1);

    std::vector<Particle*> particles;
    particles.push_back(p1);
    particles.push_back(p2);
    particles.push_back(p3);

    for (Particle* particle : particles)
    {
        particle->move(1.3, -9);
    }

    for (const Particle* particle : particles)
    {
        particle->printPosition();
    }



    // Some code here...

    delete p1, p2, p3;
 

    for (Particle* particle : particles)
    {
        delete particle;
    }

    return 0;
}
