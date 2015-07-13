#include<iostream>
#include<queue>
using namespace std;
int timest=0;
class Animal
{
   public: int timestamp; 
};
queue<Animal> doggyq,catq;
void adopt()
{
    Animal dg,ct;
    int dx=doggyq.front().timestamp;
    int cx=catq.front().timestamp;
    if(doggyq.empty())
    {
        cout<<"You got a cat!";
        catq.pop();
    }
    else if(catq.empty())
    {
         cout<<"You got a dog!";
        doggyq.pop();
    }
    if(dx<cx)
    {
        cout<<"You got a dog!";
        doggyq.pop();
    }
    else
    {
        cout<<"You got a cat!";
        catq.pop();
    }
}
void dog()
{
   
    Animal dg;
    dg.timestamp=timest++;
    doggyq.push(dg);
}
void cat()
{
   
    Animal ct;
    ct.timestamp=timest++;
    catq.push(ct);
}
int main()
{
    
    int y,ch;
    do
    {
        cout<<"MENU 1.DOG 2.CAT 3.LET'S ADOPT";
        cin>>ch;
        switch(ch)
        {
            case 1:dog();
                   break;
            case 2:cat();
                    break;
            case 3:adopt();
                    break;
        }
        cout<<"CONTINUE?";
        cin>>y;
    }while(y==1);
    return 0;
}

