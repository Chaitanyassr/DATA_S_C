#include <iostream>

using namespace std;

class search{
public:
   int array[10], n, x;
   void getArray();
   void display();
};

void search::getArray(){
cout<<"\n Enter the length of the array";
cin>>n;
for(int i = 0;i<n;i++){
cin>>array[i];
}
cout<<"\n Enter the number that you have to find";
cin>>x;
}

void search::display(){
for(int i = 0;i<n;i++){
if(x == array[i]){
cout<<"\n The element is"<<x;
}
else{
cout<<"\n The element is not present";
}
}
}

int main(){

search obj;
obj.getArray();
obj.display();

}
