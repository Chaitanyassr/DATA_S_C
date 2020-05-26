// comp o(logn)
#include<iostream>

using namespace std;

class Bsearch{
int arr[10], Low, High, find;
void recursive();
void iterative();
};

void Bsearch::recursive(arr[10], Low, High, find){

cout<<"\n Enter the array in asending order";
for(int i = 0;i<High;i++){
cin>>arr[i];
}

cout<<"\n Enter the number that you have to find";
cin>>x;
}

if (High >= Low){
int mid = Low + (High - Low)/2;
if(arr[mid] == x){return mid;}
else if (arr[mid] == x){return getData_recursive(arr, low, high + 1, x);}
else {return getData_recursive(arr, low, high + 1, x);}
}
else{return -1;}
}

void Bsearch::iterative(arr[10], Low, High, find) {
while (Low <= High){int mid = Low + (High - Low/)2;
if (arr[mid] == x){return m;}
if (arr[mid] < x){Low = mid + 1;}
else {High = mid - 1;}
}
return -1;
}

int main(){
Bsearch obj;
obj.recursive();
obj.iterative();
}

