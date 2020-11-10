#include <iostream>

int main(){
  std::string comm1;
  std::string path;
  bool error_yes;
  error_yes = false;
  path = "c:/";
  std::cin>>comm1;
  if(comm1 == "show path"){
    std::cout<<"path"<<std::endl;
  }
  if(comm1 == "ls"){
    std::cout<<"user <dir>\ncommand <dir>\n";
    std::cout<<"user free storage:- 123GB"<<std::endl;
    std::string comm2;
    std::cin>>comm2;
    if(comm2 == "cd user"){
      path = "c:/user/";
      std::string comm3;
      std::cin>>comm3;
      if(comm3 == "ls"){
        std::cout<<"<empty>\n";
      }
      if(comm3 == "cd.."){
        path = "c:/";
      }
    }
    if(comm2 == "show path"){
      std::cout<<path<<std::endl;
    }
    if(comm2 == "cd command"){
      error_yes = true;
      path = "xxxxxxxxx";
      std::cout<<path;
    }
  }
  if(comm1 == "cd user"){
    path = "c:/user/";
    std::string comm4;
    std::cin>>comm4;
    if(comm4 == "ls"){
      std::cout<<"<empty>\n";
    }
    if(comm4 == "cd.."){
      path = "c:/";
    }
    if(comm4 == "show path"){

    }
  }
  if(comm1 == "cd command"){
    error_yes = true;
    path = "xxxxxxx";
    std::cout<<path<<std::endl;
  }
  if(comm1 == "cd.."){
    error_yes = true;
    path = "xxxxxxx";
    std::cout<<path<<std::endl;
  }
}