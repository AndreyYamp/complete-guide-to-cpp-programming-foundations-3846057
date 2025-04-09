#include <iostream>

class my_array{
    public:
      int count(){
        a++;
        return a;
      };
      int a = 0;
      // ... more members here
  };
  
  int main(){
    my_array *grades = new my_array();
    // ... more code here
    std::cout << grades->count() << std::endl;

    int i0=4, i1=6, i2=8;
    int& nums[3]={i2,i0,i1};
    std::cout<<nums[0]<<nums[1]<<nums[2];

    return 0;
  }