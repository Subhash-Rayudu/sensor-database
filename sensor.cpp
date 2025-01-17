//
//  main.cpp
//  Sensor_Database
//
//  Created by Subhash Rayudu on 29/12/20.
//
 
#include <iostream>
#include <map>
#include <vector>
using namespace std;
 
class Sensor
{
    int id;
    char type, loc;
    map <int, int> neibors;
public:
    
    Sensor(){}
 
    void create_data_structure()
    {
        int n;
        
        cout << "Enter ID: ";
        cin >> id;
 
        cout << "Enter type: ";
        cin >> type;
 
        cout << "Enter location: ";
        cin >> loc;
 
        cout << "Enter no. of neighbours: ";
        cin >> n;
        cout << "Enter the details of neighbours:" << endl;
        for(int i = 0; i < n; ++i)
        {
            int sysid, dist;
            cin >> sysid >> dist;
            neibors[sysid] = dist;
        }
    }
    
    void retrieve_info(char type, int date, int time)
    {
        
    }
    
    void display()
    {
        cout << "Details Collected" << endl;
        cout << "ID: " << id << endl;
        cout << "Type: " << type << endl;
        cout << "Location: " << loc << endl;
        
    }
};
 
int main()
{
    cout << "Hi, Lets start!" << endl;
    
    string input;
    vector <Sensor> sensors_list;
    
    while(true)
    {
        cout << "What do you want me to do?\n->";
        cin >> input;
        if(input == "quit"){
            break;
        }
        if(input == "add_sensor"){
            Sensor *s1;
            s1 = new Sensor();
            s1->create_data_structure();
            s1->display();
            sensors_list.push_back(*s1);
        }
        if(input == "display_sensor"){
            for(auto& it : sensors_list){
                Sensor *s;
                s = &it;
                s->display();
            }
        }
    }
    
    
    
}


