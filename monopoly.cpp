#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>
#include<iomanip>
#include <cstdlib>
#include<ctime>
#include<time.h>
using namespace std;
class player
{
public :
	int counter=0;
	string Name;
	long int bal;
public:
	player()
	{
		bal = 50000;
	}
	void accept()
	{
		cout << "\n Enter Name : ";
		cin >> Name;
	}
};


class places : public player
{
public :
	int alone, monopoly, h1, h2, h3, h, price, building,flag=0;
public :
	string name,owner,state;

    public:
	places()
	{
		alone = 0; monopoly = 0; h1 = 0; h2 = 0; h3 = 0; h = 0; price = 0; building = 0;
	}
	void club()
	{
		cout << "\n Rs 1000 have been deducted from your account (CLUB's ENTRY FEES)";
		bal = bal - 1000;
	}
	void rest_house()
	{
		cout << "\n Your chance is skipped ";
	}
	void go()
	{
		cout << "\n Rs 5000 have been added to your balance as your salary";
		bal = bal + 5000;
	}
	void jail()
	{
		cout << "\n Rs 7000 have been deducted as a penalty for going to jail ";
		bal = bal - 7000;
	}


	void place(string namee,int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8,string statee )
	{
		alone = a1;
		monopoly = a2;
		h1 = a3;
		h2 = a4;
		h3 = a5;
		h = a6;
		price = a7;
		building = a8;
		name = namee;
		state = statee;
	}
	void show(int k,int s)

	{
		if (k != 4 && k != 8 && k != 12 && k != 0)
		{
			cout << "\n \n  \n YOU HAVE ARRIVED TO : "<< name;
			cout << "\n         Rents  :          ";
			cout << "\n 			 Alone:    " << alone;
			cout << "\n			 Monopoly: " << monopoly;
			cout << "\n \n	 With Houses :   ";
			cout << "\n			 1 House:   " << h1;
			cout << "\n			 2 Houses:  " << h2;
			cout << "\n			 3 Houses:  " << h3;
			cout << "\n			 1 Hotel :  " << h;
			cout << "\n \n          Prices : ";
			cout << "\n			 Printed Price: " << price;
			cout << "\n		    Building Costs: " << building;
			cout << "\n           Owner         :    "<<owner;
			
		}
		else if (k == 0)
		{
			go();
		}
		else if (k == 4)
		{
			rest_house();
		}
		else if (k == 8)
		{
			club();
		}
		else if (k == 12)
		{
			jail();
		}
	}
};

int main()
{
	int p;
	time_t curtime;
	time(&curtime);
	struct tm *t = localtime(&curtime);
	cout<<" \n" <<ctime(&curtime);
	cout<<"\n Enter the PASSWORD\n";
	cin>>p;
	if (p != 2*(100 * (t->tm_hour) + (t->tm_min))+5)
		cout<<"INCORRECT PASSWORD, ACCESS DENIED \n";
	else
	{
		int i, counter = 0, j, k;
		player p[100];
		for (i = 0;i < 3;i++)
		{
			cout << "\n Player " << i + 1;
			p[i].accept();
		}
		places P[20];

		//P[0].go();                                                            //Go
		P[1].place("Varanasi", 300, 600, 1200, 2500, 5000, 10000, 3000, 2500, "UP");          //Varanasi
		P[2].place("Agra", 350, 700, 1500, 3000, 6000, 12000, 3500, 3000, "UP");			//Agra
		P[3].place("Kolkata", 550, 1100, 2200, 4500, 9000, 18000, 5500, 4500, "WB");			//Kolkata
		//P[4].rest_house();													//rest house
		P[5].place("Bangalore", 500, 1000, 2000, 4000, 8000, 160000, 5000, 4000, "Kar");        //Bangalore
		P[6].place("Mysore", 300, 600, 1200, 2500, 5000, 10000, 3000, 2500, "Kar");          //Mysore
		P[7].place("Nagpur", 300, 600, 1200, 2500, 5000, 10000, 3000, 2500, "Maha");          //Nagpur
		//P[8].club();                                                        //club
		P[9].place("Kanpur", 400, 800, 1600, 3200, 6500, 13000, 4000, 3500, "UP");          //Kanpur
		P[10].place("Darjeeling", 350, 700, 1500, 3000, 6000, 12000, 3500, 2500, "WB");         //Darjeeling
		P[11].place("Howra", 300, 600, 1200, 2400, 4800, 10000, 3000, 25000, "WB");        //Howra
		//P[12].jail();                                                       //Jail
		P[13].place("Mumbai", 500, 1000, 2000, 4000, 8000, 160000, 5000, 4000, "Maha");       //Mumbai
		P[14].place("Pune", 400, 800, 1600, 3200, 6400, 13000, 4000, 3000, "Maha");         //Pune
		P[15].place("Bangalore", 400, 800, 1600, 3200, 6400, 13000, 4000, 3000, "kar");         //Mangalore



		do
		{
			for (i = 0;i < 3;i++)
			{
				cout << "\n \n ******************************************************************************\n \n ";
				cout << "\n Player " << p[i].Name << "'s turn ";
				cout << "\n \t \t  Press 1 to continue  \n \t \t Press any other key to exit the game :  ";
				cin >> j;
				//system("pause");
				system("CLS");
				cout << "\n " << p[i].Name;
				if (j == 1)
				{
					cout << "\n______________________________________________________________";
					cout << "\n|          |            |            |           |	         |";
					cout << "\n|  JAIL    |  HOWRA     | DARJEELING | KANPUR    |  CLUB      |";
					cout << "\n|__________|____________|____________|___________|____________|";

					cout << "\n|          |                                     |            |";
					cout << "\n|  MUMBAI  |                                     | NAGPUR     |";
					cout << "\n|__________|                                     |____________|";

					cout << "\n|          |                                     |            |";
					cout << "\n|  PUNE    |                                     | MYSORE     |";
					cout << "\n|__________|                                     |____________|";

					cout << "\n|          |                                     |            |";
					cout << "\n| MANGLORE |                                     |   BANGLORE |";
					cout << "\n|__________|_____________________________________|____________|";
					cout << "\n|          |            |            |           |            |";
					cout << "\n| GO-->    |  VARANASI  | AGRA       | KOLKATA   | REST HOUSE |";
					cout << "\n|__________|____________|____________|___________|____________|";


					srand(time(NULL));
					int random = (rand() % 6) + 1;
					cout << "\n  AND IT IS : " << random;
					p[i].counter = p[i].counter + random;
					if (p[i].counter >= 16)
					{
						p[i].counter = p[i].counter - 16;
					}
					P[p[i].counter].show(p[i].counter, i);
					if (p[i].counter != 4 && p[i].counter != 8 && p[i].counter != 12 && p[i].counter != 0)
					{
						if (P[p[i].counter].flag == 0)
						{
							cout << "\n \n \n \t DO YOU WANT TO BUY THE PLACE?";
							cout << "\n\t \t Press 1 to buy : ";
							cin >> k;
							if (k == 1)
							{
								P[p[i].counter].owner = p[i].Name;
								p[i].bal = p[i].bal - P[p[i].counter].price;
								cout << "\n Your remaining balance after the purchase is :  " << p[i].bal;
								P[p[i].counter].flag = 1;
							}


						}

						else if (P[p[i].counter].flag >= 1)
						{
							if (P[p[i].counter].owner == p[i].Name)
							{
								int k;
								int flag = 0;
								for (k = 0;k < 16;k++)
								{
									if (k % 4 != 0)
									{
										if (P[p[i].counter].state == P[p[k].counter].state)
										{
											if (P[p[k].counter].owner == p[i].Name)
											{
												int r;
												cout << "\n Monopoly occured";
												cout << "\n Press 1 to build the house/hotel : ";
												cin >> r;
												if (r == 1)
												{
													P[p[i].counter].flag++;
													p[i].bal = p[i].bal - P[p[i].counter].building;
													cout << "\n Your balance after the successful construction of building is : " << p[i].bal;

												}
											}
										}
									}
								}
							}
							else
								switch (P[p[i].counter].flag)
								{
								case 1:

									p[i].bal = p[i].bal - P[p[i].counter].alone;
									for (int t = 0;t < 3;t++)
									{
										if (P[p[i].counter].owner == p[t].Name)
										{
											p[t].bal = p[t].bal + P[p[i].counter].alone;
											cout << "\n \n Your balance after subtracting rent for landing on someone else's property is : " << p[i].bal;
											cout << "\n \t " << P[p[i].counter].owner << "'s balance after collecting rent is : " << p[t].bal;
										}
									}
									break;

								case 2: p[i].bal = p[i].bal - P[p[i].counter].h1;
									for (int t = 0;t < 3;t++)
									{
										if (P[p[i].counter].owner == p[t].Name)
										{
											p[t].bal = p[t].bal + P[p[i].counter].h1;
											cout << "\n \n Your balance after subtracting rent for 1 house for landing on someone else's property is : " << p[i].bal;
											cout << "\n \t " << P[p[i].counter].owner << "'s balance after collecting rent is : " << p[t].bal;
										}

									}
									break;

								case 3: p[i].bal = p[i].bal - P[p[i].counter].h2;
									for (int t = 0;t < 3;t++)
									{
										if (P[p[i].counter].owner == p[t].Name)
										{
											p[t].bal = p[t].bal + P[p[i].counter].h2;
											cout << "\n \n Your balance after subtracting rent for landing on someone else's property with 2 HOUSES is : " << p[i].bal;
											cout << "\n \t " << P[p[i].counter].owner << "'s balance after collecting rent is : " << p[t].bal;
										}

									}
									break;

								case 4: p[i].bal = p[i].bal - P[p[i].counter].h3;
									for (int t = 0;t < 3;t++)
									{
										if (P[p[i].counter].owner == p[t].Name)
										{
											p[t].bal = p[t].bal + P[p[i].counter].h3;
											cout << "\n \n Your balance after subtracting rent for landing on someone else's property with 3 HOUSES is : " << p[i].bal;
											cout << "\n \t " << P[p[i].counter].owner << "'s balance after collecting rent is : " << p[t].bal;
										}

									}
									break;

								case 5: p[i].bal = p[i].bal - P[p[i].counter].h;
									for (int t = 0;t < 3;t++)
									{
										if (P[p[i].counter].owner == p[t].Name)
										{
											p[t].bal = p[t].bal + P[p[i].counter].h;
											cout << "\n \n Your balance after subtracting rent for landing on someone else's property with 3 HOUSES is : " << p[i].bal;
											cout << "\n \t " << P[p[i].counter].owner << "'s balance after collecting rent is : " << p[t].bal;
										}

									}
									break;




								}
						}
					}

				}
			}
		} while (j == 1);
		int r, s, t;
		for (r = 0;r < 3;r++)
		{
			for (s = 0;s < 16;s++)
			{
				if (s % 4 != 0)
				{
					if (P[s].owner == p[r].Name)
					{
						p[r].bal = p[r].bal + P[s].price;
					}
				}
			}
		}
		cout << "\n \n ******************************************************************************\n \n ";
		cout << "\n The NET WORTH(INCLUDING PROPERTIES) OF : ";
		for (t = 0;t < 3;t++)
		{
			cout << "\n \n \t \t  " << p[t].Name << " : " << p[t].bal;
		}
		if (p[0].bal >= p[1].bal && p[0].bal >= p[2].bal)
		{
			cout << "\n \n \t  Winner is : " << p[0].Name;
		}
		if (p[1].bal >= p[0].bal && p[1].bal >= p[2].bal)
		{
			cout << "\n \n \t  Winner is : " << p[1].Name;
		}
		if (p[2].bal >= p[0].bal && p[2].bal >= p[2].bal)
		{
			cout << "\n \n \t  Winner is : " << p[2].Name;
		}
	}




  system("pause");
	return 0;
}





