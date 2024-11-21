
class Highlander
{
    Highlander(const Highlander& other) = delete;
    Highlander& operator=(const Highlander& other) = delete;

    // ...
};


int main()
{
 
 
    Highlander one{};
    Highlander two{one};  // There can be only one.
 
 
    int i = 10;

    10 = i;  // Error: Expression must be a modifiable lvalue

    int a = i;



 
    return 0;
}