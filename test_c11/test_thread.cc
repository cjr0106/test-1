/**
* @file   test_thread.cpp
* @author wanguanglu(mail@wanguanglu.com)
* @date   2017/10/11 11:18:28
* @brief 
*  
**/

#include <iostream>
#include <thread>

void func3() {
  std::cout << "In func3." << std::endl;
}

void func4(int y, int z) {
  std::cout << "In func4 " << "y: " << y << " z: " << z << std::endl;
}

class A {
public:
  void TestThread() {
    std::thread t1(&A::func1,this);
    t1.join();

    std::thread t2(&A::func2,this, 2, 3);
    t2.join();

    std::thread t3(&func3);
    t3.join();

    std::thread t4(&func4, 2, 3);
    t4.join();
  }

  void func1(){
    std::cout << "In func1." << std::endl;
  }

  void func2(int y, int z){
    std::cout << "In func2." << std::endl;
    std::cout << "x: " << x << " y: " << y << " z: " << z << std::endl;
  }

private:
  int x = 0;
};

void Test() {
  A a;
  a.TestThread();
}

int main(int argc, char* argv[]) {
  Test();
  return 0;
}
