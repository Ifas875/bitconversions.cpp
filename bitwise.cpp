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


std::string intToHex(int sample){

}


int main(){
  int a = 534;

  std::cout << intToOctal(a) << std::endl;
  return 0;
}