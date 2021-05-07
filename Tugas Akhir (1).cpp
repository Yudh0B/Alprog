#include<iostream>
#include<conio.h>
using namespace std;
int main ()
{
	int tanggal, Bulan;
	cout<<"Masukkan Tanggal Lahir : ";
	cin>>tanggal;
	cout<<"Masukkan Bulan Lahir : ";
	cin>>Bulan;
	if(Bulan<=12)
	{
		if(Bulan=12)
		{
			if(tanggal>=22)
			{
				cout<<"Zodiak Anda Capricorn";
			}
			else
			{
				cout<<"Zodiak Anda Sagitarius";
			}
		}
		else
		{i
			if(Bulan=11)
			{
				if(tanggal>=22)
				{
					cout<<"Zodiak Anda Sagitarius";
				}
				else
				{
					cout<<"Zodiak Anda Scorpio";
				}
			}
			else
			{
				if(Bulan=10)
				{
					if(tanggal>=23)
					{
						cout<<"Zodiak Anda Scorpio";
					}
					else
					{
						cout<<"Zodiak Anda Libra";
					}
				}
				else
				{
					if(Bulan=9)
					{
						if(tanggal>=23)
						{
							cout<<"Zodiak Anda Libra";
						}
						else
						{
							cout<<"Zodiak Anda Virgo";
						}
					}
					else
					{
						if(Bulan=8)
						{
							if(tanggal>=23)
							{
								cout<<"Zodiak Anda Virgo";
							}
							else
							{
								cout<<"Zodiak Anda Leo";
							}
						}
						else
						{
							if(Bulan=7)
							{
								if(tanggal>=23)
								{
									cout<<"Zodiak Anda Leo";
								}
								else
								{
									cout<<"Zodiak Anda Cancer";
								}
							}
							else
							{
								if(Bulan=6)
								{
									if(tanggal>=21)
									{
										cout<<"Zodiak Anda Cancer";
									}
									else
									{
										cout<<"Zodiak Anda Gemini";
									}
								}
								else
								{
									if(Bulan=5)
									{
										if(tanggal>=21)
										{
											cout<<"Zodiak Anda Gemini";
										}
										else
										{
											cout<<"Zodiak Anda Taurus";
										}
									}
									else
									{
										if(Bulan=4)
										{
											if(tanggal>=20)
											{
												cout<<"Zodiak Anda Taurus";
											}
											else
											{
												cout<<"Zodiak Anda Aries";
											}
										}
										else
										{
											if(Bulan=3)
											{
												if(tanggal>=21)
												{
													cout<<"Zodiak Anda Aries";
												}
												else
												{
													cout<<"Zodiak Anda Pisces";
												}
											}
											else
											{
												if(Bulan=2)
												{
													if(tanggal>=19)
													{
														cout<<"Zodiak Anda Pisces";
													}
													else
													{
														cout<<"Zodiak Anda Aquarius";
													}
												}
												else
												{
													if(Bulan=1)
													{
														if(tanggal>=20)
														{
															cout<<"Zodiak Anda Aquarius";
														}
														else
														{
															cout<<"Zodiak Anda Capricorn";
														}
													}
												}
											}
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}
	else
	{
		cout<<"Salah Input Mas, Mohon Diulang";	
	}
}
