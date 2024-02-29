int main() 
{
    // Dynamically allocate space for 5 integers on the heap
    int* buffer = new int[5]; 

    // This loop will overflow the buffer when i == 5
    buffer--;
    *buffer = 10;

    delete[] buffer;  // Free the allocated memory

    return 0;
}
