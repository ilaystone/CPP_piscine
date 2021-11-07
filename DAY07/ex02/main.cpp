#include <iostream>
#include "Array.template.hpp"

// #define MAX_VAL 750
// int main(int, char**)
// {
//     Array<int> numbers(MAX_VAL);
//     int* mirror = new int[MAX_VAL];
//     srand(time(NULL));
//     for (int i = 0; i < MAX_VAL; i++)
//     {
//         const int value = rand();
//         numbers[i] = value;
//         mirror[i] = value;
//     }
//     //SCOPE
//     {
//         Array<int> tmp = numbers;
//         Array<int> test(tmp);
//     }

//     for (int i = 0; i < MAX_VAL; i++)
//     {
//         if (mirror[i] != numbers[i])
//         {
//             std::cerr << "didn't save the same value!!" << std::endl;
//             return 1;
//         }
//     }
//     try
//     {
//         numbers[-2] = 0;
//     }
//     catch(const std::exception& e)
//     {
//         std::cerr << e.what() << '\n';
//     }
//     try
//     {
//         numbers[MAX_VAL] = 0;
//     }
//     catch(const std::exception& e)
//     {
//         std::cerr << e.what() << '\n';
//     }

//     for (int i = 0; i < MAX_VAL; i++)
//     {
//         numbers[i] = rand();
//     }
//     delete [] mirror;//
//     return 0;
// }

class Number
{
public:
	std::string		alphaValue;
	int				value;

	Number() : alphaValue(), value(0) { return ; }
	Number(std::string a, int v) : alphaValue(a), value(v)
	{
		return ;
	}
	~Number(void) { return ; }
	bool		operator<(Number const &rhs) const
	{
		return (this->value < rhs.value);
	}
	bool		operator>(Number const &rhs) const
	{
		return (this->value > rhs.value);
	}
	Number const	&operator=(Number const &rhs)
	{
		this->alphaValue = rhs.alphaValue;
		this->value = rhs.value;
		return (*this);
	}
};

std::ostream&	operator<<(std::ostream& os, const Number &rhs)
{
	os << "(" << rhs.alphaValue;
	os << " ," << rhs.value << ")";
	return (os);
}

int     main(void)
{
    std::cout << "testing on Integers" << std::endl;
    Array<int>      arr(5);
    for (int i =0; i < 5; i++)
    {
        arr[i] = i;
    }
    Array<int>      arr_copy(arr);
    std::cout << "Int Array" << std::endl;
    for (int i = 0; i < 5; i++)
    {
        std::cout << arr[i] << " ";
        arr[i] = arr[i] * 2;
    }
    std::cout << std::endl << "Int Copy" << std::endl;
    for (int i = 0; i < 5; i++)
    {
        std::cout << arr_copy[i] << " ";
    }
    std::cout << std::endl << "Int Array Modified" << std::endl;
    for (int i = 0; i < 5; i++)
    {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
    std::cout << "Testing On Classes" <<std::endl;
    Array<Number>      b(5);
	b[0] = Number("one", 1);
	b[1] = Number("two", 2);
	b[2] = Number("three", 3);
	b[3] = Number("four", 4);
	b[4] = Number("five", 5);
    Array<Number>      b_copy(b);
    std::cout << "Class Array" << std::endl;
    for (int i = 0; i < 5; i++)
    {
        std::cout << b[i] << " ";
        b[i].alphaValue += " Modified";
    }
    std::cout << std::endl << "Class Copy" << std::endl;
    for (int i =0; i < 5; i++)
    {
        std::cout << b_copy[i] << " ";
    }
    std::cout << std::endl << "Class Array Modified" << std::endl;
    for (int i = 0; i < 5; i++)
    {
        std::cout << b[i] << " ";
    }
    std::cout << std::endl;
    std::cout << "Testing Exception" <<std::endl;
    try
    {
        std::cout << b[-15] << std::cout;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    std::cout << std::endl;
    return (0);
}