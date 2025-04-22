// Online C++ compiler to run C++ program online
#include <iostream>
#include <unordered_map>

using namespace std;

int main() {
    // Write C++ code here
    unordered_map<string, int>mapping;
    
    // insertion
    pair<string, int> p = make_pair("Amit", 25);
    pair<string, int> q ("Babbar", 26);
    pair<string, int> r ;
    r.first = "Lakshya";
    r.second = 27;
    mapping["Ansh"] = 28;
    
    mapping.insert(p);
    mapping.insert(q);
    mapping.insert(r);
    
    cout<<"Size of map: "<<mapping.size()<<endl;
    
    // Access
    cout<<mapping.at("Amit")<<endl;
    cout<<mapping["Amit"]<<endl;
    
    // Searching
    cout<<mapping.count("Amit")<<endl;
    if(mapping.find("Amit") != mapping.end()){
        cout<<"found"<<endl;
    }
    else{
        cout<<"not found";
    }

    return 0;
}