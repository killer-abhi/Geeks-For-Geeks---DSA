#include<bits/stdc++.h>
using namespace std;

struct Deque{
    int *arr;
    int cap;
    int size;

    Deque(int s){
        cap=s;
        arr=new int[cap];
        size=0;
    }
    bool isFull(){
        return size==cap;
    }
    bool isEmpty(){
        return size==0;
    }

    void insertFront(int key){
        if(isFull()){
            return;
        }else{
            for(int i=size;i>0;i--){
                arr[i]=arr[i-1];
            }
            arr[0]=key;
            size++;
        }
    }
    void insertRear(int key){
        if(isFull()){
            return;
        }
        arr[size]=key;
        size++;
    }
    void deleteFront(){
        if(isEmpty()){
            return;
        }else{
            for(int i=0;i<size;i++){
                arr[i]=arr[i+1];
            }
            size--;
        }
    }
    void deleteRear(){
        if(isEmpty()){
            return;
        }else{
            size--;
        }
    }
    int getFront(){
        return arr[0];
    }
    int getRear(){
        return arr[size-1];
    }
    int getSize(){
        return size;
    }

};

int main()
{
    Deque d(10);
    d.insertFront(5);
    d.insertFront(15);
    d.insertRear(25);
    d.insertRear(35);
    cout<<d.getFront();
    cout<<d.getRear();
    d.deleteFront();
    cout<<d.getFront();
    cout<<d.getSize();
    return(0);
}