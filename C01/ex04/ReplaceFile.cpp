# include <iostream>
# include <fstream>
# include <string>
#include "ReplaceFile.hpp"

int ReplaceFile(std::string filename, std::string s1, std::string s2)
{
    std::fstream    OriginalFile;
    std::fstream    ReplacedFile;
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

/*
#include <iostream>
#include <fstream>

int	main(int ac, char **av)
{
	if (ac != 4)
	{
		std::cout << "Expected: ./sed <input file name> <text1> <text2>" << std::endl;
		return (1);
	}
	std::string	file_name = av[1];

	std::ifstream	infile(av[1]);
	if (!infile.is_open())
	{
		std::cout << "No " << file_name << " file exists!" << std::endl;
		return (1);
	}
	file_name.append(".replace");
	std::ofstream	outfile(file_name, std::ios::out);

	std::string	text_one = av[2];
	std::string	text_two = av[3];
	std::string	line;
	
	size_t	match;
	while (std::getline(infile, line))
	{
		match = line.find(text_one);
		while (match != std::string::npos)
		{
			line.erase(match, text_one.length());
			line.insert(match, text_two);
			match = line.find(text_one);
		}
		outfile << line << std::endl;
	}

	infile.close();
	outfile.close();
}*/