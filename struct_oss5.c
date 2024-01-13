#include <stdio.h> 
#include <stdlib.h> 



struct time { 
 int hour; 
  int minutes; 
   int seconds; 
   }; 
   struct time timeUpdate (struct time now ); 
 
main() 

{ 

 struct time currentTime, nextTime; 
 printf("Insert hour: "); 
  do  { 
    scanf("%d", &currentTime.hour);
	if (currentTime.hour < 0 || currentTime.hour > 23) 
		 printf("Wrong hour value. Please insert hour: ");
		  } 
		   while (currentTime.hour < 0 || currentTime.hour > 23);  
		  printf("Insert minutes: ");
			do  {   scanf("%d", &currentTime.minutes); 
			  if (currentTime.minutes < 0 || currentTime.minutes > 59)
			 printf("Wrong minutes value. Please insert minutes: "); 
					 } 
					  while (currentTime.minutes < 0 || currentTime.minutes > 59);
					   printf("Insert seconds: ");
					     do  {   scanf("%d", &currentTime.seconds);
					     if (currentTime.seconds < 0 || currentTime.seconds > 59) 
						   printf("Wrong seconds value. Please insert seconds: "); 
							} 
							 while (currentTime.seconds < 0 || currentTime.seconds > 59);



printf("Time is %d:%d:%d\n", currentTime.hour, currentTime.minutes, currentTime.seconds); 
 nextTime = timeUpdate (currentTime); 
  printf ("Half a minute later time is %d:%d:%d\n", nextTime.hour, nextTime.minutes, nextTime.seconds ); 
  system("PAUSE"); } 
 
 
struct time timeUpdate(struct time now)
 {  now.seconds = now.seconds + 30;  if (now.seconds >= 60) 
 {  // next minute   now.seconds = now.seconds - 60;   now.minutes++; 
   if (now.minutes == 60) { // next hour  
     now.minutes = 0;    now.hour++;  
	   if (now.hour == 24) // midnight  
	     now.hour = 0; 
		   } 
		    return now;
		  }  
		  } 





























