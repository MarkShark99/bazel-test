#include <iostream>

#include "fruit/fruit.h"

class Test {
public:
  INJECT(Test()) = default;

  fruit::Component<Test> getTestComponent() {
    return fruit::createComponent();
  }
};

int main() { std::cout << "Hello, world" << std::endl; }