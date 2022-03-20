void	NineNineNineNineNineNineNine_GP(void)
{
	WRITEU32(offset + 0x067E828, 0x0098967F);
}

void	Ball_Goes_In_From_Any_Spot(void)
{
	offset = 0x00000000;
	WRITEU32(offset + 0x02725D0, 0x0A000003);
	WRITEU32(offset + 0x0271A48, 0x2A0002E1);
	WRITEU32(offset + 0x0271A24, 0xDA0002EA);
	if (is_pressed(0x00000800))
	{
		WRITEU32(offset + 0x02725D0, 0xEA000003);
		WRITEU32(offset + 0x0271A48, 0xE1A00000);
		WRITEU32(offset + 0x0271A24, 0xE1A00000);
		offset = 0;
		data = 0;
	}
}

void	All_Clubs_And_Balls_Are_Unlocked(void)
{
	for (int i = 0; i < 0x00000088; i++)
	{
		WRITEU8(offset + 0x067E609, 0x00000033);
		offset += 0x00000001;
		continue;
	}
}

void	Costumes_unlocked(void)
{
	for (int i = 0; i < 0x00000028; i++)
	{
		WRITEU8(offset + 0x067E7FB, 0x00000033);
		offset += 0x00000001;
		continue;
	}
}

void	Gloves_and_Shoes_unlocked(void)
{
	for (int i = 0; i < 0x0000009C; i++)
	{
		WRITEU8(offset + 0x067E75F, 0x00000033);
		offset += 0x00000001;
		continue;
	}
}

void	Shirts_and_shorts_unlocked(void)
{
	for (int i = 0; i < 0x00000032; i++)
	{
		WRITEU8(offset + 0x067E691, 0x00000033);
		offset += 0x00000001;
		continue;
	}
}

void	Suits_and_Visors_unlocked(void)
{
	for (int i = 0; i < 0x0000009C; i++)
	{
		WRITEU8(offset + 0x067E6C3, 0x00000033);
		offset += 0x00000001;
		continue;
	}
}


