
class DoubleVector
{
public:
    DoubleVector(int initialSize) 
    : size(initialSize), elements(new double[size])
    {
        for (int i = 0; i < size; size++)
        {
            elements[i] = 0.0;  // initialize       
        }
    }

    double* getElements()
    {
        return elements;
    }

    

private:
    int size;           // the size
    double* elements;   // a pointer to the elements
};



int main()
{
    DoubleVector dv{10};

    DoubleVector dv2 = dv;


    return 0;
}