#include <iostream>
using namespace std;

class OutOfBounds
{
public:
    const string what() const 
    {
        return "Error: Invalid index access attempted!";
    }
};

class InvalidSize
{
public:
    const string what() const 
    {
        return "Error: Array size must be greater than 0!";
    }
};

template <typename T>
class SmartArray 
{
private:
    T* array;
    int size;

public:
    SmartArray(int size) : size(size) 
    {
        if (size <= 0) 
        {
            throw InvalidSizeException();
        }
        array = new T[size];
    }

    int getSize() const 
    {
        return size;
    }

    T& operator[](int index) 
    {
        if (index < 0 || index >= size) 
        {
            throw OutOfBoundsException();
        }
        return array[index];
    }

    void inputElements() 
    {
        std::cout << "Enter elements: ";
        for (int i = 0; i < size; ++i) 
        {
            std::cin >> array[i];
        }
    }
};

int main() 
{
    try 
    {
        int arraySize;
        std::cout << "Array size: ";
        std::cin >> arraySize;

        SmartArray<int> intArray(arraySize);
        intArray.inputElements();

        std::cout << "Accessing index 2: " << intArray[2] << std::endl;

        std::cout << "Accessing index 5: " << std::endl;
        std::cout << intArray[5] << std::endl;

    } 
    
    catch (const OutOfBounds& e) 
    {
        std::cerr << e.what() << std::endl;
    }
    
    catch (const InvalidSize& e) 
    {
        std::cerr << e.what() << std::endl;
    }

    try 
    {
        SmartArray<std::string> strArray(3);
        std::cout << "Enter 3 strings: ";

        for (int i = 0; i < 3; ++i) 
        {
            std::cin >> strArray[i];
        }

        std::cout << "Accessing index 1: " << strArray[1] << std::endl;

        std::cout << "Accessing index 3: " << std::endl;
        std::cout << strArray[3] << std::endl;

    } 

    catch (const OutOfBounds& e) 
    {
        std::cerr << e.what() << std::endl;
    } 

    catch (const InvalidSize& e) 
    {
        std::cerr << e.what() << std::endl;
    }

    return 0;
}
