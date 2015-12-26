////////////////////////////////////////////////////////
// GUI EDITOR OUTPUT START (by Pte H. Heisen, v1.063, #Diliti)
////////////////////////////////////////////////////////

class menu{
			
	idd=-1;
	movingenable=false;
	
	class controls 
	{
			
			class background: RscPicture // mainmenu
			{
				idc = 1200;
				text = "#(argb,8,8,3)color(1,3,3,1)"; // need to add black faded image later
				x = -29 * GUI_GRID_W + GUI_GRID_X;
				y = -10.5 * GUI_GRID_H + GUI_GRID_Y;
				w = 98 * GUI_GRID_W;
				h = 46 * GUI_GRID_H;
			};

			class button1: RscButton // first
			{
				idc = 1600;
				x = -6 * GUI_GRID_W + GUI_GRID_X;
				y = 5.5 * GUI_GRID_H + GUI_GRID_Y;
				w = 9 * GUI_GRID_W;
				h = 2.5 * GUI_GRID_H;
			};
			class button2: RscButton
			{
				idc = 1601;
				x = -6 * GUI_GRID_W + GUI_GRID_X;
				y = 8.5 * GUI_GRID_H + GUI_GRID_Y;
				w = 9 * GUI_GRID_W;
				h = 2.5 * GUI_GRID_H;
			};
			class button3: RscButton
			{
				idc = 1602;
				x = -6 * GUI_GRID_W + GUI_GRID_X;
				y = 11.5 * GUI_GRID_H + GUI_GRID_Y;
				w = 9 * GUI_GRID_W;
				h = 2.5 * GUI_GRID_H;
			};
			class button4: RscButton
			{
				idc = 1603;
				x = -6 * GUI_GRID_W + GUI_GRID_X;
				y = 14.5 * GUI_GRID_H + GUI_GRID_Y;
				w = 9 * GUI_GRID_W;
				h = 2.5 * GUI_GRID_H;
			};
			class button5: RscButton // last
			{
				idc = 1604;
				x = -6 * GUI_GRID_W + GUI_GRID_X;
				y = 17.5 * GUI_GRID_H + GUI_GRID_Y;
				w = 9 * GUI_GRID_W;
				h = 2.5 * GUI_GRID_H;
			};

};
};


