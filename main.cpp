#include <iostream>
#include <Windows.h>
#include <cstdlib>

void czas(int sec, int min, int hours) {

  system("cls");

  std::cout << hours << " : ";
  std::cout << min << " : ";
  std::cout << sec;
}

int main(){ 

  int hour=0;
  int minutes=0;
  int seconds=0;

  czas(seconds, minutes, hour);

  while (true) {
    Sleep(1);

    seconds++;

    if (seconds > 59) {
      minutes++;
      seconds = 0;
    }
    if (minutes > 59) {
      hour++;
      minutes = 0;
      seconds = 0;
    }
    czas(seconds, minutes, hour);
  }
}