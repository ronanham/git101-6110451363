#include <iostream>
#include <string>
using namespace std;

class Hero{
private:
    string name;
    int level;
public:
     Hero(string name, int level){
         this->name = name;
         this->level = level;
    }
    string getName(){
        return name;
    }
    int getLevel(){
        return level;
    }
};
int main()
{
   string name;
   int level;
   cin >> name >> level;
   Hero h1(name,level);
   cout << h1.getName() << " " << h1.getLevel();
}