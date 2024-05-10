#include<bits/stdc++.h>
using namespace std;

struct Item{
    int weight;
    int value;
    float valPerW;
    int selected;
};

bool comparator(Item &first,Item &second){
    return first.valPerW>second.valPerW;
}
void fractionalKnapsack(vector<Item> items,int capacity){
    sort(items.begin(),items.end(),&comparator);
    float maxValue=0;
    for(int i=0;i<items.size();i++){
        if(items[i].weight<=capacity){
            capacity=capacity-items[i].weight;
            items[i].selected=items[i].weight;
            maxValue+=items[i].value;
        }
        else if(capacity>0&&items[i].weight>capacity){
            items[i].selected=capacity;
            maxValue+=capacity*items[i].valPerW;
        }
    }
    for(int i=0;i<items.size();i++){
        Item item=items[i];
        if(item.selected!=0){
            cout<<item.weight<<"\t"<<item.selected<<endl;
        }
    }
    cout<<"Maximum Value :: "<<maxValue<<endl;
}

int main()
{
    vector<Item> items;
    int n;
    cout<<"Enter total Items :: ";
    cin >> n;
    Item obj;
    for (int i = 0; i < n; i++)
    {
        cout<<"Enter Weight of Item ::";
        cin >> obj.weight;
        cout<<"\n Enter value of Item ::";
        cin >> obj.value;
        obj.valPerW=(float) obj.value/obj.weight;
        obj.selected=0;
        items.push_back(obj);
    }
    int capacity;
    cout<<"Enter Bag Capacity :: ";
    cin>> capacity;
    fractionalKnapsack(items,capacity);
    return(0);
}