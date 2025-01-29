```cpp
#include <iostream>
#include <vector>

int main() {
  std::vector<int> myVector = {1, 2, 3, 4, 5};
  for (int i = 0; i < myVector.size(); ++i) { // Corrected condition
    std::cout << myVector[i] << " ";
  }
  std::cout << std::endl;
  return 0;
}
```