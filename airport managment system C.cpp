#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<string.h>
void schedule();
int home_page ();
void air_info();
void ticket_reservation();
void boarding();


struct passenger
{
	char passport [20];
	char name [20];
	char nationality[20];
	 int seat_number;
	char email [30];
	
};


int main()
{
 home_page (); 
}


int home_page ()

   {
	    int c;
		printf("\n\n\t\t ********************************************************************");
		printf("\n\t\t                  Welcome to Noor Airline                  ");
		printf("\n\t\t   *******************************************************************\n");
		
		printf("\t\t\t 1- airline information \n ");
		printf("\t\t\t 2- ticket reservation  \n ");
		printf("\t\t\t 4- flight schedual  \n ");
		printf("\t\t\t 5- boarding  \n ");
		
		printf("\t\t\t 0-exit \n ");
        printf("Please enter your choice:");
	    scanf("%d",&c);

	
		switch(c)
		{
			case 1:
				air_info();
				break;
			case 2:
				ticket_reservation();
				break;   
			
			case 4:
					 schedule();
					break;
			case 5:
					boarding();
				break;
				
			
		}
				
}
void air_info()
{
		printf("\n\n\t\t ********************************************************************");
		printf("\n\t\t                  About Us                  ");
		printf("\n\t\t   *******************************************************************\n");
		printf("\n");
		printf("The founder of the noor airline is MahNoor mubashar basra.\n It was started in 2011. The first international flight was from lahore to canada.\n Till now we are providing a quality service. \nNow our registered airline are 10 and our registered passanger are 2000.Our motive is integrity and quality. \nThank you.\n");
		int a;
		printf("0-Back");
		scanf("%d",&a);
		if(a==0)
		home_page ();
		
}


void ticket_reservation() 
{
	 
		printf("\n\n\t\t ********************************************************************");
		printf("\n\t\t                          ticket reservation                           ");
		printf("\n\t\t   *******************************************************************\n");
		printf("\n");
		int n;
		printf("\t\t\t 1-National  \n ");
		printf("\t\t\t 2- International   \n ");
		printf("\t\t\t0-back \n");
		printf("\t\t\t Select one = ");
		scanf("%d",&n);
		if(n==1)
		{
			printf("\n");
			printf("\n\t\t                  National Airline service                  ");
			printf("\n");
			printf("\t\t\t 1- LHR TO KARACHI \n ");
		    printf("\t\t\t 2- LHR TO ISLAMABD  \n ");
		    printf("\t\t\t 3- LHR TO FAISALABD \n ");
		    printf("\t\t\t 4- LHR TO QUETTA  \n ");
		    printf("\t\t\t 0- Back  \n ");
		    int a;
			printf("where you want to go = ");
			scanf("%d",&a);
			switch (a)
			
			 {
			 	case 1:
			 		
			 		{
					 
			 		printf("\n");
			 		printf("\n\t\t            LHR TO KaRACHI                        ");
			 		printf("\n");
			 		char name[20];
			 		printf("your name = ");
			 		scanf("%s",&name);
			 		printf("name = %s",name);
			 		printf("\t\t\tTicket number = 02910299\n");
			 		printf("Form = LHR");
			 		printf("\t\t\tTo= KARACHI\n");
			 		printf("Seat no= 23");
			 		printf("\t\t\t Departure = 10:00 am\n ");
			 		printf("Landing = 12:00 am");
			 		printf("\t\t\t cLASS = Economy \n ");
			 			int a;
		printf("0-Back");
		scanf("%d",&a);
		if(a==0)
		home_page ();
			 	    }
			 	    
			 	case 2:
			 		
			 	    {
			 	    			 
			 		printf("\n");
			 		printf("\n\t\t            LHR TO Islamabad                        ");
			 		printf("\n");
			 		char name[20];
			 		printf("your name = ");
			 		scanf("%s",&name);
			 		printf("name = %s",name);
			 		printf("\t\t\tTicket number = 02999999\n");
			 		printf("Form = LHR");
			 		printf("\t\t\tTo= ISLAMABD\n");
			 		printf("Seat no= 12");
			 		printf("\t\t\t Departure = 01:00 Pm\n ");
			 		printf("Landing = 02:00 Pm");
			 		printf("\t\t\t cLASS = Economy \n ");
						int a;
		printf("0-Back");
		scanf("%d",&a);
		if(a==0)
		home_page ();	 
					}
				case 3:		
					{
									 	    			 
			 		printf("\n");
			 		printf("\n\t\t            LHR TO FAISALABAD                         ");
			 		printf("\n");
			 		char name[20];
			 		printf("your name = ");
			 		scanf("%s",&name);
			 		printf("name = %s",name);
			 		printf("\t\t\tTicket number = 0212129\n");
			 		printf("Form = LHR");
			 		printf("\t\t\tTo= FAISALABAD\n");
			 		printf("Seat no= 10");
			 		printf("\t\t\t Departure = 04:00 Pm\n ");
			 		printf("Landing = 05:00 Pm");
			 		printf("\t\t\t cLASS = Economy \n ");
						int a;
		printf("0-Back");
		scanf("%d",&a);
		if(a==0)
		home_page ();		
					}
				case 4:
					{
					printf("\n");
			 		printf("\n\t\t            LHR TO QUETA                          ");
			 		printf("\n");
			 		char name[20];
			 		printf("your name = ");
			 		scanf("%s",&name);
			 		printf("name = %s",name);
			 		printf("\t\t\tTicket number = 0200029\n");
			 		printf("Form = LHR");
			 		printf("\t\t\tTo= QUETA\n");
			 		printf("Seat no= 20");
			 		printf("\t\t\t Departure = 11:00 Pm\n ");
			 		printf("Landing = 01:00 Pm");
			 		printf("\t\t\t cLASS = Economy \n ");
			 			int a;
		printf("0-Back");
		scanf("%d",&a);
		if(a==0)
		home_page ();
					}
				case 0:
						ticket_reservation();
			  }  
			
		}
		else if (n==2)
		{
			printf("\n\t\t                  International Airline service                  ");
			printf("\n");
			printf("\t\t\t 1- LHR TO Austrailia \n ");
		    printf("\t\t\t 2- LHR TO Canada  \n ");
		    printf("\t\t\t 3- LHR TO Germany \n ");
		    printf("\t\t\t 4- LHR TO France  \n ");
		    printf("\t\t\t 0- Back  \n ");
		    int b;
		    printf("Where you want to go = ");
		    scanf("%d",&b);
		    switch (b)
		    {
		    		case 1:
			 		{
					 
			 		printf("\n");
			 		printf("\n\t\t            LHR TO Austrailia                 ");
			 		printf("\n");
			 		char name[20];
			 		printf("your name = ");
			 		scanf("%s",&name);
			 		printf("name = %s",name);
			 		printf("\t\t\tTicket number = 02910299\n");
			 		printf("Form = LHR");
			 		printf("\t\t\tTo= Canada\n");
			 		printf("Seat no= 23");
			 		printf("\t\t\t Departure = 1:00 am\n ");
			 		printf("Landing = 1:00 pm");
			 		printf("\t\t\t cLASS = BUSNIESS CLASS \n ");
			 		int a;
		            printf("0-Back");
		            scanf("%d",&a);
		            if(a==0)
		            home_page ();
		            break;
			 	    }
			 	    
			 	    
		    		case 2:
			 		{
					 
			 		printf("\n");
			 		printf("\n\t\t            LHR TO CANADA             ");
			 		printf("\n");
			 		char name[20];
			 		printf("your name = ");
			 		scanf("%s",&name);
			 		printf("name = %s",name);
			 		printf("\t\t\tTicket number = 02910299\n");
			 		printf("Form = LHR");
			 		printf("\t\t\tTo= australia \n");
			 		printf("Seat no= 2F3");
			 		printf("\t\t\t Departure = 10:00 am\n ");
			 		printf("Landing = 12:00 am");
			 		printf("\t\t\t cLASS = BUSNIESS CLASS \n ");
			 		int a;
		            printf("0-Back");
		            scanf("%d",&a);
		            if(a==0)
		            home_page ();
		            break;
			 	    }
			 	    
			 	    case 3:
			 		{
					 
			 		printf("\n");
			 		printf("\n\t\t            LHR TO   Germany                ");
			 		printf("\n");
			 		char name[20];
			 		printf("your name = ");
			 		scanf("%s",&name);
			 		printf("name = %s",name);
			 		printf("\t\t\tTicket number = 02910299\n");
			 		printf("Form = LHR");
			 		printf("\t\t\tTo= Germany\n");
			 		printf("Seat no= 23");
			 		printf("\t\t\t Departure = 1:00 am\n ");
			 		printf("Landing = 1:00 pm");
			 		printf("\t\t\t cLASS = BUSNIESS CLASS \n ");
			 		int a;
	            	printf("0-Back");
		            scanf("%d",&a);
		            if(a==0)
		            home_page ();
		            break;
			 	    }
			 	    case 4:
			 		{
					 
			 		printf("\n");
			 		printf("\n\t\t            LHR TO   France               ");
			 		printf("\n");
			 		char name[20];
			 		printf("your name = ");
			 		scanf("%s",&name);
			 		printf("name = %s",name);
			 		printf("\t\t\tTicket number = 02910299\n");
			 		printf("Form = LHR");
			 		printf("\t\t\tTo= France\n");
			 		printf("Seat no= 23");
			 		printf("\t\t\t Departure = 1:00 am\n ");
			 		printf("Landing = 1:00 pm");
			 		printf("\t\t\t cLASS = BUSINESS CLASS \n ");
			 		int a;
		            printf("0-Back");
		            scanf("%d",&a);
		            if(a==0)
		            home_page ();
		            break;
			 	    }
			 	    case 0:
			 	    	{
			 	    		ticket_reservation();
			 	    		break;
						}
			 	    
			}
		}
}
void schedule()
{   
	printf("\t\t\t********\n");
	printf("\t\t\t Flight schedule  \n");
	printf("\t\t\t*********\n");
	printf("1-National Flight schedule \n");
	printf("2-International Flight schedule \n");
	int n;
	printf("\nEnter what you want = ");
	scanf("%d",&n);
	if(n==1)
	
	{
		
		printf("\t\t\tNational Flight schedule\n ");	
	    printf("N0. \t From->To\t time\n\n");
	    printf("1 \t   Lahore to Karachi \t      11:00 am \n ");
	    printf("1 \t   Lahore to ISL \t          01:00 pm \n ");
	    printf("1 \t   Lahore to FSD \t          02:00 pm \n ");
	    printf("1 \t   Lahore to Queta \t        04:00 pm \n ");
	    printf("1 \t   Lahore to Gawadar \t      06:00 pm \n ");
		int a;
	    printf("0-Back =");
	    scanf("%d",&a);
	    if(a==0)
	    {
	    	 home_page();	
		}
	      
	}
	
	else if (n==2)
	
	{
		
		printf("\t\t\tInernational Flight schedule\n ");	
	    printf("N0. \t From->To\t time\n\n");
	    printf("1 \t Lahore to Autrailia \t 11:00 am \n ");
	    printf("2 \t Lahore to Canada \t    01:00 pm \n ");
	    printf("3 \t Lahore to Germany \t   02:00 pm \n ");
	    printf("4 \t Lahore to Uk \t        04:00 pm \n ");
	    printf("5 \t Lahore to France \t    06:00 pm \n ");
	    int a;
	    printf("0-Back =");
	    scanf("%d",&a);
	    if(a==0)
	    {
	    	home_page();
		}
	    
	}
	
	else 
	{
		int a;
	    printf("0-Back =");
	    scanf("%d",&a);
	    if(a==0)
	    {
	     home_page();	
		}
	   
	}
}
void boarding()
{
	struct passenger p;
	FILE *fptr;
	fptr = fopen("C:\\Users\\Mahnoor\\Documents\\boarding.txt","a");
	printf("enter your name");
	scanf("%s",&p.name);
	fprintf(fptr,"%s",p.name,"\t");
	printf("enter your passport number");
	scanf("%s",&p.passport);
	fprintf(fptr,"%s",p.passport,"\t");
	printf("enter your nationality");
	scanf("%s",&p.nationality);
	fprintf(fptr,"%s",p.nationality,"\t");
	printf("enter your email");
	scanf("%s",&p.email);
	fprintf(fptr,"%s",p.email,"\t");
	printf("enter your seat number");
	scanf("%d",&p.seat_number);
	fprintf(fptr,"%d",p.seat_number,"\n");
	fclose(fptr);
		int a;
		printf("0-Back");
		scanf("%d",&a);
		if(a==0)
		home_page ();
}









