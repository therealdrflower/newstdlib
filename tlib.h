//Created by DrFlower on September 3, 2023
#include <string>
#include <iostream>
#include <stdlib.h>


void printstr(std::string text)
{
    std::cout << text << std::endl;
}
void clear()
{
    system("cls");
    system("clear");
}
char getChar()
{
    char c;
    std::cin >> c;
    return c;
    
}
std::string getWord()
{
    std::string input;
    std::cin >> input;
    return input;
}
std::string charToString(char converted)
{
    std::string convert(1,converted);
    return convert;
}
int stringToInt(std::string converted)
{
    return stoi(converted);
}
int stop(bool type)
{
    return type;
}
