#include <iostream>
#include <fstream>

int main()
{
    std::ofstream newFile("newFile.txt");
    if (newFile.is_open())
    {
        std::cout << "New file created and opened successfully!" << std::endl;
    }
    else
    {
        std::cout << "Error: Could not create and open new file." << std::endl;
    }
    newFile.close();
    return 0;
}
