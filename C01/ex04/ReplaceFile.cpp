# include <iostream>
# include <fstream>
# include <string>
#include "ReplaceFile.hpp"

int ReplaceFile(std::string filename, std::string s1, std::string s2)
{
    std::ifstream    OriginalFile;
    std::ofstream    ReplacedFile;
    std::string     ReplaceFileName;
    std::string     Line;
    size_t          match_index;
   
    OriginalFile.open (filename);
    ReplaceFileName = filename.append( ".replace");
    ReplacedFile.open (ReplaceFileName);
    if (!OriginalFile.is_open() || !OriginalFile.is_open())
    {
        std::cout << "No " << filename << " file exists!" << std::endl;
		return (1);
    }
        while (std::getline (OriginalFile, Line))
        {
            match_index = Line.find(s1);
            while(match_index != std::string::npos)
            {
                Line.erase(match_index, s1.length());
                Line.insert(match_index, s2);
                match_index = Line.find(s1);
            }
            ReplacedFile << Line << std::endl;
        }
    OriginalFile.close();
    ReplacedFile.close();
    return(0);
}

int main()
{
    ReplaceFile("Example.txt", "i", "n");
    return (0);
}