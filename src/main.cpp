#include "../header/headers.h"

int
main()
{
  // const char * file_name = "main.cpp";
  std::string file_name{};
  std::cout << "input file name:";
  std::cin >> file_name;
  std::ifstream ifs;
  try {
    ifs.open(file_name, std::ios::in);
  }
  catch (...) {
    std::cerr << "open file error\n";
    ifs.close();
    return -1;
  }
  
  std::string line{};
  while (std::getline(ifs, line)) {
    std::cout << line << '\n';
  }
  
  std::cout << "Hello, World!" << std::endl;
  return 0;
}
