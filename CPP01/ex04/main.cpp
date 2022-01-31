
#include <iostream>
#include <fstream>
#include <string>

int     main(int argc, char **argv)
{
    if (argc != 4)
    {
        std::cout << "Error: wrong number of arguments" << std::endl;
        return 0;
    }
    if (argv[2][0] == '\0')
    {
        std::cout << "Error: cannot take empty string as <string to replace>" << std::endl;
        return 0;
    }
    std::string     file;
    std::string     str1 = argv[2];
    std::string     str2 = argv[3];
    std::string     filename;
    std::string     temp;
    std::ifstream   ifs(argv[1]);
	if (!(ifs.good()))
	{
		std::cout << "Error: the file that was given is invalid" << std::endl;
		return 0;
	}
    int             find_pos;
    filename = argv[1];
    filename += ".replace";

	std::getline(ifs, temp);
	while (ifs.eof() != 1)
	{
		file += temp;
		file += "\n";
		std::getline(ifs, temp);
	}
	ifs.close();
    find_pos = file.find(str1);
    while ((find_pos = file.find(str1)) != -1)
    {
        temp = file.substr(0, find_pos);
        temp += str2;
		temp += file.substr(find_pos + str1.length(), file.length());
		file = temp;
    }
	std::ofstream   ofs(filename.c_str());
    ofs << file;
    ofs.close();
    return 0;
}