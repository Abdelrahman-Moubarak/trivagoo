#include<iostream>
#include"Hotel.h"
#include<string>
using namespace std;
int main()
{
	HotelList x;
	Hotel h;
	Room z;
	h.ID = 1;
	h.Name = "Hotel transylvania";
	h.Number_Of_Stars = 4;
	h.Country = "Egypt";
	h.Location = "cairo";
	h.Free_Meals = "breakfast-lunch";
	h.Rate = 8.5;
	h.Has_pool = true;
	h.Has_Gym = false;
	h.Available = true;
	/////////////////////////////////// hotel
	z.Has_TV = true;
	z.Has_TV = true;
	z.Reservation_Duration = 14;
	z.reserved = false;
	z.Room_Number = 1;
	z.Singularity = false;
	/////////////////////////////////// room
	h.rooms.Add_Room(z);
	x.Add_hotel(h);
	x.Update_hotel();
	
}
