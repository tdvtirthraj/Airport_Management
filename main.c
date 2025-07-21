#include<stdio.h>
#include<string.h>
#include<dos.h>
/*struct  Boardingpass
{
    int  flightnumber;
};
struct Boarddingpass call;*/

void Indigo();
void Spicejet();
//void Vistara
void AirIndia();
void AirAsia();
void Emirates();
void Etihad();
void Qatar();
void Lufthansa();
void British();
void end();

void main()
{   int airline;
    printf("Welcome TO SARDAR VALLABHBHAI PATEL INTERNATIONAL AIRPORT");
    printf("\n Select your airline from below:");
    printf("\n1.Indigo \n2.Spicejet \n3.Vistara \n4.AirIndia \n5.AirAsia \n6.Emirates \n7.Etihad \n8.Qatar \n9.Lufthansa \n10.British");
    scanf("%d",&airline);
    switch(airline)
    {
    case 1:
        Indigo();
        break;
    case 2:
        Spicejet();
        break;
    case 3:
        //Vistara();
        break;
    case 4:
        AirIndia();
        break;
    case 5:
        AirAsia();
        break;
    case 6:
        Emirates();
        break;
    case 7:
        Etihad();
        break;
    case 8:
        Qatar();
        break;
    case 9:
        Lufthansa();
        break;
    case 10:
        //British();
        break;
    }
}
void Indigo()
{
    /call.flightnumber=682;/

    system("color 1F");
    int region,form;
    printf("Welcome To Indigo");
    printf("\nSelect region of your flight: ");
    printf("\n1.International \n2.Domestic \t");
    scanf("%d",&region);
    switch(region)
    {
    case 1:
        printf("Flight Will Depart From Terminal 1");
         printf("\nSelect your class:");
    printf("\n1.Economy \n2.Business \n3.First \t ");
    scanf("%d",&form);
    switch(form)
    {
    case 1:
        printf("\nAHMEDABAD TO DUBAI");
        printf("\nFlight Number Is 682A");
        printf("\nSecurity check lane associated is 6A");
        printf("\nTime-10:00 PM");
        printf("\nLounge Access For Star Plaza");
        printf("\nGate Number = 1I");
       /* printf("flight number is %d",call.flightnumber);*/
        break;
    case 2:
        printf("\nAHMEDABAD TO DUBAI");
        printf("\nFlight Number Is 682B");
        printf("\nSecurity check lane associated is 6B");
        printf("\nTime-10:30 PM");
        printf("\nLounge Access For Star Premium");
        printf("\nGate Number = 2I");
        break;
    case 3:
        printf("\nAHMEDABAD TO DUBAI");
        printf("\nFlight Number Is 682C");
        printf("\nSecurity check lane associated is 1");
        printf("\nTime-10:45 AM");
        printf("\nLounge Access For Royal Aura");
        printf("\nGate Number = 1I");
        break;
    }
        break;
    case 2:
        printf("Flight Will Depart From Terminal 2");
        printf("\nSelect your class:");
    printf("\n1.Economy \n2.Business \n3.First \t ");
    scanf("%d",&form);
    switch(form)
    {
    case 1:
        printf("\nAHMEDABAD TO DELHI");
        printf("\nFlight Number Is 682D");
        printf("\nSecurity check lane associated is 6A");
        printf("\nTime-10:00 AM");
        printf("\nNo Lounge Access");
        printf("\nGate Number = 1D");
        break;
    case 2:
        printf("\nAHMEDABAD TO DELHI");
        printf("\nFlight Number Is 682E");
        printf("\nSecurity check lane associated is 6B");
        printf("\nTime-10:30 AM");
        printf("\nLounge Access For Plaza Premium");
        printf("\nGate Number = 2D");
        break;
    case 3:
        printf("\nAHMEDABAD TO DELHI");
        printf("\nFlight Number Is 682F");
        printf("\nSecurity check lane associated is 1");
        printf("\nTime-10:045 AM");
        printf("\nLounge Access For Royal Anatria");
        printf("\nGate Number = 1D");
        break;
    }
        break;
    }

}
void Spicejet()
{
     system("color 4F");
  int region,form;
    printf("Welcome To Spicejet");
    printf("\nSelect region of your flight: ");
    printf("\n1.International \n2.Domestic \t");
    scanf("%d",&region);
    switch(region)
    {
    case 1:
        printf("Flight Will Depart From Terminal 1");
         printf("\nSelect your class:");
    printf("\n1.Economy \n2.Business \n3.First \t ");
    scanf("%d",&form);
    switch(form)
    {
    case 1:
        printf("\nAHMEDABAD TO DUBAI");
        printf("\nFlight Number Is 682G");
        printf("\nSecurity check lane associated is 7A");
        printf("\nTime-09:00 PM");
        printf("\nLounge Access For Star Plaza");
        printf("\nGate Number = 1I");
        break;
    case 2:
        printf("\nAHMEDABAD TO DUBAI");
        printf("\nFlight Number Is 682H");
        printf("\nSecurity check lane associated is 7B");
        printf("\nTime-09:30 PM");
        printf("\nLounge Access For Star Premium");
        printf("\nGate Number = 2I");
        break;
    case 3:
        printf("\nAHMEDABAD TO DUBAI");
        printf("\nFlight Number Is 682I");
        printf("\nSecurity check lane associated is 1");
        printf("\nTime-09:45 AM");
        printf("\nLounge Access For Royal Aura");
        printf("\nGate Number = 1I");
        break;
    }
        break;
    case 2:
        printf("Flight Will Depart From Terminal 2");
        printf("\nSelect your class:");
    printf("\n1.Economy \n2.Business \n3.First \t ");
    scanf("%d",&form);
    switch(form)
    {
    case 1:
        printf("\nAHMEDABAD TO DELHI");
        printf("\nFlight Number Is 682J");
        printf("\nSecurity check lane associated is 7A");
        printf("\nTime-09:00 AM");
        printf("\nNo Lounge Access");
        printf("\nGate Number = 1D");
        break;
    case 2:
        printf("\nAHMEDABAD TO DELHI");
        printf("\nFlight Number Is 682K");
        printf("\nSecurity check lane associated is 7B");
        printf("\nTime-9:30 AM");
        printf("\nLounge Access For Plaza Premium");
        printf("\nGate Number = 2D");
        break;
    case 3:
        printf("\nAHMEDABAD TO DELHI");
        printf("\nFlight Number Is 682L");
        printf("\nSecurity check lane associated is 1");
        printf("\nTime-09:045 AM");
        printf("\nLounge Access For Royal Anatria");
        printf("\nGate Number = 1D");
        break;
    }
        break;
    }

}
/*void vistara()
{
 system("color 5F");
    int region,form;
    printf("Welcome To Vistara");
    printf("\nSelect region of your flight: ");
    printf("\n1.International \n2.Domestic \t");
    scanf("%d",&region);
    switch(region)
    {
    case 1:
        printf("Flight Will Depart From Terminal 1");
         printf("\nSelect your class:");
    printf("\n1.Economy \n2.Business \n3.First \t ");
    scanf("%d",&form);
    switch(form)
    {
    case 1:
    printf("\nAHMEDABAD TO DUBAI");
    printf("\nFlight Number Is 682M");
        printf("\nSecurity check lane associated is 8A");
        printf("\nTime-08:00 PM");
        printf("\nLounge Access For Star Plaza");
        printf("\nGate Number = 1I");
        break;
    case 2:
    printf("\nAHMEDABAD TO DUBAI");
    printf("\nFlight Number Is 682N");
        printf("\nSecurity check lane associated is 8B");
        printf("\nTime-08:30 PM");
        printf("\nLounge Access For Star Premium");
        printf("\nGate Number = 2I");
        break;
    case 3:
    printf("\nAHMEDABAD TO DUBAI");
    printf("\nFlight Number Is 682O");
        printf("\nSecurity check lane associated is 1");
        printf("\nTime-08:45 AM");
        printf("\nLounge Access For Royal Aura");
        printf("\nGate Number = 1I");
        break;
    }
        break;
    case 2:
        printf("Flight Will Depart From Terminal 2");
        printf("\nSelect your class:");
    printf("\n1.Economy \n2.Business \n3.First \t ");
    scanf("%d",&form);
    switch(form)
    {
    case 1:
    printf("\nAHMEDABAD TO DELHI");
    printf("\nFlight Number Is 682P");
        printf("\nSecurity check lane associated is 8A");
        printf("\nTime-08:00 AM");
        printf("\nNo Lounge Access");
        printf("\nGate Number = 1D");
        break;
    case 2:
    printf("\nAHMEDABAD TO DELHI");
    printf("\nFlight Number Is 682Q");
        printf("\nSecurity check lane associated is 8B");
        printf("\nTime-08:30 AM");
        printf("\nLounge Access For Plaza Premium");
        printf("\nGate Number = 2D");
        break;
    case 3:
    printf("\nAHMEDABAD TO DELHI");
    printf("\nFlight Number Is 682R");
        printf("\nSecurity check lane associated is 1");
        printf("\nTime-08:45 AM");
        printf("\nLounge Access For Royal Anatria");
        printf("\nGate Number = 1D");
        break;
    }
        break;
    }

}*/
void AirIndia()
{
     system("color 4F");
    int region,form;
    printf("Welcome To AirIndia");
    printf("\nSelect region of your flight: ");
    printf("\n1.International \n2.Domestic \t");
    scanf("%d",&region);
    switch(region)
    {
    case 1:
        printf("Flight Will Depart From Terminal 1");
         printf("\nSelect your class:");
    printf("\n1.Economy \n2.Business \n3.First \t ");
    scanf("%d",&form);
    switch(form)
    {
    case 1:
        printf("\nAHMEDABAD TO DUBAI");
        printf("\nFlight Number Is 682S");
        printf("\nSecurity check lane associated is 9A");
        printf("\nTime-07:00 PM");
        printf("\nLounge Access For Star Plaza");
        printf("\nGate Number = 1I");
        break;
    case 2:
        printf("\nAHMEDABAD TO DUBAI");
        printf("\nFlight Number Is 682T");
        printf("\nSecurity check lane associated is 9B");
        printf("\nTime-07:30 PM");
        printf("\nLounge Access For Star Premium");
        printf("\nGate Number = 2I");
        break;
    case 3:
        printf("\nAHMEDABAD TO DUBAI");
        printf("\nFlight Number Is 682U");
        printf("\nSecurity check lane associated is 1");
        printf("\nTime-07:45 AM");
        printf("\nLounge Access For Royal Aura");
        printf("\nGate Number = 1I");
        break;
    }
        break;
    case 2:
        printf("Flight Will Depart From Terminal 2");
        printf("\nSelect your class:");
    printf("\n1.Economy \n2.Business \n3.First \t ");
    scanf("%d",&form);
    switch(form)
    {
    case 1:
        printf("\nAHMEDABAD TO DELHI");
        printf("\nFlight Number Is 682V");
        printf("\nSecurity check lane associated is 9A");
        printf("\nTime-07:00 AM");
        printf("\nNo Lounge Access");
        printf("\nGate Number = 1D");
        break;
    case 2:
        printf("\nAHMEDABAD TO DELHI");
        printf("\nFlight Number Is 682W");
        printf("\nSecurity check lane associated is 9B");
        printf("\nTime-07:30 AM");
        printf("\nLounge Access For Plaza Premium");
        printf("\nGate Number = 2D");
        break;
    case 3:
        printf("\nAHMEDABAD TO DELHI");
        printf("\nFlight Number Is 682X");
        printf("\nSecurity check lane associated is 1");
        printf("\nTime-07:45 AM");
        printf("\nLounge Access For Royal Anatria");
        printf("\nGate Number = 1D");
        break;
    }
        break;
    }

}
void AirAsia()
{
     system("color 4F");
        int region,form;
    printf("Welcome To AirAsia");
    printf("\nSelect region of your flight: ");
    printf("\n1.International \n2.Domestic \t");
    scanf("%d",&region);
    switch(region)
    {
    case 1:
        printf("Flight Will Depart From Terminal 1");
         printf("\nSelect your class:");
    printf("\n1.Economy \n2.Business \n3.First \t ");
    scanf("%d",&form);
    switch(form)
    {
    case 1:
        printf("\nAHMEDABAD TO DUBAI");
        printf("\nFlight Number Is 681A");
        printf("\nSecurity check lane associated is 10A");
        printf("\nTime-06:00 PM");
        printf("\nLounge Access For Star Plaza");
        printf("\nGate Number = 1I");
        break;
    case 2:
        printf("\nAHMEDABAD TO DUBAI");
        printf("\nFlight Number Is 681B");
        printf("\nSecurity check lane associated is 10B");
        printf("\nTime-06:30 PM");
        printf("\nLounge Access For Star Premium");
        printf("\nGate Number = 2I");
        break;
    case 3:
        printf("\nAHMEDABAD TO DUBAI");
        printf("\nFlight Number Is 681C");
        printf("\nSecurity check lane associated is 1");
        printf("\nTime-06:45 AM");
        printf("\nLounge Access For Royal Aura");
        printf("\nGate Number = 1I");
        break;
    }
        break;
    case 2:
        printf("Flight Will Depart From Terminal 2");
        printf("\nSelect your class:");
    printf("\n1.Economy \n2.Business \n3.First \t ");
    scanf("%d",&form);
    switch(form)
    {
    case 1:
        printf("\nAHMEDABAD TO DELHI");
        printf("\nFlight Number Is 681D");
        printf("\nSecurity check lane associated is 10A");
        printf("\nTime-06:00 AM");
        printf("\nNo Lounge Access");
        printf("\nGate Number = 1D");
        break;
    case 2:
        printf("\nAHMEDABAD TO DELHI");
        printf("\nFlight Number Is 681E");
        printf("\nSecurity check lane associated is 10B");
        printf("\nTime-06:30 AM");
        printf("\nLounge Access For Plaza Premium");
        printf("\nGate Number = 2D");
        break;
    case 3:
        printf("\nAHMEDABAD TO DELHI");
        printf("\nFlight Number Is 681F");
        printf("\nSecurity check lane associated is 1");
        printf("\nTime-06:45 AM");
        printf("\nLounge Access For Royal Anatria");
        printf("\nGate Number = 1D");
        break;
    }
        break;
    }

}
void Emirates()
{
     system("color 6F");
      int region,form;
    printf("Welcome To Emirates");
    printf("\nSelect region of your flight: ");
    printf("\n1.International \n2.Domestic \t");
    scanf("%d",&region);
    switch(region)
    {
    case 1:
        printf("Flight Will Depart From Terminal 1");
         printf("\nSelect your class:");
    printf("\n1.Economy \n2.Business \n3.First \t ");
    scanf("%d",&form);
    switch(form)
    {
    case 1:
        printf("\nAHMEDABAD TO DUBAI");
        printf("\nFlight Number Is 681H");
        printf("\nSecurity check lane associated is 11A");
        printf("\nTime-05:00 PM");
        printf("\nLounge Access For Star Plaza");
        printf("\nGate Number = 1I");
        break;
    case 2:
        printf("\nAHMEDABAD TO DUBAI");
        printf("\nFlight Number Is 681I");
        printf("\nSecurity check lane associated is 11B");
        printf("\nTime-05:30 PM");
        printf("\nLounge Access For Star Premium");
        printf("\nGate Number = 2I");
        break;
    case 3:
        printf("\nAHMEDABAD TO DUBAI");
        printf("\nFlight Number Is 681J");
        printf("\nSecurity check lane associated is 1");
        printf("\nTime-05:45 AM");
        printf("\nLounge Access For Royal Aura");
        printf("\nGate Number = 1I");
        break;
    }
        break;
    case 2:
        printf("Flight Will Depart From Terminal 2");
        printf("\nSelect your class:");
    printf("\n1.Economy \n2.Business \n3.First \t ");
    scanf("%d",&form);
    switch(form)
    {
    case 1:
        printf("\nAHMEDABAD TO DELHI");
        printf("\nFlight Number Is 681K");
        printf("\nSecurity check lane associated is 11A");
        printf("\nTime-05:00 AM");
        printf("\nNo Lounge Access");
        printf("\nGate Number = 1D");
        break;
    case 2:
        printf("\nAHMEDABAD TO DELHI");
        printf("\nFlight Number Is 681L");
        printf("\nSecurity check lane associated is 11B");
        printf("\nTime-05:30 AM");
        printf("\nLounge Access For Plaza Premium");
        printf("\nGate Number = 2D");
        break;
    case 3:
        printf("\nAHMEDABAD TO DELHI");
        printf("\nFlight Number Is 681M");
        printf("\nSecurity check lane associated is 1");
        printf("\nTime-05:45 AM");
        printf("\nLounge Access For Royal Anatria");
        printf("\nGate Number = 1D");
        break;
    }
        break;
    }

}
void Etihad()
{
 system("color 3F");
      int region,form;
    printf("Welcome To Etihad");
    printf("\nSelect region of your flight: ");
    printf("\n1.International \n2.Domestic \t");
    scanf("%d",&region);
    switch(region)
    {
    case 1:
        printf("Flight Will Depart From Terminal 1");
         printf("\nSelect your class:");
    printf("\n1.Economy \n2.Business \n3.First \t ");
    scanf("%d",&form);
    switch(form)
    {
    case 1:
        printf("\nAHMEDABAD TO DUBAI");
        printf("\nFlight Number Is 681N");
        printf("\nSecurity check lane associated is 12A");
        printf("\nTime-04:00 PM");
        printf("\nLounge Access For Star Plaza");
        printf("\nGate Number = 1I");
        break;
    case 2:
        printf("\nAHMEDABAD TO DUBAI");
        printf("\nFlight Number Is 681O");
        printf("\nSecurity check lane associated is 12B");
        printf("\nTime-04:30 PM");
        printf("\nLounge Access For Star Premium");
        printf("\nGate Number = 2I");
        break;
    case 3:
        printf("\nAHMEDABAD TO DUBAI");
        printf("\nFlight Number Is 681P");
        printf("\nSecurity check lane associated is 1");
        printf("\nTime-04:45 AM");
        printf("\nLounge Access For Royal Aura");
        printf("\nGate Number = 1I");
        break;
    }
        break;
    case 2:
        printf("Flight Will Depart From Terminal 2");
        printf("\nSelect your class:");
    printf("\n1.Economy \n2.Business \n3.First \t ");
    scanf("%d",&form);
    switch(form)
    {
    case 1:
        printf("\nAHMEDABAD TO DELHI");
        printf("\nFlight Number Is 681Q");
        printf("\nSecurity check lane associated is 12A");
        printf("\nTime-04:00 AM");
        printf("\nNo Lounge Access");
        printf("\nGate Number = 1D");
        break;
    case 2:
        printf("\nAHMEDABAD TO DELHI");
        printf("\nFlight Number Is 681R");
        printf("\nSecurity check lane associated is 12B");
        printf("\nTime-04:30 AM");
        printf("\nLounge Access For Plaza Premium");
        printf("\nGate Number = 2D");
        break;
    case 3:
        printf("\nAHMEDABAD TO DELHI");
        printf("\nFlight Number Is 681S");
        printf("\nSecurity check lane associated is 1");
        printf("\nTime-04:45 AM");
        printf("\nLounge Access For Royal Anatria");
        printf("\nGate Number = 1D");
        break;
    }
        break;
    }
}
void Qatar()
{
     system("color 5F");
       int region,form;
    printf("Welcome To Qatar");
    printf("\nSelect region of your flight: ");
    printf("\n1.International \n2.Domestic \t");
    scanf("%d",&region);
    switch(region)
    {
    case 1:
        printf("Flight Will Depart From Terminal 1");
         printf("\nSelect your class:");
    printf("\n1.Economy \n2.Business \n3.First \t ");
    scanf("%d",&form);
    switch(form)
    {
    case 1:
        printf("\nAHMEDABAD TO DUBAI");
        printf("\nFlight Number Is 681T");
        printf("\nSecurity check lane associated is 13A");
        printf("\nTime-03:00 PM");
        printf("\nLounge Access For Star Plaza");
        printf("\nGate Number = 1I");
        break;
    case 2:
        printf("\nAHMEDABAD TO DUBAI");
        printf("\nFlight Number Is 681U");
        printf("\nSecurity check lane associated is 13B");
        printf("\nTime-03:30 PM");
        printf("\nLounge Access For Star Premium");
        printf("\nGate Number = 2I");
        break;
    case 3:
        printf("\nAHMEDABAD TO DUBAI");
        printf("\nFlight Number Is 681V");
        printf("\nSecurity check lane associated is 1");
        printf("\nTime-03:45 AM");
        printf("\nLounge Access For Royal Aura");
        printf("\nGate Number = 1I");
        break;
    }
        break;
    case 2:
        printf("Flight Will Depart From Terminal 2");
        printf("\nSelect your class:");
    printf("\n1.Economy \n2.Business 3.First \t ");
    scanf("%d",&form);
    switch(form)
    {
    case 1:
        printf("\nAHMEDABAD TO DELHI");
        printf("\nFlight Number Is 681W");
        printf("\nSecurity check lane associated is 13A");
        printf("\nTime-03:00 AM");
        printf("\nNo Lounge Access");
        printf("\nGate Number = 1D");
        break;
    case 2:
        printf("\nAHMEDABAD TO DELHI");
        printf("\nFlight Number Is 681X");
        printf("\nSecurity check lane associated is 13B");
        printf("\nTime-03:30 AM");
        printf("\nLounge Access For Plaza Premium");
        printf("\nGate Number = 2D");
        break;
    case 3:
        printf("\nAHMEDABAD TO DELHI");
        printf("\nFlight Number Is 681Y");
        printf("\nSecurity check lane associated is 1");
        printf("\nTime-03:45 AM");
        printf("\nLounge Access For Royal Anatria");
        printf("\nGate Number = 1D");
        break;
    }
        break;
    }
}
void Lufthansa()
{
     system("color 8C");
      int region,form;
    printf("Welcome To Lufthansa");
    printf("\nSelect region of your flight: ");
    printf("\n1.International \n2.Domestic \t");
    scanf("%d",&region);
    switch(region)
    {
    case 1:
        printf("Flight Will Depart From Terminal 1");
         printf("\nSelect your class:");
    printf("\n1.Economy \n2.Business \n3.First \t ");
    scanf("%d",&form);
    switch(form)
    {
    case 1:
        printf("\nAHMEDABAD TO DUBAI");
        printf("\nFlight Number Is 680A");
        printf("\nSecurity check lane associated is 14A");
        printf("\nTime-02:00 PM");
        printf("\nLounge Access For Star Plaza");
        printf("\nGate Number = 1I");
        break;
    case 2:
        printf("\nAHMEDABAD TO DUBAI");
        printf("\nFlight Number Is 680B");
        printf("\nSecurity check lane associated is 14B");
        printf("\nTime-02:30 PM");
        printf("\nLounge Access For Star Premium");
        printf("\nGate Number = 2I");
        break;
    case 3:
        printf("\nAHMEDABAD TO DUBAI");
        printf("\nFlight Number Is 680C");
        printf("\nSecurity check lane associated is 1");
        printf("\nTime-02:45 AM");
        printf("\nLounge Access For Royal Aura");
        printf("\nGate Number = 1I");
        break;
    }
        break;
    case 2:
        printf("Flight Will Depart From Terminal 2");
        printf("\nSelect your class:");
    printf("\n1.Economy \n2.Business \n3.First \t ");
    scanf("%d",&form);
    switch(form)
    {
    case 1:
        printf("\nAHMEDABAD TO DELHI");
        printf("\nFlight Number Is 680D");
        printf("\nSecurity check lane associated is 14A");
        printf("\nTime-02:00 AM");
        printf("\nNo Lounge Access");
        printf("\nGate Number = 1D");
        break;
    case 2:
        printf("\nAHMEDABAD TO DELHI");
        printf("\nFlight Number Is 680E");
        printf("\nSecurity check lane associated is 14B");
        printf("\nTime-02:30 AM");
        printf("\nLounge Access For Plaza Premium");
        printf("\nGate Number = 2D");
        break;
    case 3:
        printf("\nAHMEDABAD TO DELHI");
        printf("\nFlight Number Is 680F");
        printf("\nSecurity check lane associated is 1");
        printf("\nTime-02:45 AM");
        printf("\nLounge Access For Royal Anatria");
        printf("\nGate Number = 1D");
        break;
    }
        break;
    }
}
void british()
{
     system("color 7C");
     int region,form;
    printf("Welcome To Lufthansa");
    printf("\nSelect region of your flight: ");
    printf("\n1.International 2.Domestic \t");
    scanf("%d",&region);
    switch(region)
    {
    case 1:
        printf("Flight Will Depart From Terminal 1");
         printf("\nSelect your class:");
    printf("\n1.Economy \n2.Business \n3.First \t ");
    scanf("%d",&form);
    switch(form)
    {
    case 1:
        printf("\nAHMEDABAD TO DUBAI");
        printf("\nFlight Number Is 680G");
        printf("\nSecurity check lane associated is 15A");
        printf("\nTime-01:00 PM");
        printf("\nLounge Access For Star Plaza");
        printf("\nGate Number = 1I");
        break;
    case 2:
        printf("\nAHMEDABAD TO DUBAI");
        printf("\nFlight Number Is 680H");
        printf("\nSecurity check lane associated is 15B");
        printf("\nTime-01:30 PM");
        printf("\nLounge Access For Star Premium");
        printf("\nGate Number = 2I");
        break;
    case 3:
        printf("\nAHMEDABAD TO DUBAI");
        printf("\nFlight Number Is 680I");
        printf("\nSecurity check lane associated is 1");
        printf("\nTime-01:45 AM");
        printf("\nLounge Access For Royal Aura");
        printf("\nGate Number = 1I");
        break;
    }
        break;
    case 2:
        printf("Flight Will Depart From Terminal 2");
        printf("\nSelect your class:");
    printf("\n1.Economy \n2.Business \n3.First \t ");
    scanf("%d",&form);
    switch(form)
    {
    case 1:
        printf("\nAHMEDABAD TO DELHI");
        printf("\nFlight Number Is 680J");
        printf("\nSecurity check lane associated is 15A");
        printf("\nTime-01:00 AM");
        printf("\nNo Lounge Access");
        printf("\nGate Number = 1D");
        break;
    case 2:
        printf("\nAHMEDABAD TO DELHI");
        printf("\nFlight Number Is 680K");
        printf("\nSecurity check lane associated is 15B");
        printf("\nTime-01:30 AM");
        printf("\nLounge Access For Plaza Premium");
        printf("\nGate Number = 2D");
        break;
    case 3:
        printf("\nAHMEDABAD TO DELHI");
        printf("\nFlight Number Is 680L");
        printf("\nSecurity check lane associated is 1");
        printf("\nTime-01:45 AM");
        printf("\nLounge Access For Royal Anatria");
        printf("\nGate Number = 1D");
        break;
    }
        break;
    }
}
