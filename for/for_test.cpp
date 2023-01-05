#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
  struct test_struct{
    int num;
    string str;
    bool test;
  };

  std::vector<test_struct> lists;
  
  test_struct t1;
  t1.num = 1;
  t1.str = "one";
  t1.test = false;
  
  test_struct t2;
  t2.num = 2;
  t2.str = "two";
  t2.test = false;
 
  test_struct t3;
  t3.num = 3;
  t3.str = "three";
  t3.test = false;
  
  lists.push_back(t1);
  lists.push_back(t2);
  lists.push_back(t3);
  
  // Update boolean value to true
  for(auto i: lists)
  {
  	i.test = true;
    
  }
  
  // Check value not updated
  for(auto const i: lists)
  {
  	cout << i.num << ": " << i.test << std::endl;
    
  }
  
  // Use iterator and update
  for (auto i=lists.begin(); i != lists.end(); ++i)
  {
  	i->test = true;
  }
  
  
  // Check value  updated
  for(auto const i: lists)
  {
  	cout << i.num << ": " << i.test << std::endl;
    
  }


  return 0;
}
