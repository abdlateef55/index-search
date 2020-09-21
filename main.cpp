#include <iostream>
#include <stdio.h>
#include <string>
using namespace std;
static int search(int arr[] , int key){
    int i;
    for(i=0; i<=7; i++){
        if(arr[i] == key){
            return i;
        }
        return -1;
    }
}
int main(){
    int arr [] = {34,45,56,67,78,98,45};
    int key = 34;
    cout<<"index of " << key << " is " << search(arr , key);
}
