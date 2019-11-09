#include <iostream>
const int len = 30;
int main() {
   int arr[30] = {0};
   for (int i = 2; i < 30; i++) {
      for (int j = i * i; j < 30; j+=i) {
         arr[j - 1] = 1;
      }
   }
   for (int i = 1; i < 30; i++) {
      if (arr[i - 1] == 0)
         std::cout << i << "\t";
   }
}
