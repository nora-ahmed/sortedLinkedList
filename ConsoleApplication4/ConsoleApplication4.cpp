
#include <iostream>
#include "sortedLinkedList.cpp"
using namespace std;
int main()
{
 sortedLinkedList<int> s;
 sortedLinkedList<int> s1;
    s.insert(5);
    s.insert(6);
    s.insert(3);
    s.insert(3);
    s.insert(6);
    s.insert(3);
    s.insert(50);
    cout << s.getMin() << endl;
    s1.insert(50);
    s1.insert(5);
    s1.insert(6);
    s1.insert(3);
    s1.insert(3);
    cout << s1.getMin() << endl;
    //s.display();
    cout << endl;
    cout << "list1"<<endl;
    s.display();
    cout << endl << "list2"<<endl;
    s1.display();
    sortedLinkedList<int> s2;
    s2=s.intersection(s1);
   // cout << s1.getMin();
    cout << endl;
    //s.merge(s1);
    cout << "intersection"<<endl;
    s2.display();
    cout << endl;
    
    return 0;
}

