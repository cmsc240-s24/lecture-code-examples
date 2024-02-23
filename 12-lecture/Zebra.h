// Zebra courtesy of Maxwell, Konstantinos, and Isaac

class Zebra : public Animal {
  public:
    void speak();
    Zebra(std::string name, int age, float height);

  private:
    int numberOfStripes;
    float height;

};