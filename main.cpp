#include <iostream>
using namespace std;

bool isDigit(char input){
    if (input >= '0' && input <= '9'){
      return true;
    } else {
      return false;
    }
}

int main(){
  char input[100] = "1+2";
  char output[100];
  // cin >> input;
  int indexInput = 0;
  int indexOutput = 0;
  // adding space between tokens
  /* while (indexInput < sizeof(input)){
    output[indexOutput] = input[indexInput];
    indexInput++;
    indexOutput++;
    output[indexOutput] = ' ';
    indexOutput++;
  }
  */
  cout << output << endl;
  indexOutput = 0;
  while (indexOutput < sizeof(output)){
    if (isDigit(output[indexOutput])){
      //enqueue
    } else {
         //push
    }
    while (
  }

  return 0;
}