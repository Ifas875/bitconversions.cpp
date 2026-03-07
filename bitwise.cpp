#include <iostream>
#include <string>
#include <sstream>
#include <algorithm>


std::string intToOctal(int sample){
  std::string answer;
  if (sample == 0 || sample == 1)
    return std::to_string(sample);
  else{
    while(sample > 0){
      int temp = sample & 7;
      answer += std::to_string(temp);
      sample = sample >> 3;
    }
    std::reverse(answer.begin(), answer.end());
    return answer;
  }
}


int main(){
  int a = 2;

  std::cout << intToOctal(a) << std::endl;
  return 0;
}