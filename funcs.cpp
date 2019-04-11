#include "funcs.h"
#include <iostream>

// Write all your functions in here

std::string removeLeadingSpaces(std::string line){
  std::string result = line;
  int size = line.size();
  for(int i = 0; i< line.size(); i++){
    if(line[i] == ' ' || line[i] == '\t'){
      result = line.substr(i+1, size-i-1);
    }else if(line[i] != ' '){
      break;
    }
  }
  return result;
}

/*
std::string unindent(){
  std::string line;
  std::string result;
  while (getline(std::cin, line)){
    result = result + removeLeadingSpaces(line) + '\n';
  }
  return result;
}
*/

int countChar(std::string line, char c){
  int count = 0;
  for(int i = 0; i < line.size(); i++){
    if(line[i] == c){
      count++;
    }
  }
  return count;
}

bool check(std::string line){
  if(removeLeadingSpaces(line)[0] == '}' || removeLeadingSpaces(line)[0] == '{'){
    return true;
  }else{
    return false;
  }
}

std::string indent(std::string line, int tabs){
  std::string result;
  for(int i = 0; i < tabs; i++){
    result = result + '\t';
  }
  result = result + line;
  return result;
}
