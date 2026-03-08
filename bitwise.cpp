#include <iostream>
#include <string>
#include <sstream>
#include <algorithm>
#include <unordered_map>


std::unordered_map<int, char> hexLetters = {
  {0,'0'},
  {1,'1'},
  {2,'2'},
  {3,'3'},
  {4,'4'},
  {5,'5'},
  {6,'6'},
  {7,'7'},
  {8,'8'},
  {9,'9'},
  {10,'A'},
  {11,'B'},
  {12,'C'},
  {13,'D'},
  {14,'E'},
  {15,'F'}
};


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
  std::string answer;
  if (sample == 0 || sample == 1)
    return std::to_string(sample);
  else{
    while(sample > 0){
      int temp = sample & 15;
      answer += hexLetters[temp];
      sample = sample >> 4;
    }
    std::reverse(answer.begin(), answer.end());
    return answer;
  }
}


std::string intToBin(int sample){
  std::string answer;
  int bitcount = 0;
  if (sample == 0 || sample == 1)
    return std::to_string(sample);
  else{
    while(sample > 0){
      int temp = sample & 1;
      if(temp > 0) bitcount++;
      answer += std::to_string(temp);
      sample = sample >> 1;
    }
    std::reverse(answer.begin(), answer.end());
    std::cout << "bitcount is: " << bitcount << std::endl;
    return answer;
  }
}


int main(){
  int a = 16;

  std::cout << intToOctal(a) << std::endl;
  std::cout << intToHex(a) << std::endl;
  std::cout << intToBin(a) << std::endl;
  return 0;
}