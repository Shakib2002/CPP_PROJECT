#include<bits/stdc++.h>
using namespace std;
 int main()
 {
    char startValue;
    char choiceAgain;
    float onlineShopping(void);
    startLevel:
     cout<<"=>=>=> Please press to s to Start Shopping <=<=<="<<endl;
     start:
     cin>>startValue;
     if(startValue=='s' || startValue=='S')
     {
        float totalAmount=onlineShopping();
        cout<<"Total BillAmount is: "<<totalAmount<<endl;
        shopAgain:
        cout<<"Do you want shopping again?, y or n"<<endl;
        cin>>choiceAgain;
        if(choiceAgain=='y' || choiceAgain=='Y')
        {
            goto startLevel;
        }
        else if(choiceAgain=='n' || choiceAgain=='N')
        {
            cout<<"Thanks for Shopping"<<endl;
        }
        else{
            cout<<"You have Enter Wrong Option, Please type Again "<<endl;
            goto shopAgain;
        }

     }
     else{
        cout<<"Enter Wrong Option,Please press s to Start Shopping"<<endl;
        goto start;
     }
 }

 float onlineShopping() 
 {
    char choice;
    char item;
    int quantity;
    float billAmount=0;
    itemLevel:
    cout<<"**********Welcome to Online Shopping**********"<<endl;
    cout<<"---------Please Follow the Instructions--------"<<endl;
    cout<<"(1) Please Enter m to order Mobile phone"<<endl;
    cout<<"(2) Please Enter l to order Laptop "<<endl;
    cout<<"(3) Please Enter t to order Television"<<endl;
    cout<<"(4) Please Enter w to order Watch"<<endl;
    cout<<"(5) Please Enter d to order Desktop"<<endl;
    cout<<"(6) Please Enter s to order Speaker"<<endl;
    cout<<"(7) Please Enter h to order Headphone"<<endl;
    cout<<"(8) Please Enter c to order Computer"<<endl;
    cin>>choice;
//********************Mobile Phone*****************    
    if(choice=='m'||choice=='M'){
        mobileLevel:
        cout<<"**********Welcome to Mobile Phone**********"<<endl;
        cout<<"Mobile Details"<<endl;
        cout<<"(1) Apple => Prize : 40000"<<endl;
        cout<<"(2) Vivo => Prize : 20000"<<endl;
        cout<<"(3) Samsung => Prize : 35000"<<endl;
        cout<<"(4) Redmi => Prize : 24000"<<endl;
        cout<<"(5) Realme => Prize : 10000"<<endl;
        cout<<"(6) Infinix => Prize : 15000"<<endl;
        cout<<"Please Enter Your Choice: "<<endl;
        cin>>item;
        if(item=='1')
        {
            cout<<"Enter Quantity: "<<endl;
            cin>>quantity;
            billAmount=billAmount+quantity*40000;
        }
        else if(item=='2')
        {
            cout<<"Enter Quantity: "<<endl;
            cin>>quantity;
            billAmount=billAmount+quantity*20000;
        }
        else if(item=='3')
        {
            cout<<"Enter Quantity: "<<endl;
            cin>>quantity;
            billAmount=billAmount+quantity*35000;
        }
        else if(item=='4')
        {
            cout<<"Enter Quantity: "<<endl;
            cin>>quantity;
            billAmount=billAmount+quantity*24000;
        }
        else if(item=='5')
        {
            cout<<"Enter Quantity: "<<endl;
            cin>>quantity;
            billAmount=billAmount+quantity*10000;
        }
        else if(item=='6')
        {
            cout<<"Enter Quantity: "<<endl;
            cin>>quantity;
            billAmount=billAmount+quantity*15000;
        }
        else{
            cout<<"You have Enter Wrong Option, Please type Again "<<endl;
            goto mobileLevel;
        }
        
    }


    //********************Laptop*****************    
   else if(choice=='l'||choice=='L'){
        laptopLevel:
        cout<<"**********Welcome to Laptop**********"<<endl;
        cout<<"Laptop Details"<<endl;
        cout<<"(1) Apple => Prize : 40000"<<endl;
        cout<<"(2) LG => Prize : 20000"<<endl;
        cout<<"(3) Samsung => Prize : 35000"<<endl;
        cout<<"(4) HP => Prize : 24000"<<endl;
        cout<<"(5) Lenovo => Prize : 10000"<<endl;
        cout<<"(6) Walton => Prize : 15000"<<endl;
        cout<<"Please Enter Your Choice: "<<endl;
        cin>>item;
        if(item=='1')
        {
            cout<<"Enter Quantity: "<<endl;
            cin>>quantity;
            billAmount=billAmount+quantity*40000;
        }
        else if(item=='2')
        {
            cout<<"Enter Quantity: "<<endl;
            cin>>quantity;
            billAmount=billAmount+quantity*20000;
        }
        else if(item=='3')
        {
            cout<<"Enter Quantity: "<<endl;
            cin>>quantity;
            billAmount=billAmount+quantity*35000;
        }
        else if(item=='4')
        {
            cout<<"Enter Quantity: "<<endl;
            cin>>quantity;
            billAmount=billAmount+quantity*24000;
        }
        else if(item=='5')
        {
            cout<<"Enter Quantity: "<<endl;
            cin>>quantity;
            billAmount=billAmount+quantity*10000;
        }
        else if(item=='6')
        {
            cout<<"Enter Quantity: "<<endl;
            cin>>quantity;
            billAmount=billAmount+quantity*15000;
        }
        else{
            cout<<"You have Enter Wrong Option, Please type Again "<<endl;
            goto laptopLevel;
        }
        
    }


    //********************Television*****************    
    else if(choice=='t'||choice=='T'){
        televisionLevel:
        cout<<"**********Welcome to Television**********"<<endl;
        cout<<"Television Details"<<endl;
        cout<<"(1) TCL => Prize : 40000"<<endl;
        cout<<"(2) LG => Prize : 20000"<<endl;
        cout<<"(3) Samsung => Prize : 35000"<<endl;
        cout<<"(4) Walton => Prize : 24000"<<endl;
        cout<<"(5) Sony => Prize : 10000"<<endl;
        cout<<"(6) Lenovo => Prize : 15000"<<endl;
        cout<<"Please Enter Your Choice: "<<endl;
        cin>>item;
        if(item=='1')
        {
            cout<<"Enter Quantity: "<<endl;
            cin>>quantity;
            billAmount=billAmount+quantity*40000;
        }
        else if(item=='2')
        {
            cout<<"Enter Quantity: "<<endl;
            cin>>quantity;
            billAmount=billAmount+quantity*20000;
        }
        else if(item=='3')
        {
            cout<<"Enter Quantity: "<<endl;
            cin>>quantity;
            billAmount=billAmount+quantity*35000;
        }
        else if(item=='4')
        {
            cout<<"Enter Quantity: "<<endl;
            cin>>quantity;
            billAmount=billAmount+quantity*24000;
        }
        else if(item=='5')
        {
            cout<<"Enter Quantity: "<<endl;
            cin>>quantity;
            billAmount=billAmount+quantity*10000;
        }
        else if(item=='6')
        {
            cout<<"Enter Quantity: "<<endl;
            cin>>quantity;
            billAmount=billAmount+quantity*15000;
        }
        else{
            cout<<"You have Enter Wrong Option, Please type Again "<<endl;
            goto televisionLevel;
        }
        
    }


    //********************Watch*****************    
    else if(choice=='w'||choice=='W'){
        watchLevel:
        cout<<"**********Welcome to Watch**********"<<endl;
        cout<<"Watch Details"<<endl;
        cout<<"(1) Apple => Prize : 40000"<<endl;
        cout<<"(2) Olive => Prize : 20000"<<endl;
        cout<<"(3) Nave => Prize : 35000"<<endl;
        cout<<"(4) Titan => Prize : 24000"<<endl;
        cout<<"(5) Oleo => Prize : 10000"<<endl;
        cout<<"(6) Cassino => Prize : 15000"<<endl;
        cout<<"Please Enter Your Choice: "<<endl;
        cin>>item;
        if(item=='1')
        {
            cout<<"Enter Quantity: "<<endl;
            cin>>quantity;
            billAmount=billAmount+quantity*40000;
        }
        else if(item=='2')
        {
            cout<<"Enter Quantity: "<<endl;
            cin>>quantity;
            billAmount=billAmount+quantity*20000;
        }
        else if(item=='3')
        {
            cout<<"Enter Quantity: "<<endl;
            cin>>quantity;
            billAmount=billAmount+quantity*35000;
        }
        else if(item=='4')
        {
            cout<<"Enter Quantity: "<<endl;
            cin>>quantity;
            billAmount=billAmount+quantity*24000;
        }
        else if(item=='5')
        {
            cout<<"Enter Quantity: "<<endl;
            cin>>quantity;
            billAmount=billAmount+quantity*10000;
        }
        else if(item=='6')
        {
            cout<<"Enter Quantity: "<<endl;
            cin>>quantity;
            billAmount=billAmount+quantity*15000;
        }
        else{
            cout<<"You have Enter Wrong Option, Please type Again "<<endl;
            goto watchLevel;
        }
        
    }


    //********************Desktop*****************    
    else if(choice=='d'||choice=='D'){
        desktopLevel:
        cout<<"**********Welcome to Desktop**********"<<endl;
        cout<<"Desktop Details"<<endl;
        cout<<"(1) Apple => Prize : 40000"<<endl;
        cout<<"(2) Walton => Prize : 20000"<<endl;
        cout<<"(3) Samsung => Prize : 35000"<<endl;
        cout<<"(4) Redmi => Prize : 24000"<<endl;
        cout<<"(5) Sony => Prize : 10000"<<endl;
        cout<<"(6) LG => Prize : 15000"<<endl;
        cout<<"Please Enter Your Choice: "<<endl;
        cin>>item;
        if(item=='1')
        {
            cout<<"Enter Quantity: "<<endl;
            cin>>quantity;
            billAmount=billAmount+quantity*40000;
        }
        else if(item=='2')
        {
            cout<<"Enter Quantity: "<<endl;
            cin>>quantity;
            billAmount=billAmount+quantity*20000;
        }
        else if(item=='3')
        {
            cout<<"Enter Quantity: "<<endl;
            cin>>quantity;
            billAmount=billAmount+quantity*35000;
        }
        else if(item=='4')
        {
            cout<<"Enter Quantity: "<<endl;
            cin>>quantity;
            billAmount=billAmount+quantity*24000;
        }
        else if(item=='5')
        {
            cout<<"Enter Quantity: "<<endl;
            cin>>quantity;
            billAmount=billAmount+quantity*10000;
        }
        else if(item=='6')
        {
            cout<<"Enter Quantity: "<<endl;
            cin>>quantity;
            billAmount=billAmount+quantity*15000;
        }
        else{
            cout<<"You have Enter Wrong Option, Please type Again "<<endl;
            goto desktopLevel;
        }
        
    }


    //********************Speaker*****************    
    else if(choice=='s'||choice=='S'){
        speakerLevel:
        cout<<"**********Welcome to Speaker**********"<<endl;
        cout<<"Speaker Details"<<endl;
        cout<<"(1) LG => Prize : 40000"<<endl;
        cout<<"(2) Vivo => Prize : 20000"<<endl;
        cout<<"(3) Samsung => Prize : 35000"<<endl;
        cout<<"(4) Redmi => Prize : 24000"<<endl;
        cout<<"(5) Sony => Prize : 10000"<<endl;
        cout<<"(6) Lenovo => Prize : 15000"<<endl;
        cout<<"Please Enter Your Choice: "<<endl;
        cin>>item;
        if(item=='1')
        {
            cout<<"Enter Quantity: "<<endl;
            cin>>quantity;
            billAmount=billAmount+quantity*40000;
        }
        else if(item=='2')
        {
            cout<<"Enter Quantity: "<<endl;
            cin>>quantity;
            billAmount=billAmount+quantity*20000;
        }
        else if(item=='3')
        {
            cout<<"Enter Quantity: "<<endl;
            cin>>quantity;
            billAmount=billAmount+quantity*35000;
        }
        else if(item=='4')
        {
            cout<<"Enter Quantity: "<<endl;
            cin>>quantity;
            billAmount=billAmount+quantity*24000;
        }
        else if(item=='5')
        {
            cout<<"Enter Quantity: "<<endl;
            cin>>quantity;
            billAmount=billAmount+quantity*10000;
        }
        else if(item=='6')
        {
            cout<<"Enter Quantity: "<<endl;
            cin>>quantity;
            billAmount=billAmount+quantity*15000;
        }
        else{
            cout<<"You have Enter Wrong Option, Please type Again "<<endl;
            goto speakerLevel;
        }
        
    }


    //********************Headphone*****************    
    else if(choice=='h'||choice=='H'){
        headphoneLevel:
        cout<<"**********Welcome to Headphone**********"<<endl;
        cout<<"MHeadphone Details"<<endl;
        cout<<"(1) Apple => Prize : 40000"<<endl;
        cout<<"(2) Vivo => Prize : 20000"<<endl;
        cout<<"(3) Samsung => Prize : 35000"<<endl;
        cout<<"(4) Redmi => Prize : 24000"<<endl;
        cout<<"(5) Realme => Prize : 10000"<<endl;
        cout<<"(6) Sony => Prize : 15000"<<endl;
        cout<<"Please Enter Your Choice: "<<endl;
        cin>>item;
        if(item=='1')
        {
            cout<<"Enter Quantity: "<<endl;
            cin>>quantity;
            billAmount=billAmount+quantity*40000;
        }
        else if(item=='2')
        {
            cout<<"Enter Quantity: "<<endl;
            cin>>quantity;
            billAmount=billAmount+quantity*20000;
        }
        else if(item=='3')
        {
            cout<<"Enter Quantity: "<<endl;
            cin>>quantity;
            billAmount=billAmount+quantity*35000;
        }
        else if(item=='4')
        {
            cout<<"Enter Quantity: "<<endl;
            cin>>quantity;
            billAmount=billAmount+quantity*24000;
        }
        else if(item=='5')
        {
            cout<<"Enter Quantity: "<<endl;
            cin>>quantity;
            billAmount=billAmount+quantity*10000;
        }
        else if(item=='6')
        {
            cout<<"Enter Quantity: "<<endl;
            cin>>quantity;
            billAmount=billAmount+quantity*15000;
        }
        else{
            cout<<"You have Enter Wrong Option, Please type Again "<<endl;
            goto headphoneLevel;
        }
        
    }


    //********************Computer*****************    
    else if(choice=='c'||choice=='C'){
        computerLevel:
        cout<<"**********Welcome to Computer**********"<<endl;
        cout<<"Computer Details"<<endl;
        cout<<"(1) Osaka => Prize : 40000"<<endl;
        cout<<"(2) Apple => Prize : 20000"<<endl;
        cout<<"(3) Samsung => Prize : 35000"<<endl;
        cout<<"(4) Redmi => Prize : 24000"<<endl;
        cout<<"(5) Sony => Prize : 10000"<<endl;
        cout<<"(6) Walton => Prize : 15000"<<endl;
        cout<<"Please Enter Your Choice: "<<endl;
        cin>>item;
        if(item=='1')
        {
            cout<<"Enter Quantity: "<<endl;
            cin>>quantity;
            billAmount=billAmount+quantity*40000;
        }
        else if(item=='2')
        {
            cout<<"Enter Quantity: "<<endl;
            cin>>quantity;
            billAmount=billAmount+quantity*20000;
        }
        else if(item=='3')
        {
            cout<<"Enter Quantity: "<<endl;
            cin>>quantity;
            billAmount=billAmount+quantity*35000;
        }
        else if(item=='4')
        {
            cout<<"Enter Quantity: "<<endl;
            cin>>quantity;
            billAmount=billAmount+quantity*24000;
        }
        else if(item=='5')
        {
            cout<<"Enter Quantity: "<<endl;
            cin>>quantity;
            billAmount=billAmount+quantity*10000;
        }
        else if(item=='6')
        {
            cout<<"Enter Quantity: "<<endl;
            cin>>quantity;
            billAmount=billAmount+quantity*15000;
        }s
        else{
            cout<<"You have Enter Wrong Option, Please type Again "<<endl;
            goto computerLevel;
        }
        
    }
            else{
            cout<<"You have Enter Wrong Option, Please type Again "<<endl;
            goto itemLevel;
        }
    return billAmount;
 }