


struct Point
{
    int x;
    int y;
};

Point transpose(Point p)  // Again an implicit copy
{
    int temp = p.x;
    p.x = p.y;
    p.y = temp;
    return p;
}









