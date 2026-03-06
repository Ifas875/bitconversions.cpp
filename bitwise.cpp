#include <iostream>
#include <string>
#include <sstream>
#include <algorithm>


int main(){
  int a = 510;
  int b = a & 7;
  std::cout << a << " " << b << std::endl;

  std::string answer;

  while (a>0){
    std::cout << a << std::endl;
    int temp = a & 7;
    answer += std::to_string(temp);
    a = a >> 3;
  }
  std::reverse(answer.begin(), answer.end());

  std::cout << answer << std::endl;
  return 0;
}