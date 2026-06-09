#include <iostream>
#include <fstream>
#include <string>

int main(int argc, char *argv[])
{
    if (argc != 4)
    {
        std::cout << "invalid number of arguments." << std::endl;
        return (1);
    }
    std::string filename = argv[1];
    std::string S1 = argv[2];
    std::string S2 = argv[3];
    if (S1.empty())
    {
        std::cout << "Invalid S1." << std::endl;
        return (1);
    }
    std::ifstream file(filename.c_str());
    if (!file)
    {
        std::cout << "Error: Cannot open file." << std::endl;
        return (1);
    }
    std::string line;
    std::string out_file_name = filename + ".replace";
    std::ofstream out_file(out_file_name.c_str());
    if (!out_file)
    {
        std::cout << "Error: Cannot open outfile." << std::endl;
        return (1);
    }
    int first = 1;
    while (std::getline(file, line))
    {
        if (!first)
            out_file << std::endl;
        std::size_t start = 0;
        std::size_t found = line.find(S1, 0);
        while (found != std::string::npos)
        {
            out_file << line.substr(start, found);
            out_file << S2;
            start = found + S1.length();
            found = line.find(S1, start);
        }
        out_file << line.substr(start);
        first = 0;
    }
    return (0);
}