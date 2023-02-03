
#include<iostream>
#include<conio.h>
#include<graphics.h>
#include<dos.h>

int main()
{

	int gd=DETECT,gm,i,j;
	initgraph(&gd,&gm,"C:\\tc\\bgi");
	
	
//	initwindow(1380, 800);					// for maximum window size
	
	
	for(int i=-300;i<=300;i++)	
	{
		
		setfillstyle(SOLID_FILL,YELLOW);
		rectangle(200,300-i,245,345-i);			// roof top of car
		floodfill(201,301-i+1,WHITE);



			
		line(200, 345-i, 208,360-i);			// Back parallelogram glass of car
		line(245, 345-i, 253,360-i);
		line(208, 360-i, 253,360-i);
	
	
	
		line(200, 300-i, 208, 290-i);			// Front parallelogram glass of car
		line(245, 300-i, 253, 290-i);
		line(208, 290-i, 253, 290-i);	
		
		
		rectangle(208, 360-i, 253, 385-i);		// car ko paxadi ko dikki
		
		
		
		
		line(208, 290-i, 208,260-i); // car  kol engine part
		line(253, 290-i, 253,260-i);
		
		
		arc(231.5,281-i,45,135,32);
		
		
		
		
		
		line(245, 322-i, 260, 322-i);			// side winodw bar
		line(260, 322-i, 260, 312-i);
		line(260, 322-i, 260, 332-i);
		
		
		arc(260, 341-i, 90,270,8 ); 
		arc(260, 304-i, 90,270,8 ); 	
		
		
		circle(262,341-i,6); // wheels
		circle(262,304-i,6);
		
		
		line(260,294-i,260,267-i);  //base line of car
		line(253,260-i,260,267-i);
		line(259,350-i,259,393-i);

		
		
		line( 208,385-i,212,393-i); // number plate place
		line(253,385-i,257,393-i);
		line(212,393-i,257,393-i);
			
			
		
		
		
		
		
		// Road code starts from here
		
		line(175,480,175,5);  // Left side line of ROAD
		line(425,480,425,5);  // Right Side line of ROAD
		
		// middle dotted line of road starts from here	
		line(300,480,300,440);
		line(300,400,300,360);
		line(300,320,300,280);
		line(300,240,300,200);
		line(300,160,300,120);
		line(300,80,300,40);
	    // middle dotted line ends at here
	    
	    // Road code ends at here
		
		
		
		delay(10);
		cleardevice();	
//		
		
				
		// Road code starts from here
		
		line(175,480,175,5);  // Left side line of ROAD
		line(425,480,425,5);  // Right Side line of ROAD
		
		// middle dotted line of road starts from here	
		line(300,480,300,440);
		line(300,400,300,360);
		line(300,320,300,280);
		line(300,240,300,200);
		line(300,160,300,120);
		line(300,80,300,40);
	    // middle dotted line ends at here
	    
	    // Road code ends at here
	    
	    
		
		// code for car ends at here
		
	}
	
	
//		setfillstyle(SOLID_FILL,YELLOW);
//		rectangle(200,300-100,245,345-100);			// roof top of car
//		floodfill(201,301-100+1,WHITE);
//
//
//
//			
//		line(200, 345-100, 208,360-100);			// Back parallelogram glass of car
//		line(245, 345-100, 253,360-100);
//		line(208, 360-100, 253,360-100);
//	
//	
//	
//		line(200, 300-100, 208, 290-100);			// Front parallelogram glass of car
//		line(245, 300-100, 253, 290-100);
//		line(208, 290-100, 253, 290-100);	
//		
//		
//		rectangle(208, 360-100, 253, 385-100);		// car ko paxadi ko dikki
//		
//		
//		
//		
//		line(208, 290-100, 208,260-100); // car  kol engine part
//		line(253, 290-100, 253,260-100);
//		
//		
//		arc(231.5,281-100,45,135,32);
//		
//		
//		
//		
//		
//		line(245, 322-100, 260, 322-100);			// side winodw bar
//		line(260, 322-100, 260, 312-100);
//		line(260, 322-100, 260, 332-100);
//		
//		
//		arc(260, 341-100, 90,270,8 ); 
//		arc(260, 304-100, 90,270,8 ); 	
//		
//		
//		circle(262,341-100,6); // wheels
//		circle(262,304-100,6);
//		
//		
//		line(260,294-100,260,267-100);  //base line of car
//		line(253,260-100,260,267-100);
//		line(259,350-100,259,393-100);
//
//		
//		
//		line( 208,385-100,212,393-100); // number plate place
//		line(253,385-100,257,393-100);
//		line(212,393-100,257,393-100);
//			
//			delay(2000);
	
	
//
//	for(int i=100;i<=500;i++)
//	{
//		cleardevice();	
//		
//		
//		
//			setfillstyle(SOLID_FILL,YELLOW);
//		rectangle(200,300-i,245,345-i);			// roof top of car
//		floodfill(201,301-i+1,WHITE);
//
//
//
//			
//		line(200, 345-i, 208,360-i);			// Back parallelogram glass of car
//		line(245, 345-i, 253,360-i);
//		line(208, 360-i, 253,360-i);
//	
//	
//	
//		line(200, 300-i, 208, 290-i);			// Front parallelogram glass of car
//		line(245, 300-i, 253, 290-i);
//		line(208, 290-i, 253, 290-i);	
//		
//		
//		rectangle(208, 360-i, 253, 385-i);		// car ko paxadi ko dikki
//		
//		
//		
//		
//		line(208, 290-i, 208,260-i); // car  kol engine part
//		line(253, 290-i, 253,260-i);
//		
//		
//		arc(231.5,281-i,45,135,32);
//		
//		
//		
//		
//		
//		line(245, 322-i, 260, 322-i);			// side winodw bar
//		line(260, 322-i, 260, 312-i);
//		line(260, 322-i, 260, 332-i);
//		
//		
//		arc(260, 341-i, 90,270,8 ); 
//		arc(260, 304-i, 90,270,8 ); 	
//		
//		
//		circle(262,341-i,6); // wheels
//		circle(262,304-i,6);
//		
//		
//		line(260,294-i,260,267-i);  //base line of car
//		line(253,260-i,260,267-i);
//		line(259,350-i,259,393-i);
//
//		
//		
//		line( 208,385-i,212,393-i); // number plate place
//		line(253,385-i,257,393-i);
//		line(212,393-i,257,393-i);
//			
//			
//	
//		// Road code starts from here
//		
//		line(175,480,175,5);  // Left side line of ROAD
//		line(425,480,425,5);  // Right Side line of ROAD
//		
//		// middle dotted line of road starts from here	
//		line(300,480,300,440);
//		line(300,400,300,360);
//		line(300,320,300,280);
//		line(300,240,300,200);
//		line(300,160,300,120);
//		line(300,80,300,40);
//	    // middle dotted line ends at here
//	    
//	    // Road code ends at here
//		
//		
//		delay(10);
//		cleardevice();	
//	
//	}
//		
//
//	
	
	getch();
	closegraph();
	return 0;
 
}
