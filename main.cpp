#include <iostream>
#define DOCTEST_CONFIG_IMPLEMENT
#include "doctest.h"
#include "funcs.h"

int main()
{
  std::string line;
  int count = 0;
  while(getline(std::cin, line)){
    line = removeLeadingSpaces(line);

    if(check(line)){
      count = count + countChar(line, '{') - countChar(line, '}');
      //std::cout<<"Debug: " << count;
    }
    std::cout<<indent(line, count)<<std::endl;
    if(!check(line)){
      count = count + countChar(line, '{') - countChar(line, '}');
      //std::cout<<"Debug: "<<count;
    }
  }
  return 0;
}
