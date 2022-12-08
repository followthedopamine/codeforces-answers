#include <iostream>

int main() {
  int count = 0;
  int num;
  int matrixSize = 5;
  int middle = matrixSize / 2;
  for (int i = 0; i < matrixSize * matrixSize; i++) {
    std::cin >> num;
    if (!num) {
      count++;
    } else {
      break;
    }
  }

  std::cout << std::abs(middle - count % matrixSize) + std::abs(middle - count / matrixSize);
}