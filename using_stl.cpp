#include <iostream>
#include <queue>
using namespace std;

int main() 
{
    queue<int> q;
   
    q.push(30); 
    q.push(20);
    q.push(10);

    
    cout<< "Front element before pop: " <<q.front() <<endl;

    
    q.pop();

    
    cout<< "Front element after pop: " <<q.front() <<endl;

    return 0;
}

/*
OUTPUT: 
Front element before pop: 30
Front element after pop: 20
*/