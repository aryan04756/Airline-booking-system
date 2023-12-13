#include <iostream>
#include <string.h>
using namespace std;
class payment{
string name;
long long int number;
int cvv;
string email_id;
string pass;
int pin;
public:
void Credit(){
cout<<"Enter Card holder name"<<endl;
cin>>name;
cout<<"Enter Card number"<<endl;
cin>>number;
cout<<"Enter CVV"<<endl;
cin>>cvv;
cout<<"Your Payment has been Successfully completed";
}
void Debit(){
cout<<"Enter Card holder name"<<endl;
cin>>name;
cout<<"Enter Card number"<<endl;
cin>>number;
cout<<"Enter CVV"<<endl;
cin>>cvv;
cout<<"Your Payment has been Successfully completed";
}
void NetBanking(){
cout<<"Enter Mail Id"<<endl;
cin>>email_id;
cout<<"Enter Password"<<endl;
cin>>pass;
cout<<"Enter High Security Pin"<<endl;
cin>>pin;
cout<<"Your Payment has been Successfully completed";
}
};
void cancel(int x){
cout<<"You have chosen to cancel yourt trip"<<endl<<"A fee of 20% will be deducted and the rest will be returned to your Bank Account"<<endl;
cout<<"The amount returned is "<< (x+((18*x)/100))-
(20*(x+((18*x)/100))/100);
}
void change(int x){
payment p1;
cout<<"You have chosen to change the flight dates"<<endl<<"A fee of 10% will be asked for payment";
int charge=((x+((18*x)/100))*10)/100;
int mode;
cout<<"Select mode of Payment 1)Credit Card 2)Debit Card 3)Net Banking";
cin>>mode;
switch (mode){
case 1:p1.Credit();
break;
case 2:p1.Debit();
break;
case 3:p1.NetBanking();
break;
}
}
void no_change()
{
cout<<"You Have Chosen for no changes in your journey, We wish you a safe travel from our team";
}
class Display{
public:
void show(void) {
cout << " " << endl;
cout << " Welcome to PPL Flights " << endl;
cout << " Enjoy the best deals " << endl;
cout << " Book your ticket now " << endl;
cout << " " << endl;
}
};
class Airline {
public:
string
f_name,l_name,house_no,address,email_id,dob,city,state,country,pass;
int pincode,choice;
long long int phone_no;
public:
void Register(){
cout << "Enter your first name: " << endl;
cin>>f_name;
cout << "Enter your last name: " << endl;
cin>>l_name;
cout << "Enter your date of birth: " << endl;
cin>>dob;
cout << "Enter email id: " << endl;
cin>>email_id;
cout << "Enter the phone number: " <<
endl; cin>>phone_no;
cout << "Enter your house no.: " << endl;
cin>>house_no;
cout << "Enter your address(without any spaces): " << endl;
cin>>address;
cout << "Enter your city: " << endl;
cin>>city;
cout << "Enter the pincode: " << endl;
cin>>pincode;
cout << "Enter your state: " << endl;
cin>>state;
cout << "Enter your Country: " << endl;
cin>>country;
do{cout <<"https://www.cheapoair.com/travel/generaltermsandconditions/" << endl;
cout << "Please click on the checkbox" << endl;
cout << "I hereby agree that I have read all the terms and conditions and I accept all the notified information in those." << endl;
cout << "1. YES" << "\n" << "2.NO" <<
endl; cin>> choice;
if(choice == 1){
break;
}
}while(choice!=1);
}
void pin(){
do{
cout << "Enter a Password(minimum 6 digits or maximum 15 digits): "
<< endl;
cin>>pass;
if(pass.length()>=6 && pass.length()<=15){
cout << "Valid Password" << endl;
break;
}
else {
cout << "Enter a valid password" << endl;
}
}while(pass.length()<=6 || pass.length()>=15);
}
};
class Login: public Airline {
    public:
string mail,pw;
void login(){
do {
cout << "Enter your email id: " << endl;
cin>>mail;
if(email_id == mail){
break;
} }while(mail!=email_id);
do{
cout << "Enter your password: " << endl;
cin>>pw;
if(pass == pw){
for(int i=0;i<pw.length();i++){
cout << "*";
}
cout <<
endl; break;
}
}while(pass!=pw);
}
};
class Location : public Airline {
public:
string place,destination,date;
int c,a;
void source (){

cout << "Enter your location: " << endl;
cin >> place;
cout << "Enter your destination: " <<
endl; cin >> destination;
}
void Date(){
do {
cout << "Enter the date of your travel: " << endl;
cin>>date;
cout << "Do you want to change the date: " << endl << "1.YES" << endl
<< "2.NO" << endl;
cin>>a;
if(a==2){
break;
} }while(a!=2);
}
};
class Availability : public Location {
public:
int flight_choice;
void available(){
cout << "1. " << place << " to " << destination << endl << "Flight Name: Indigo" << endl << "Duration: 2hrs 05mins" << endl << "21:05 p.m. to 11:10 p.m." << endl << "Available seats: 36" << endl << endl;
cout << "2. " << place << " to " << destination << endl << "Flight Name: Air India" << endl << "Duration: 1hr 55mins" << endl << "07:00 a.m. to 08:55 a.m." << endl << "Available seats: 25" << endl << endl;
cout << "3. " << place << " to " << destination << endl << "Flight Name: Vistara" << endl << "Duration: 6hrs 00mins" << endl << "04:00 a.m. to 10:00 a.m." << "Layover for 3hrs 50 mins" << endl << "Available seats: 52" <<
endl << endl;
cout << "4. " << place << " to " << destination << endl << "Flight Name: Akasa Air" << endl << "Duration: 2hrs 10mins" << endl << "14:00 p.m. to 16:10 p.m." << endl << "Available seats: 12" << endl << endl;
cout << "5. " << place << " to " << destination << endl << "Flight Name: Air Asia" << endl << "Duration: 2hrs 20mins" << endl << "21:25 p.m. to 23:45 p.m." << endl << "Available seats: 63" << endl << endl;
cout << "Enter the preferable choice of flight: " << endl;
cin>>flight_choice;
switch(flight_choice){
case 1: cout << "Thank you for choosing Indigo, Displaying the Information of Flight: " << endl; break;

case 2: cout << "Thank you for choosing Air India, Displaying the Information of Flight: " << endl; break;

case 3: cout << "Thank you for choosing Vistara, Displaying the Information of Flight: " << endl; break;

case 4: cout << "Thank you for choosing Akasa Air, Displaying the Information of Flight: " << endl; break;

case 5: cout << "Thank you for choosing Air Asia, Displaying the Information of Flight: " << endl; break;
}
}
};
class Check : public Availability {
public:
int seats;
int amt;
void flight_info(){
switch(flight_choice){
case 1: cout << "Price: Rs. 3500/- " << endl; break;
case 2: cout << "Price: Rs. 4000/- " << endl; break;
case 3: cout << "Price: Rs. 6600/- " << endl; break;
case 4: cout << "Price: Rs. 4850/- " << endl; break;
case 5: cout << "Price: Rs. 5100/- " << endl; break;
}
cout << "Please enter the number of people travelling: " <<
endl; cin>>seats;
switch(flight_choice){
case 1: cout << "Total Fare without convenience fee and taxes: " << 3500*seats << endl;

amt=3500*seats; break;
case 2: cout << "Total Fare without convenience fee and taxes: " << 4000*seats << endl;

amt=4000*seats;break;
case 3: cout << "Total Fare without convenience fee and taxes: " << 6600*seats << endl;

amt=6600*seats; break;
case 4: cout << "Total Fare without convenience fee and taxes: " << 4850*seats << endl;

amt=4850*seats; break;
case 5: cout << "Total Fare without convenience fee and taxes: " << 5100*seats << endl;

amt=5100*seats; break;
}
}
};
class AddOns : public Check {
public:
int meal_choice;
void additionalStuff(){
cout << "Complementary meals will be provided for the flights having duration above 2hrs!" << endl;
if(flight_choice != 2){
cout << "Choose the preferable meal: 1. Veg 2. Non Veg" << endl;
cin>>meal_choice;
cout << "The menu card will also be available on flight and can be ordered on spot" << endl;

cout << "Displaying the menu for your reference: " << endl;
if(meal_choice == 1){
cout << "MENU:" << endl;
cout << "1. Veg Biryani" << endl << "2. Paneer Sandwich" << endl << "3. Veg Sandwich" << endl << "4. Veg Maggi" << endl << "5. French Fries" << endl << endl;

}
else if(meal_choice == 2){
cout << "MENU:" << endl;
cout << "1. Egg Biryani" << endl << "2. Chicken Sandwich" << endl << "3.Egg Omelete" << endl << "4. Chicken Maggi" << endl << "5. French Fries" << endl << endl;

}
}
}
};
int main(){
    Display d;
d.show();
payment c1;
Login p1;
AddOns l1;
p1.Register();
p1.pin();
p1.login();
l1.source();
l1.Date();
l1.available();
l1.flight_info();
l1.additionalStuff();
cout<<"Total Payble amount with convienience fee is"<<(l1.amt+((18*l1.amt)/100)) << endl;
int mode;
cout<<"Select mode of Payment 1)Credit Card 2)Debit Card 3)Net Banking"
<< endl;
cin>>mode;
if(mode==1)
{
c1.Credit();
}
else if(mode==2)
{
c1.Debit();
}
else if (mode==3)
{
c1.NetBanking();
}
cout<<"Do you want to cancel the flight or change filght timings" <<
endl;
cout<<"Press 1 for Flight cancellation"<<"Press 2 for change of Date"<<"Press 3 for no changes" << endl;
int cng;
cin>>cng;
if (cng==1)
{
cancel(l1.amt);
}
if (cng==2)
{
l1.Date();change(l1.amt);
}
if(cng==3){ no_change();} return 0; }