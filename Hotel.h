#pragma once
#include <string>
using namespace std;



struct Room
{
	int Room_Number;
	int Reservation_Duration;
	bool Singularity;
	bool Has_TV;
	bool Has_Wifi;
	bool reserved;
};

class RoomNode
{
public:
	RoomNode* next;
	Room value;

	RoomNode(Room val);
};

class RoomList
{
public:
	RoomNode* start;
	RoomNode* end;
	int Number_Of_Rooms;
public:
	RoomList();
	void Add_Room(Room val);
	void Update_Room();
};




struct Hotel
{
	string Name;
	string Country;
	string Location;
	string Free_Meals;
	string comments;
	int Number_Of_Stars;
	int Number_Of_Rooms;
	double Rate;
	int ID;
	bool Has_Gym;
	bool Has_pool;
	bool Available;
	RoomList rooms;
};


class HotelNode
{
public:
	HotelNode* next;
	Hotel value;

	HotelNode(Hotel val);
};

class HotelList
{
	HotelNode* head;
	HotelNode* tail;
	int Number_Of_Hotels;
public:
	HotelList();
	void Add_hotel(Hotel val);
	void Update_hotel();
};


