#include <iostream>
using namespace std;
int main() {
  // Flush after every std::cout / std:cerr
  std::cout << std::unitbuf;
  std::cerr << std::unitbuf;

while(true){
  std::cout << "$ ";
  
  std::string input;
  std::string PATH;
  std::getline(std::cin, input);
  std::getline(std::cin, PATH);
  string res;
  if(input.substr(0,7)=="invalid"){
        cout<<input<<": command not found"<<endl;
    }
    else if(input.substr(0,4)== "echo"){
        res=input.substr(5);
        cout<<res<<endl;
    }else if(input.substr(0,4)=="exit"){
      return 0;
    }else if(input.substr(5,7)=="invalid"){
      res=input.substr(5);
      cout<<res<<": not found"<<endl;
    }
    else{
    res=input.substr(5);
    int len=res.size();
    for(int i=0;i<=PATH.size()-len;i++){
      string str=PATH.substr(i,len);
      if(str==res){
        cout<<res<<" is "<<PATH<<endl;
      }
    }
  }
}
}