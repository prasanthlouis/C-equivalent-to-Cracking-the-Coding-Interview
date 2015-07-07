#include <iostream>
#include <unordered_map>

using namespace std;

int main()
{
   unordered_map<string,int> mymap={{"prasanth",21},{"nelson",19}};
 mymap.insert({"louis",54});
   for(auto& x: mymap)
   cout<<x.first<<"-"<<x.second<<endl;
   cout<<mymap.at("louis");
  
   
   return 0;
}
