#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

class Porsche
{
protected:
  float base;
  float moneyExpansion = 0;
};

class model718:public Porsche
{
private:
  float basePrice = 5650000;

  int select1;
  int select2;
  int select3;
  int select4;

public:

    model718 ()
  {
    base = basePrice;
  }

  void selectExteriorColor ();
  void selectWheels ();
  void selectInteriorColor ();
  void selectseats ();
  
  

  float showSelection ()
  {
    return base + moneyExpansion;
  }
};

class model911:public Porsche
{
private:
  int basePrice = 10500000;
  int select1;
  int select2;
  int select3;
  int select4;

public:

    model911 ()
  {
    base = basePrice;
  }

  void selectExteriorColor ();
  void selectWheels ();
  void selectInteriorColor ();
  void selectseats ();
  
  

  float showSelection ()
  {
    return base + moneyExpansion;
  }
};

class modelTaycan:public Porsche
{
private:
  int basePrice = 6450000;
  int select1;
  int select2;
  int select3;
  int select4;

public:

    modelTaycan ()
  {
    base = basePrice;
  }

  void selectExteriorColor ();
  void selectWheels ();
  void selectInteriorColor ();
  void selectseats ();
  
  
  float showSelection ()
  {
    return base + moneyExpansion;
  }
};

class modelPanamera:public Porsche
{
private:
  int basePrice = 7450000;
  int select1;
  int select2;
  int select3;
  int select4;

public:

    modelPanamera ()
  {
    base = basePrice;
  }

  void selectExteriorColor ();
  void selectWheels ();
  void selectInteriorColor ();
  void selectseats ();
  
  void pick(int select1,int select2, int select3);
  void pick(int select1,int select2, int select3, int select4);

  float showSelection ()
  {
    return base + moneyExpansion;
  }
};

class modelMacan:public Porsche
{
private:
  int basePrice = 4759000;
  int select1;
  int select2;
  int select3;
  int select4;

public:

    modelMacan ()
  {
    base = basePrice;
  }

  void selectExteriorColor ();
  void selectWheels ();
  void selectInteriorColor ();
  void selectseats ();
  
  void pick(int select1,int select2, int select3);
  void pick(int select1,int select2, int select3, int select4);
  
  float showSelection ()
  {
    return base + moneyExpansion;
  }
};

class modelCayenne:public Porsche
{
private:
  int basePrice = 5650000;
  int select1;
  int select2;
  int select3;
  int select4;

public:

    modelCayenne ()
  {
    base = basePrice;
  }

  void selectExteriorColor ();
  void selectWheels ();
  void selectInteriorColor ();
  void selectseats ();
  
  
  float showSelection ()
  {
    return base + moneyExpansion;
  }
};



void
model718::selectExteriorColor ()
{

  FILE *fp;
  fp = fopen ("customer_Choose.txt", "a");

  fprintf(fp,"\nModel : 718");

  cout << "Option 0  :\t White                  : price :  0" << endl;
  cout << "Option 1  :\t Black                  : price :  0" << endl;
  cout << "Option 2  :\t Guards Red             : price :  0" << endl;
  cout << "Option 3  :\t Racing Yellow          : price :  0" << endl;

  cout << "Option 4  :\t Jet Black Metallic     : price :  79,000" << endl;
  cout << "Option 5  :\t Gentian Blue Metallic  : price :  79,000" << endl;
  cout << "Option 6  :\t GT Silver Metallic     : price :  79,000" << endl;
  cout << "Option 7  :\t Agate Grey Metallic    : price :  79,000" << endl;

  cout << "Option 8  :\t Ruby Star Neo          : price :  207,000" << endl;
  cout << "Option 9  :\t Carmine Red            : price :  207,000" << endl;
  cout << "Option 10 :\t Shark Blue             : price :  207,000" << endl;
  cout << "Option 11 :\t Arctic Grey            : price :  207,000" << endl;
  cout << "Option 12 :\t Crayon                 : price :  207,000 " << endl;
  cout << "Option 13 :\t Ice Grey Metallic      : price :  207,000" << endl;

  cout << "****************************************************" << endl;

  cout << "Choose your Option :";
  cin >> select1;

  switch (select1)
    {
    case 0:
      fprintf (fp, "\nColor :  White                  : price :  0");
      moneyExpansion = 0;
      break;
    case 1:
      fprintf (fp, "\nColor : Black                  : price :  0");
      moneyExpansion = 0;
      break;
    case 2:
      fprintf (fp, "\nColor : Guards Red             : price :  0");
      moneyExpansion = 0;
      break;
    case 3:
      fprintf (fp, "\nColor : Racing Yellow          : price :  0");
      moneyExpansion = 0;
      break;
    case 4:
      fprintf (fp, "\nColor : Jet Black Metallic     : price :  79,000");
      moneyExpansion = 79000;
      break;
    case 5:
      fprintf (fp, "\nColor : Gentian Blue Metallic  : price :  79,000");
      moneyExpansion = 79000;
      break;
    case 6:
      fprintf (fp, "\nColor : GT Silver Metallic     : price :  79,000");
      moneyExpansion = 79000;
      break;
    case 7:
      fprintf (fp, "\nColor : Agate Grey Metallic    : price :  79,000");
      moneyExpansion = 79000;
      break;
    case 8:
      fprintf (fp, "\nColor : Ruby Star Neo          : price :  207,000");
      moneyExpansion = 207000;
      break;
    case 9:
      fprintf (fp, "\nColor : Carmine Red            : price :  207,000");
      moneyExpansion = 207000;
      break;
    case 10:
      fprintf (fp, "\nColor : Shark Blue             : price :  207,000");
      moneyExpansion = 207000;
      break;
    case 11:
      fprintf (fp, "\nColor : Arctic Grey            : price :  207,000");
      moneyExpansion = 207000;
      break;
    case 12:
      fprintf (fp, "\nColor : Crayon                 : price :  207,000");
      moneyExpansion = 207000;
      break;
    case 13:
      fprintf (fp, "\nColor : Ice Grey Metallic      : price :  207,000");
      moneyExpansion = 207000;
      break;
    default:
      cout << "You choose wrong option." << endl;
      moneyExpansion = 0;
      break;
    }

  fclose (fp);
  cout << "\nYour selection has been added.\n" << endl;
}

void
model718::selectWheels ()
{

  FILE *fp;
  fp = fopen ("customer_Choose.txt", "a");

  cout << "Option 0 :\t 19-icch Cayman S wheels         : price : 0 " << endl;
  cout << "Option 1 :\t 19-inch Boxster S wheels        : price : 164,000 " <<
    endl;
  cout << "Option 2 :\t 20-inch Carrera S wheels        : price : 216,000 " <<
    endl;
  cout << "Option 3 :\t 20-inch Carrera Classic wheels  : price : 268,000 " <<
    endl;
  cout << "Option 4 :\t 20-inch Carrera Sport wheels    : price : 282,000 " <<
    endl;
  cout << "Option 5 :\t 20-inch 911 Turbo wheels        : price : 363,000 " <<
    endl;


  cout << "Choose your Option :";
  cin >> select2;

  switch (select2)
    {
    case 0:
      fprintf (fp, "\nWheels : 19-icch Cayman S wheels         : price : 0");
      break;
    case 1:
      fprintf (fp,"\nWheels : 19-inch Boxster S wheels        : price : 164,000");
      moneyExpansion += 164000;
      break;
    case 2:
      fprintf (fp,"\nWheels : 20-inch Carrera S wheels        : price : 216,000");
      moneyExpansion += 216000;
      break;
    case 3:
      fprintf (fp,"\nWheels : 20-inch Carrera Classic wheels  : price : 268,000");
      moneyExpansion += 268000;
      break;
    case 4:
      fprintf (fp,
	       "\nWheels : 20-inch Carrera Sport wheels    : price : 282,000");
      moneyExpansion += 282000;
      break;
    case 5:
      fprintf (fp,
	       "\nWheels : 20-inch 911 Turbo wheels        : price : 363,000");
      moneyExpansion += 363000;
      break;
    default:
      cout << "You choose wrong option." << endl;
      break;

      
    }

  fclose (fp);
  cout << "\nYour selection has been added.\n" << endl;
}

void
model718::selectInteriorColor ()
{
    
  FILE *fp;
  fp = fopen ("customer_Choose.txt", "a");
    
  cout <<
    "Option 0 :\tStandard Interior/Race-Tex in Black                                                 : price :0 "
    << endl;
  cout <<
    "Option 1 :\tStandard Interior/Race-Tex in Agate Grey                                            : price :0 "
    << endl;
  cout <<
    "Option 2 :\tInterior in Black                                                                   : price : 0"
    << endl;
  cout <<
    "Option 3 :\tInterior in Agate Grey                                                              : price : 0"
    << endl;

  cout <<
    "Option 4 :\tLeather package Black                                                               : price : 131,000"
    << endl;
  cout <<
    "Option 5 :\tLeather package Agate Grey                                                          : price : 131,000"
    << endl;

  cout <<
    "Option 6 :\tLeather package Black-Bordeaux Red                                                  : price : 147,000"
    << endl;
  cout <<
    "Option 7 :\tLeather package Black-Crayou                                                        : price : 147,000"
    << endl;

  cout <<
    "Option 8 :\tLeather interior in Black                                                           : price : 281,000"
    << endl;
  cout <<
    "Option 9 :\tLeather interior in Agate Grey                                                      : price : 281,000"
    << endl;

  cout <<
    "Option 10:\tLeather interior in special colour Graphhite Blue                                    : price : 314,000"
    << endl;
  cout <<
    "Option 11:\tLeather interior in special colour Bordeaux Red                                      : price : 314,000"
    << endl;
  cout <<
    "Option 12:\tTwo-tone Leather interior in two-tone combination Black-Bourdeaux Red                : price : 314,000"
    << endl;
  cout <<
    "Option 13:\tTwo-tone Leather interior in two-tone combination Black-Crayor                       : price : 314,000"
    << endl;

  cout <<
    "Option 14:\tLeather interior in natural leather Espresso                                         : price : 386,000"
    << endl;
  cout <<
    "Option 15:\tLeather interior package in natural leather,two-tone combination in Espresso-Cognac  : price : 419,000"
    << endl;

  cout << "Choose your Option :";
  cin >> select3;

  switch (select3)
    {
    case 0:
        fprintf (fp,"\nStandard Interior/Race-Tex in Black                                                 : price :0");
	       break;
    case 1:
        fprintf (fp,"\nStandard Interior/Race-Tex in Agate Grey                                            : price :0");
        break;
    case 2:
        fprintf (fp,"\nInterior in Black                                                                   : price : 0");
        break;
    case 3:
        fprintf (fp,"\nInterior in Agate Grey                                                              : price : 0");
        break;
    case 4:
        moneyExpansion += 131000;
        fprintf (fp,"\nLeather package Black                                                               : price : 131,000");
	    break;
    case 5:
        moneyExpansion += 131000;
        fprintf (fp,"\nLeather package Agate Grey                                                          : price : 131,000");
	    break;
    case 6:
        moneyExpansion += 147000;
        fprintf (fp,"\nLeather package Black-Bordeaux Red                                                  : price : 147,000");
	    break;
    case 7:
        moneyExpansion += 147000;
        fprintf (fp,"\nLeather package Black-Crayou                                                        : price : 147,000");
	    break;
    case 8:
        moneyExpansion += 281000;
        fprintf (fp,"\nLeather interior in Black                                                           : price : 281,000");
	    break;
    case 9:
        moneyExpansion += 281000;
        fprintf (fp,"\nLeather interior in Agate Grey                                                      : price : 281,000");
	    break;
	case 10:
	    moneyExpansion += 314000;
        fprintf (fp,"\nLeather interior in special colour Graphhite Blue                                    : price : 314,000");
	    break;
    case 11:
        moneyExpansion += 314000;
        fprintf (fp,"\nLeather interior in special colour Bordeaux Red                                      : price : 314,000");
	    break;
    case 12:
        moneyExpansion += 314000;
        fprintf (fp,"\nTwo-tone Leather interior in two-tone combination Black-Bourdeaux Red                : price : 314,000");
	    break;
    case 13:
        moneyExpansion += 314000;
        fprintf (fp,"\nTwo-tone Leather interior in two-tone combination Black-Crayor                       : price : 314,000");
	    break;
    case 14:
        moneyExpansion += 386000;
        fprintf (fp,"\nLeather interior in natural leather Espresso                                         : price : 386,000");
        break;
    case 15:
        moneyExpansion += 419000;
        fprintf (fp,"\nLeather interior package in natural leather,two-tone combination in Espresso-Cognac  : price : 419,000");
        break;
    default:
        cout << "You choose wrong option." << endl;
        break;
        
    }
    fclose (fp);
    cout << "\nYour selection has been added.\n" << endl;
}

void
model718::selectseats ()
{

  FILE *fp;
  fp = fopen ("customer_Choose.txt", "a");

  cout <<"Option 0 :\tSports seats(two-way electric)                                   : price : 0 "<< endl;
  cout <<"Option 1 :\tSports seats Plus(2-way electric)                                : price : 167,000"<< endl;
  cout <<"Option 2 :\tFull electric Sports seats (14-way,electric)incl.memory package  : price : 183,000"<< endl;
  cout <<"Option 3 :\tAdaptive Sports Sports Plus(18-way,electric)incl.memory package  : price : 302,000"<< endl;


  cout << "Choose your Option :";
  cin >> select4;

  switch (select4)
    {
    case 0:
      fprintf (fp,"\nSeat : Sports seats(two-way electric)                                   : price 0");
      break;
    case 1:
      moneyExpansion += 167000;
      fprintf (fp,"\nSeat : Sports seats Plus(2-way electric)                                : price : 167,000");
      break;
    case 2:
      moneyExpansion += 183000;
      fprintf (fp,"\nSeat : Full electric Sports seats (14-way,electric)incl.memory package  : price : 183,000");
      break;
    case 3:
      moneyExpansion += 302000;
      fprintf (fp,"\nSeat : Adaptive Sports Sports Plus(18-way,electric)incl.memory package  : price : 302,000");
      break;
    default:
      cout << "You choose wrong option." << endl;
      break;
    
    
    }
fclose (fp);
cout << "\nYour selection has been added.\n" << endl;
}





void
model911::selectExteriorColor ()
{

  FILE *fp;
  fp = fopen ("customer_Choose.txt", "a");

  fprintf(fp,"\nModel : 911");

  cout << "Option 0  :\t White                  : price :  0" << endl;
  cout << "Option 1  :\t Black                  : price :  0" << endl;
  cout << "Option 2  :\t Guards Red             : price :  0" << endl;
  cout << "Option 3  :\t Racing Yellow          : price :  0" << endl;

  cout << "Option 4  :\t Jet Black Metallic     : price :  79,000" << endl;
  cout << "Option 5  :\t Gentian Blue Metallic  : price :  79,000" << endl;
  cout << "Option 6  :\t GT Silver Metallic     : price :  79,000" << endl;
  cout << "Option 7  :\t Agate Grey Metallic    : price :  79,000" << endl;

  cout << "Option 8  :\t Ruby Star Neo          : price :  207,000" << endl;
  cout << "Option 9  :\t Carmine Red            : price :  207,000" << endl;
  cout << "Option 10 :\t Shark Blue             : price :  207,000" << endl;
  cout << "Option 11 :\t Arctic Grey            : price :  207,000" << endl;
  cout << "Option 12 :\t Crayon                 : price :  207,000 " << endl;
  cout << "Option 13 :\t Ice Grey Metallic      : price :  207,000" << endl;

  cout << "****************************************************" << endl;

  cout << "Choose your Option :";
  cin >> select1;

  switch (select1)
    {
    case 0:
      fprintf (fp, "\nColor :  White                  : price :  0");
      moneyExpansion = 0;
      break;
    case 1:
      fprintf (fp, "\nColor : Black                  : price :  0");
      moneyExpansion = 0;
      break;
    case 2:
      fprintf (fp, "\nColor : Guards Red             : price :  0");
      moneyExpansion = 0;
      break;
    case 3:
      fprintf (fp, "\nColor : Racing Yellow          : price :  0");
      moneyExpansion = 0;
      break;
    case 4:
      fprintf (fp, "\nColor : Jet Black Metallic     : price :  79,000");
      moneyExpansion = 79000;
      break;
    case 5:
      fprintf (fp, "\nColor : Gentian Blue Metallic  : price :  79,000");
      moneyExpansion = 79000;
      break;
    case 6:
      fprintf (fp, "\nColor : GT Silver Metallic     : price :  79,000");
      moneyExpansion = 79000;
      break;
    case 7:
      fprintf (fp, "\nColor : Agate Grey Metallic    : price :  79,000");
      moneyExpansion = 79000;
      break;
    case 8:
      fprintf (fp, "\nColor : Ruby Star Neo          : price :  207,000");
      moneyExpansion = 207000;
      break;
    case 9:
      fprintf (fp, "\nColor : Carmine Red            : price :  207,000");
      moneyExpansion = 207000;
      break;
    case 10:
      fprintf (fp, "\nColor : Shark Blue             : price :  207,000");
      moneyExpansion = 207000;
      break;
    case 11:
      fprintf (fp, "\nColor : Arctic Grey            : price :  207,000");
      moneyExpansion = 207000;
      break;
    case 12:
      fprintf (fp, "\nColor : Crayon                 : price :  207,000");
      moneyExpansion = 207000;
      break;
    case 13:
      fprintf (fp, "\nColor : Ice Grey Metallic      : price :  207,000");
      moneyExpansion = 207000;
      break;
    default:
      cout << "You choose wrong option." << endl;
      moneyExpansion = 0;
      break;
    }

  fclose (fp);
  cout << "\nYour selection has been added.\n" << endl;
}

void
model911::selectWheels ()
{

  FILE *fp;
  fp = fopen ("customer_Choose.txt", "a");

  cout << "Option 0 :\t 19-icch Cayman S wheels         : price : 0 " << endl;
  cout << "Option 1 :\t 19-inch Boxster S wheels        : price : 164,000 " <<
    endl;
  cout << "Option 2 :\t 20-inch Carrera S wheels        : price : 216,000 " <<
    endl;
  cout << "Option 3 :\t 20-inch Carrera Classic wheels  : price : 268,000 " <<
    endl;
  cout << "Option 4 :\t 20-inch Carrera Sport wheels    : price : 282,000 " <<
    endl;
  cout << "Option 5 :\t 20-inch 911 Turbo wheels        : price : 363,000 " <<
    endl;


  cout << "Choose your Option :";
  cin >> select2;

  switch (select2)
    {
    case 0:
      fprintf (fp, "\nWheels : 19-icch Cayman S wheels         : price : 0");
      break;
    case 1:
      fprintf (fp,"\nWheels : 19-inch Boxster S wheels        : price : 164,000");
      moneyExpansion += 164000;
      break;
    case 2:
      fprintf (fp,"\nWheels : 20-inch Carrera S wheels        : price : 216,000");
      moneyExpansion += 216000;
      break;
    case 3:
      fprintf (fp,"\nWheels : 20-inch Carrera Classic wheels  : price : 268,000");
      moneyExpansion += 268000;
      break;
    case 4:
      fprintf (fp,
	       "\nWheels : 20-inch Carrera Sport wheels    : price : 282,000");
      moneyExpansion += 282000;
      break;
    case 5:
      fprintf (fp,
	       "\nWheels : 20-inch 911 Turbo wheels        : price : 363,000");
      moneyExpansion += 363000;
      break;
    default:
      cout << "You choose wrong option." << endl;
      break;

      
    }

  fclose (fp);
  cout << "\nYour selection has been added.\n" << endl;
}

void
model911::selectInteriorColor ()
{
    
  FILE *fp;
  fp = fopen ("customer_Choose.txt", "a");
    
  cout <<
    "Option 0 :\tStandard Interior/Race-Tex in Black                                                 : price :0 "
    << endl;
  cout <<
    "Option 1 :\tStandard Interior/Race-Tex in Agate Grey                                            : price :0 "
    << endl;
  cout <<
    "Option 2 :\tInterior in Black                                                                   : price : 0"
    << endl;
  cout <<
    "Option 3 :\tInterior in Agate Grey                                                              : price : 0"
    << endl;

  cout <<
    "Option 4 :\tLeather package Black                                                               : price : 131,000"
    << endl;
  cout <<
    "Option 5 :\tLeather package Agate Grey                                                          : price : 131,000"
    << endl;

  cout <<
    "Option 6 :\tLeather package Black-Bordeaux Red                                                  : price : 147,000"
    << endl;
  cout <<
    "Option 7 :\tLeather package Black-Crayou                                                        : price : 147,000"
    << endl;

  cout <<
    "Option 8 :\tLeather interior in Black                                                           : price : 281,000"
    << endl;
  cout <<
    "Option 9 :\tLeather interior in Agate Grey                                                      : price : 281,000"
    << endl;

  cout <<
    "Option 10:\tLeather interior in special colour Graphhite Blue                                    : price : 314,000"
    << endl;
  cout <<
    "Option 11:\tLeather interior in special colour Bordeaux Red                                      : price : 314,000"
    << endl;
  cout <<
    "Option 12:\tTwo-tone Leather interior in two-tone combination Black-Bourdeaux Red                : price : 314,000"
    << endl;
  cout <<
    "Option 13:\tTwo-tone Leather interior in two-tone combination Black-Crayor                       : price : 314,000"
    << endl;

  cout <<
    "Option 14:\tLeather interior in natural leather Espresso                                         : price : 386,000"
    << endl;
  cout <<
    "Option 15:\tLeather interior package in natural leather,two-tone combination in Espresso-Cognac  : price : 419,000"
    << endl;

  cout << "Choose your Option :";
  cin >> select3;

  switch (select3)
    {
    case 0:
        fprintf (fp,"\nStandard Interior/Race-Tex in Black                                                 : price :0");
	       break;
    case 1:
        fprintf (fp,"\nStandard Interior/Race-Tex in Agate Grey                                            : price :0");
        break;
    case 2:
        fprintf (fp,"\nInterior in Black                                                                   : price : 0");
        break;
    case 3:
        fprintf (fp,"\nInterior in Agate Grey                                                              : price : 0");
        break;
    case 4:
        moneyExpansion += 131000;
        fprintf (fp,"\nLeather package Black                                                               : price : 131,000");
	    break;
    case 5:
        moneyExpansion += 131000;
        fprintf (fp,"\nLeather package Agate Grey                                                          : price : 131,000");
	    break;
    case 6:
        moneyExpansion += 147000;
        fprintf (fp,"\nLeather package Black-Bordeaux Red                                                  : price : 147,000");
	    break;
    case 7:
        moneyExpansion += 147000;
        fprintf (fp,"\nLeather package Black-Crayou                                                        : price : 147,000");
	    break;
    case 8:
        moneyExpansion += 281000;
        fprintf (fp,"\nLeather interior in Black                                                           : price : 281,000");
	    break;
    case 9:
        moneyExpansion += 281000;
        fprintf (fp,"\nLeather interior in Agate Grey                                                      : price : 281,000");
	    break;
	case 10:
	    moneyExpansion += 314000;
        fprintf (fp,"\nLeather interior in special colour Graphhite Blue                                    : price : 314,000");
	    break;
    case 11:
        moneyExpansion += 314000;
        fprintf (fp,"\nLeather interior in special colour Bordeaux Red                                      : price : 314,000");
	    break;
    case 12:
        moneyExpansion += 314000;
        fprintf (fp,"\nTwo-tone Leather interior in two-tone combination Black-Bourdeaux Red                : price : 314,000");
	    break;
    case 13:
        moneyExpansion += 314000;
        fprintf (fp,"\nTwo-tone Leather interior in two-tone combination Black-Crayor                       : price : 314,000");
	    break;
    case 14:
        moneyExpansion += 386000;
        fprintf (fp,"\nLeather interior in natural leather Espresso                                         : price : 386,000");
        break;
    case 15:
        moneyExpansion += 419000;
        fprintf (fp,"\nLeather interior package in natural leather,two-tone combination in Espresso-Cognac  : price : 419,000");
        break;
    default:
        cout << "You choose wrong option." << endl;
        break;
        
    }
    fclose (fp);
    cout << "\nYour selection has been added.\n" << endl;
}

void
model911::selectseats ()
{

  FILE *fp;
  fp = fopen ("customer_Choose.txt", "a");

  cout <<"Option 0 :\tSports seats(two-way electric)                                   : price : 0 "<< endl;
  cout <<"Option 1 :\tSports seats Plus(2-way electric)                                : price : 167,000"<< endl;
  cout <<"Option 2 :\tFull electric Sports seats (14-way,electric)incl.memory package  : price : 183,000"<< endl;
  cout <<"Option 3 :\tAdaptive Sports Sports Plus(18-way,electric)incl.memory package  : price : 302,000"<< endl;


  cout << "Choose your Option :";
  cin >> select4;

  switch (select4)
    {
    case 0:
      fprintf (fp,"\nSeat : Sports seats(two-way electric)                                   : price 0");
      break;
    case 1:
      moneyExpansion += 167000;
      fprintf (fp,"\nSeat : Sports seats Plus(2-way electric)                                : price : 167,000");
      break;
    case 2:
      moneyExpansion += 183000;
      fprintf (fp,"\nSeat : Full electric Sports seats (14-way,electric)incl.memory package  : price : 183,000");
      break;
    case 3:
      moneyExpansion += 302000;
      fprintf (fp,"\nSeat : Adaptive Sports Sports Plus(18-way,electric)incl.memory package  : price : 302,000");
      break;
    default:
      cout << "You choose wrong option." << endl;
      break;
    
    
    }
fclose (fp);
cout << "\nYour selection has been added.\n" << endl;
}






void
modelTaycan::selectExteriorColor ()
{

  FILE *fp;
  fp = fopen ("customer_Choose.txt", "a");

  fprintf(fp,"\nModel : Taycan");

  cout << "Option 0  :\t White                  : price :  0" << endl;
  cout << "Option 1  :\t Black                  : price :  0" << endl;
  cout << "Option 2  :\t Guards Red             : price :  0" << endl;
  cout << "Option 3  :\t Racing Yellow          : price :  0" << endl;

  cout << "Option 4  :\t Jet Black Metallic     : price :  79,000" << endl;
  cout << "Option 5  :\t Gentian Blue Metallic  : price :  79,000" << endl;
  cout << "Option 6  :\t GT Silver Metallic     : price :  79,000" << endl;
  cout << "Option 7  :\t Agate Grey Metallic    : price :  79,000" << endl;

  cout << "Option 8  :\t Ruby Star Neo          : price :  207,000" << endl;
  cout << "Option 9  :\t Carmine Red            : price :  207,000" << endl;
  cout << "Option 10 :\t Shark Blue             : price :  207,000" << endl;
  cout << "Option 11 :\t Arctic Grey            : price :  207,000" << endl;
  cout << "Option 12 :\t Crayon                 : price :  207,000 " << endl;
  cout << "Option 13 :\t Ice Grey Metallic      : price :  207,000" << endl;

  cout << "****************************************************" << endl;

  cout << "Choose your Option :";
  cin >> select1;

  switch (select1)
    {
    case 0:
      fprintf (fp, "\nColor :  White                  : price :  0");
      moneyExpansion = 0;
      break;
    case 1:
      fprintf (fp, "\nColor : Black                  : price :  0");
      moneyExpansion = 0;
      break;
    case 2:
      fprintf (fp, "\nColor : Guards Red             : price :  0");
      moneyExpansion = 0;
      break;
    case 3:
      fprintf (fp, "\nColor : Racing Yellow          : price :  0");
      moneyExpansion = 0;
      break;
    case 4:
      fprintf (fp, "\nColor : Jet Black Metallic     : price :  79,000");
      moneyExpansion = 79000;
      break;
    case 5:
      fprintf (fp, "\nColor : Gentian Blue Metallic  : price :  79,000");
      moneyExpansion = 79000;
      break;
    case 6:
      fprintf (fp, "\nColor : GT Silver Metallic     : price :  79,000");
      moneyExpansion = 79000;
      break;
    case 7:
      fprintf (fp, "\nColor : Agate Grey Metallic    : price :  79,000");
      moneyExpansion = 79000;
      break;
    case 8:
      fprintf (fp, "\nColor : Ruby Star Neo          : price :  207,000");
      moneyExpansion = 207000;
      break;
    case 9:
      fprintf (fp, "\nColor : Carmine Red            : price :  207,000");
      moneyExpansion = 207000;
      break;
    case 10:
      fprintf (fp, "\nColor : Shark Blue             : price :  207,000");
      moneyExpansion = 207000;
      break;
    case 11:
      fprintf (fp, "\nColor : Arctic Grey            : price :  207,000");
      moneyExpansion = 207000;
      break;
    case 12:
      fprintf (fp, "\nColor : Crayon                 : price :  207,000");
      moneyExpansion = 207000;
      break;
    case 13:
      fprintf (fp, "\nColor : Ice Grey Metallic      : price :  207,000");
      moneyExpansion = 207000;
      break;
    default:
      cout << "You choose wrong option." << endl;
      moneyExpansion = 0;
      break;
    }

  fclose (fp);
  cout << "\nYour selection has been added.\n" << endl;
}

void
modelTaycan::selectWheels ()
{

  FILE *fp;
  fp = fopen ("customer_Choose.txt", "a");

  cout << "Option 0 :\t 19-icch Cayman S wheels         : price : 0 " << endl;
  cout << "Option 1 :\t 19-inch Boxster S wheels        : price : 164,000 " <<
    endl;
  cout << "Option 2 :\t 20-inch Carrera S wheels        : price : 216,000 " <<
    endl;
  cout << "Option 3 :\t 20-inch Carrera Classic wheels  : price : 268,000 " <<
    endl;
  cout << "Option 4 :\t 20-inch Carrera Sport wheels    : price : 282,000 " <<
    endl;
  cout << "Option 5 :\t 20-inch 911 Turbo wheels        : price : 363,000 " <<
    endl;


  cout << "Choose your Option :";
  cin >> select2;

  switch (select2)
    {
    case 0:
      fprintf (fp, "\nWheels : 19-icch Cayman S wheels         : price : 0");
      break;
    case 1:
      fprintf (fp,"\nWheels : 19-inch Boxster S wheels        : price : 164,000");
      moneyExpansion += 164000;
      break;
    case 2:
      fprintf (fp,"\nWheels : 20-inch Carrera S wheels        : price : 216,000");
      moneyExpansion += 216000;
      break;
    case 3:
      fprintf (fp,"\nWheels : 20-inch Carrera Classic wheels  : price : 268,000");
      moneyExpansion += 268000;
      break;
    case 4:
      fprintf (fp,
	       "\nWheels : 20-inch Carrera Sport wheels    : price : 282,000");
      moneyExpansion += 282000;
      break;
    case 5:
      fprintf (fp,
	       "\nWheels : 20-inch 911 Turbo wheels        : price : 363,000");
      moneyExpansion += 363000;
      break;
    default:
      cout << "You choose wrong option." << endl;
      break;

      
    }

  fclose (fp);
  cout << "\nYour selection has been added.\n" << endl;
}

void
modelTaycan::selectInteriorColor ()
{
    
  FILE *fp;
  fp = fopen ("customer_Choose.txt", "a");
    
  cout <<
    "Option 0 :\tStandard Interior/Race-Tex in Black                                                 : price :0 "
    << endl;
  cout <<
    "Option 1 :\tStandard Interior/Race-Tex in Agate Grey                                            : price :0 "
    << endl;
  cout <<
    "Option 2 :\tInterior in Black                                                                   : price : 0"
    << endl;
  cout <<
    "Option 3 :\tInterior in Agate Grey                                                              : price : 0"
    << endl;

  cout <<
    "Option 4 :\tLeather package Black                                                               : price : 131,000"
    << endl;
  cout <<
    "Option 5 :\tLeather package Agate Grey                                                          : price : 131,000"
    << endl;

  cout <<
    "Option 6 :\tLeather package Black-Bordeaux Red                                                  : price : 147,000"
    << endl;
  cout <<
    "Option 7 :\tLeather package Black-Crayou                                                        : price : 147,000"
    << endl;

  cout <<
    "Option 8 :\tLeather interior in Black                                                           : price : 281,000"
    << endl;
  cout <<
    "Option 9 :\tLeather interior in Agate Grey                                                      : price : 281,000"
    << endl;

  cout <<
    "Option 10:\tLeather interior in special colour Graphhite Blue                                    : price : 314,000"
    << endl;
  cout <<
    "Option 11:\tLeather interior in special colour Bordeaux Red                                      : price : 314,000"
    << endl;
  cout <<
    "Option 12:\tTwo-tone Leather interior in two-tone combination Black-Bourdeaux Red                : price : 314,000"
    << endl;
  cout <<
    "Option 13:\tTwo-tone Leather interior in two-tone combination Black-Crayor                       : price : 314,000"
    << endl;

  cout <<
    "Option 14:\tLeather interior in natural leather Espresso                                         : price : 386,000"
    << endl;
  cout <<
    "Option 15:\tLeather interior package in natural leather,two-tone combination in Espresso-Cognac  : price : 419,000"
    << endl;

  cout << "Choose your Option :";
  cin >> select3;

  switch (select3)
    {
    case 0:
        fprintf (fp,"\nStandard Interior/Race-Tex in Black                                                 : price :0");
	       break;
    case 1:
        fprintf (fp,"\nStandard Interior/Race-Tex in Agate Grey                                            : price :0");
        break;
    case 2:
        fprintf (fp,"\nInterior in Black                                                                   : price : 0");
        break;
    case 3:
        fprintf (fp,"\nInterior in Agate Grey                                                              : price : 0");
        break;
    case 4:
        moneyExpansion += 131000;
        fprintf (fp,"\nLeather package Black                                                               : price : 131,000");
	    break;
    case 5:
        moneyExpansion += 131000;
        fprintf (fp,"\nLeather package Agate Grey                                                          : price : 131,000");
	    break;
    case 6:
        moneyExpansion += 147000;
        fprintf (fp,"\nLeather package Black-Bordeaux Red                                                  : price : 147,000");
	    break;
    case 7:
        moneyExpansion += 147000;
        fprintf (fp,"\nLeather package Black-Crayou                                                        : price : 147,000");
	    break;
    case 8:
        moneyExpansion += 281000;
        fprintf (fp,"\nLeather interior in Black                                                           : price : 281,000");
	    break;
    case 9:
        moneyExpansion += 281000;
        fprintf (fp,"\nLeather interior in Agate Grey                                                      : price : 281,000");
	    break;
	case 10:
	    moneyExpansion += 314000;
        fprintf (fp,"\nLeather interior in special colour Graphhite Blue                                    : price : 314,000");
	    break;
    case 11:
        moneyExpansion += 314000;
        fprintf (fp,"\nLeather interior in special colour Bordeaux Red                                      : price : 314,000");
	    break;
    case 12:
        moneyExpansion += 314000;
        fprintf (fp,"\nTwo-tone Leather interior in two-tone combination Black-Bourdeaux Red                : price : 314,000");
	    break;
    case 13:
        moneyExpansion += 314000;
        fprintf (fp,"\nTwo-tone Leather interior in two-tone combination Black-Crayor                       : price : 314,000");
	    break;
    case 14:
        moneyExpansion += 386000;
        fprintf (fp,"\nLeather interior in natural leather Espresso                                         : price : 386,000");
        break;
    case 15:
        moneyExpansion += 419000;
        fprintf (fp,"\nLeather interior package in natural leather,two-tone combination in Espresso-Cognac  : price : 419,000");
        break;
    default:
        cout << "You choose wrong option." << endl;
        break;
        
    }
    fclose (fp);
    cout << "\nYour selection has been added.\n" << endl;
}

void
modelTaycan::selectseats ()
{

  FILE *fp;
  fp = fopen ("customer_Choose.txt", "a");

  cout <<"Option 0 :\tSports seats(two-way electric)                                   : price : 0 "<< endl;
  cout <<"Option 1 :\tSports seats Plus(2-way electric)                                : price : 167,000"<< endl;
  cout <<"Option 2 :\tFull electric Sports seats (14-way,electric)incl.memory package  : price : 183,000"<< endl;
  cout <<"Option 3 :\tAdaptive Sports Sports Plus(18-way,electric)incl.memory package  : price : 302,000"<< endl;


  cout << "Choose your Option :";
  cin >> select4;

  switch (select4)
    {
    case 0:
      fprintf (fp,"\nSeat : Sports seats(two-way electric)                                   : price 0");
      break;
    case 1:
      moneyExpansion += 167000;
      fprintf (fp,"\nSeat : Sports seats Plus(2-way electric)                                : price : 167,000");
      break;
    case 2:
      moneyExpansion += 183000;
      fprintf (fp,"\nSeat : Full electric Sports seats (14-way,electric)incl.memory package  : price : 183,000");
      break;
    case 3:
      moneyExpansion += 302000;
      fprintf (fp,"\nSeat : Adaptive Sports Sports Plus(18-way,electric)incl.memory package  : price : 302,000");
      break;
    default:
      cout << "You choose wrong option." << endl;
      break;
    
    
    }
fclose (fp);
cout << "\nYour selection has been added.\n" << endl;
}





void
modelPanamera::selectExteriorColor ()
{

  FILE *fp;
  fp = fopen ("customer_Choose.txt", "a");

  fprintf(fp,"\nModel : Panamera");

  cout << "Option 0  :\t White                  : price :  0" << endl;
  cout << "Option 1  :\t Black                  : price :  0" << endl;
  cout << "Option 2  :\t Guards Red             : price :  0" << endl;
  cout << "Option 3  :\t Racing Yellow          : price :  0" << endl;

  cout << "Option 4  :\t Jet Black Metallic     : price :  79,000" << endl;
  cout << "Option 5  :\t Gentian Blue Metallic  : price :  79,000" << endl;
  cout << "Option 6  :\t GT Silver Metallic     : price :  79,000" << endl;
  cout << "Option 7  :\t Agate Grey Metallic    : price :  79,000" << endl;

  cout << "Option 8  :\t Ruby Star Neo          : price :  207,000" << endl;
  cout << "Option 9  :\t Carmine Red            : price :  207,000" << endl;
  cout << "Option 10 :\t Shark Blue             : price :  207,000" << endl;
  cout << "Option 11 :\t Arctic Grey            : price :  207,000" << endl;
  cout << "Option 12 :\t Crayon                 : price :  207,000 " << endl;
  cout << "Option 13 :\t Ice Grey Metallic      : price :  207,000" << endl;

  cout << "****************************************************" << endl;

  cout << "Choose your Option :";
  cin >> select1;

  switch (select1)
    {
    case 0:
      fprintf (fp, "\nColor :  White                  : price :  0");
      moneyExpansion = 0;
      break;
    case 1:
      fprintf (fp, "\nColor : Black                  : price :  0");
      moneyExpansion = 0;
      break;
    case 2:
      fprintf (fp, "\nColor : Guards Red             : price :  0");
      moneyExpansion = 0;
      break;
    case 3:
      fprintf (fp, "\nColor : Racing Yellow          : price :  0");
      moneyExpansion = 0;
      break;
    case 4:
      fprintf (fp, "\nColor : Jet Black Metallic     : price :  79,000");
      moneyExpansion = 79000;
      break;
    case 5:
      fprintf (fp, "\nColor : Gentian Blue Metallic  : price :  79,000");
      moneyExpansion = 79000;
      break;
    case 6:
      fprintf (fp, "\nColor : GT Silver Metallic     : price :  79,000");
      moneyExpansion = 79000;
      break;
    case 7:
      fprintf (fp, "\nColor : Agate Grey Metallic    : price :  79,000");
      moneyExpansion = 79000;
      break;
    case 8:
      fprintf (fp, "\nColor : Ruby Star Neo          : price :  207,000");
      moneyExpansion = 207000;
      break;
    case 9:
      fprintf (fp, "\nColor : Carmine Red            : price :  207,000");
      moneyExpansion = 207000;
      break;
    case 10:
      fprintf (fp, "\nColor : Shark Blue             : price :  207,000");
      moneyExpansion = 207000;
      break;
    case 11:
      fprintf (fp, "\nColor : Arctic Grey            : price :  207,000");
      moneyExpansion = 207000;
      break;
    case 12:
      fprintf (fp, "\nColor : Crayon                 : price :  207,000");
      moneyExpansion = 207000;
      break;
    case 13:
      fprintf (fp, "\nColor : Ice Grey Metallic      : price :  207,000");
      moneyExpansion = 207000;
      break;
    default:
      cout << "You choose wrong option." << endl;
      moneyExpansion = 0;
      break;
    }

  fclose (fp);
  cout << "\nYour selection has been added.\n" << endl;
}
void
modelPanamera::selectWheels ()
{

  FILE *fp;
  fp = fopen ("customer_Choose.txt", "a");

  cout << "Option 0 :\t 19-icch Cayman S wheels         : price : 0 " << endl;
  cout << "Option 1 :\t 19-inch Boxster S wheels        : price : 164,000 " <<
    endl;
  cout << "Option 2 :\t 20-inch Carrera S wheels        : price : 216,000 " <<
    endl;
  cout << "Option 3 :\t 20-inch Carrera Classic wheels  : price : 268,000 " <<
    endl;
  cout << "Option 4 :\t 20-inch Carrera Sport wheels    : price : 282,000 " <<
    endl;
  cout << "Option 5 :\t 20-inch 911 Turbo wheels        : price : 363,000 " <<
    endl;


  cout << "Choose your Option :";
  cin >> select2;

  switch (select2)
    {
    case 0:
      fprintf (fp, "\nWheels : 19-icch Cayman S wheels         : price : 0");
      break;
    case 1:
      fprintf (fp,"\nWheels : 19-inch Boxster S wheels        : price : 164,000");
      moneyExpansion += 164000;
      break;
    case 2:
      fprintf (fp,"\nWheels : 20-inch Carrera S wheels        : price : 216,000");
      moneyExpansion += 216000;
      break;
    case 3:
      fprintf (fp,"\nWheels : 20-inch Carrera Classic wheels  : price : 268,000");
      moneyExpansion += 268000;
      break;
    case 4:
      fprintf (fp,
	       "\nWheels : 20-inch Carrera Sport wheels    : price : 282,000");
      moneyExpansion += 282000;
      break;
    case 5:
      fprintf (fp,
	       "\nWheels : 20-inch 911 Turbo wheels        : price : 363,000");
      moneyExpansion += 363000;
      break;
    default:
      cout << "You choose wrong option." << endl;
      break;

      
    }

  fclose (fp);
  cout << "\nYour selection has been added.\n" << endl;
}

void
modelPanamera::selectInteriorColor ()
{
    
  FILE *fp;
  fp = fopen ("customer_Choose.txt", "a");
    
  cout <<
    "Option 0 :\tStandard Interior/Race-Tex in Black                                                 : price :0 "
    << endl;
  cout <<
    "Option 1 :\tStandard Interior/Race-Tex in Agate Grey                                            : price :0 "
    << endl;
  cout <<
    "Option 2 :\tInterior in Black                                                                   : price : 0"
    << endl;
  cout <<
    "Option 3 :\tInterior in Agate Grey                                                              : price : 0"
    << endl;

  cout <<
    "Option 4 :\tLeather package Black                                                               : price : 131,000"
    << endl;
  cout <<
    "Option 5 :\tLeather package Agate Grey                                                          : price : 131,000"
    << endl;

  cout <<
    "Option 6 :\tLeather package Black-Bordeaux Red                                                  : price : 147,000"
    << endl;
  cout <<
    "Option 7 :\tLeather package Black-Crayou                                                        : price : 147,000"
    << endl;

  cout <<
    "Option 8 :\tLeather interior in Black                                                           : price : 281,000"
    << endl;
  cout <<
    "Option 9 :\tLeather interior in Agate Grey                                                      : price : 281,000"
    << endl;

  cout <<
    "Option 10:\tLeather interior in special colour Graphhite Blue                                    : price : 314,000"
    << endl;
  cout <<
    "Option 11:\tLeather interior in special colour Bordeaux Red                                      : price : 314,000"
    << endl;
  cout <<
    "Option 12:\tTwo-tone Leather interior in two-tone combination Black-Bourdeaux Red                : price : 314,000"
    << endl;
  cout <<
    "Option 13:\tTwo-tone Leather interior in two-tone combination Black-Crayor                       : price : 314,000"
    << endl;

  cout <<
    "Option 14:\tLeather interior in natural leather Espresso                                         : price : 386,000"
    << endl;
  cout <<
    "Option 15:\tLeather interior package in natural leather,two-tone combination in Espresso-Cognac  : price : 419,000"
    << endl;

  cout << "Choose your Option :";
  cin >> select3;

  switch (select3)
    {
    case 0:
        fprintf (fp,"\nStandard Interior/Race-Tex in Black                                                 : price :0");
	       break;
    case 1:
        fprintf (fp,"\nStandard Interior/Race-Tex in Agate Grey                                            : price :0");
        break;
    case 2:
        fprintf (fp,"\nInterior in Black                                                                   : price : 0");
        break;
    case 3:
        fprintf (fp,"\nInterior in Agate Grey                                                              : price : 0");
        break;
    case 4:
        moneyExpansion += 131000;
        fprintf (fp,"\nLeather package Black                                                               : price : 131,000");
	    break;
    case 5:
        moneyExpansion += 131000;
        fprintf (fp,"\nLeather package Agate Grey                                                          : price : 131,000");
	    break;
    case 6:
        moneyExpansion += 147000;
        fprintf (fp,"\nLeather package Black-Bordeaux Red                                                  : price : 147,000");
	    break;
    case 7:
        moneyExpansion += 147000;
        fprintf (fp,"\nLeather package Black-Crayou                                                        : price : 147,000");
	    break;
    case 8:
        moneyExpansion += 281000;
        fprintf (fp,"\nLeather interior in Black                                                           : price : 281,000");
	    break;
    case 9:
        moneyExpansion += 281000;
        fprintf (fp,"\nLeather interior in Agate Grey                                                      : price : 281,000");
	    break;
	case 10:
	    moneyExpansion += 314000;
        fprintf (fp,"\nLeather interior in special colour Graphhite Blue                                    : price : 314,000");
	    break;
    case 11:
        moneyExpansion += 314000;
        fprintf (fp,"\nLeather interior in special colour Bordeaux Red                                      : price : 314,000");
	    break;
    case 12:
        moneyExpansion += 314000;
        fprintf (fp,"\nTwo-tone Leather interior in two-tone combination Black-Bourdeaux Red                : price : 314,000");
	    break;
    case 13:
        moneyExpansion += 314000;
        fprintf (fp,"\nTwo-tone Leather interior in two-tone combination Black-Crayor                       : price : 314,000");
	    break;
    case 14:
        moneyExpansion += 386000;
        fprintf (fp,"\nLeather interior in natural leather Espresso                                         : price : 386,000");
        break;
    case 15:
        moneyExpansion += 419000;
        fprintf (fp,"\nLeather interior package in natural leather,two-tone combination in Espresso-Cognac  : price : 419,000");
        break;
    default:
        cout << "You choose wrong option." << endl;
        break;
        
    }
    fclose (fp);
    cout << "\nYour selection has been added.\n" << endl;
}

void
modelPanamera::selectseats ()
{

  FILE *fp;
  fp = fopen ("customer_Choose.txt", "a");

  cout <<"Option 0 :\tSports seats(two-way electric)                                   : price : 0 "<< endl;
  cout <<"Option 1 :\tSports seats Plus(2-way electric)                                : price : 167,000"<< endl;
  cout <<"Option 2 :\tFull electric Sports seats (14-way,electric)incl.memory package  : price : 183,000"<< endl;
  cout <<"Option 3 :\tAdaptive Sports Sports Plus(18-way,electric)incl.memory package  : price : 302,000"<< endl;


  cout << "Choose your Option :";
  cin >> select4;

  switch (select4)
    {
    case 0:
      fprintf (fp,"\nSeat : Sports seats(two-way electric)                                   : price 0");
      break;
    case 1:
      moneyExpansion += 167000;
      fprintf (fp,"\nSeat : Sports seats Plus(2-way electric)                                : price : 167,000");
      break;
    case 2:
      moneyExpansion += 183000;
      fprintf (fp,"\nSeat : Full electric Sports seats (14-way,electric)incl.memory package  : price : 183,000");
      break;
    case 3:
      moneyExpansion += 302000;
      fprintf (fp,"\nSeat : Adaptive Sports Sports Plus(18-way,electric)incl.memory package  : price : 302,000");
      break;
    default:
      cout << "You choose wrong option." << endl;
      break;
    
    
    }
fclose (fp);
cout << "\nYour selection has been added.\n" << endl;
}





void
modelMacan::selectExteriorColor ()
{

  FILE *fp;
  fp = fopen ("customer_Choose.txt", "a");

  fprintf(fp,"\nModel : Macan");

  cout << "Option 0  :\t White                  : price :  0" << endl;
  cout << "Option 1  :\t Black                  : price :  0" << endl;
  cout << "Option 2  :\t Guards Red             : price :  0" << endl;
  cout << "Option 3  :\t Racing Yellow          : price :  0" << endl;

  cout << "Option 4  :\t Jet Black Metallic     : price :  79,000" << endl;
  cout << "Option 5  :\t Gentian Blue Metallic  : price :  79,000" << endl;
  cout << "Option 6  :\t GT Silver Metallic     : price :  79,000" << endl;
  cout << "Option 7  :\t Agate Grey Metallic    : price :  79,000" << endl;

  cout << "Option 8  :\t Ruby Star Neo          : price :  207,000" << endl;
  cout << "Option 9  :\t Carmine Red            : price :  207,000" << endl;
  cout << "Option 10 :\t Shark Blue             : price :  207,000" << endl;
  cout << "Option 11 :\t Arctic Grey            : price :  207,000" << endl;
  cout << "Option 12 :\t Crayon                 : price :  207,000 " << endl;
  cout << "Option 13 :\t Ice Grey Metallic      : price :  207,000" << endl;

  cout << "****************************************************" << endl;

  cout << "Choose your Option :";
  cin >> select1;

  switch (select1)
    {
    case 0:
      fprintf (fp, "\nColor :  White                  : price :  0");
      moneyExpansion = 0;
      break;
    case 1:
      fprintf (fp, "\nColor : Black                  : price :  0");
      moneyExpansion = 0;
      break;
    case 2:
      fprintf (fp, "\nColor : Guards Red             : price :  0");
      moneyExpansion = 0;
      break;
    case 3:
      fprintf (fp, "\nColor : Racing Yellow          : price :  0");
      moneyExpansion = 0;
      break;
    case 4:
      fprintf (fp, "\nColor : Jet Black Metallic     : price :  79,000");
      moneyExpansion = 79000;
      break;
    case 5:
      fprintf (fp, "\nColor : Gentian Blue Metallic  : price :  79,000");
      moneyExpansion = 79000;
      break;
    case 6:
      fprintf (fp, "\nColor : GT Silver Metallic     : price :  79,000");
      moneyExpansion = 79000;
      break;
    case 7:
      fprintf (fp, "\nColor : Agate Grey Metallic    : price :  79,000");
      moneyExpansion = 79000;
      break;
    case 8:
      fprintf (fp, "\nColor : Ruby Star Neo          : price :  207,000");
      moneyExpansion = 207000;
      break;
    case 9:
      fprintf (fp, "\nColor : Carmine Red            : price :  207,000");
      moneyExpansion = 207000;
      break;
    case 10:
      fprintf (fp, "\nColor : Shark Blue             : price :  207,000");
      moneyExpansion = 207000;
      break;
    case 11:
      fprintf (fp, "\nColor : Arctic Grey            : price :  207,000");
      moneyExpansion = 207000;
      break;
    case 12:
      fprintf (fp, "\nColor : Crayon                 : price :  207,000");
      moneyExpansion = 207000;
      break;
    case 13:
      fprintf (fp, "\nColor : Ice Grey Metallic      : price :  207,000");
      moneyExpansion = 207000;
      break;
    default:
      cout << "You choose wrong option." << endl;
      moneyExpansion = 0;
      break;
    }

  fclose (fp);
  cout << "\nYour selection has been added.\n" << endl;
}

void
modelMacan::selectWheels ()
{

  FILE *fp;
  fp = fopen ("customer_Choose.txt", "a");

  cout << "Option 0 :\t 19-icch Cayman S wheels         : price : 0 " << endl;
  cout << "Option 1 :\t 19-inch Boxster S wheels        : price : 164,000 " <<
    endl;
  cout << "Option 2 :\t 20-inch Carrera S wheels        : price : 216,000 " <<
    endl;
  cout << "Option 3 :\t 20-inch Carrera Classic wheels  : price : 268,000 " <<
    endl;
  cout << "Option 4 :\t 20-inch Carrera Sport wheels    : price : 282,000 " <<
    endl;
  cout << "Option 5 :\t 20-inch 911 Turbo wheels        : price : 363,000 " <<
    endl;


  cout << "Choose your Option :";
  cin >> select2;

  switch (select2)
    {
    case 0:
      fprintf (fp, "\nWheels : 19-icch Cayman S wheels         : price : 0");
      break;
    case 1:
      fprintf (fp,"\nWheels : 19-inch Boxster S wheels        : price : 164,000");
      moneyExpansion += 164000;
      break;
    case 2:
      fprintf (fp,"\nWheels : 20-inch Carrera S wheels        : price : 216,000");
      moneyExpansion += 216000;
      break;
    case 3:
      fprintf (fp,"\nWheels : 20-inch Carrera Classic wheels  : price : 268,000");
      moneyExpansion += 268000;
      break;
    case 4:
      fprintf (fp,
	       "\nWheels : 20-inch Carrera Sport wheels    : price : 282,000");
      moneyExpansion += 282000;
      break;
    case 5:
      fprintf (fp,
	       "\nWheels : 20-inch 911 Turbo wheels        : price : 363,000");
      moneyExpansion += 363000;
      break;
    default:
      cout << "You choose wrong option." << endl;
      break;

      
    }

  fclose (fp);
  cout << "\nYour selection has been added.\n" << endl;
}

void
modelMacan::selectInteriorColor ()
{
    
  FILE *fp;
  fp = fopen ("customer_Choose.txt", "a");
    
  cout <<
    "Option 0 :\tStandard Interior/Race-Tex in Black                                                 : price :0 "
    << endl;
  cout <<
    "Option 1 :\tStandard Interior/Race-Tex in Agate Grey                                            : price :0 "
    << endl;
  cout <<
    "Option 2 :\tInterior in Black                                                                   : price : 0"
    << endl;
  cout <<
    "Option 3 :\tInterior in Agate Grey                                                              : price : 0"
    << endl;

  cout <<
    "Option 4 :\tLeather package Black                                                               : price : 131,000"
    << endl;
  cout <<
    "Option 5 :\tLeather package Agate Grey                                                          : price : 131,000"
    << endl;

  cout <<
    "Option 6 :\tLeather package Black-Bordeaux Red                                                  : price : 147,000"
    << endl;
  cout <<
    "Option 7 :\tLeather package Black-Crayou                                                        : price : 147,000"
    << endl;

  cout <<
    "Option 8 :\tLeather interior in Black                                                           : price : 281,000"
    << endl;
  cout <<
    "Option 9 :\tLeather interior in Agate Grey                                                      : price : 281,000"
    << endl;

  cout <<
    "Option 10:\tLeather interior in special colour Graphhite Blue                                    : price : 314,000"
    << endl;
  cout <<
    "Option 11:\tLeather interior in special colour Bordeaux Red                                      : price : 314,000"
    << endl;
  cout <<
    "Option 12:\tTwo-tone Leather interior in two-tone combination Black-Bourdeaux Red                : price : 314,000"
    << endl;
  cout <<
    "Option 13:\tTwo-tone Leather interior in two-tone combination Black-Crayor                       : price : 314,000"
    << endl;

  cout <<
    "Option 14:\tLeather interior in natural leather Espresso                                         : price : 386,000"
    << endl;
  cout <<
    "Option 15:\tLeather interior package in natural leather,two-tone combination in Espresso-Cognac  : price : 419,000"
    << endl;

  cout << "Choose your Option :";
  cin >> select3;

  switch (select3)
    {
    case 0:
        fprintf (fp,"\nStandard Interior/Race-Tex in Black                                                 : price :0");
	       break;
    case 1:
        fprintf (fp,"\nStandard Interior/Race-Tex in Agate Grey                                            : price :0");
        break;
    case 2:
        fprintf (fp,"\nInterior in Black                                                                   : price : 0");
        break;
    case 3:
        fprintf (fp,"\nInterior in Agate Grey                                                              : price : 0");
        break;
    case 4:
        moneyExpansion += 131000;
        fprintf (fp,"\nLeather package Black                                                               : price : 131,000");
	    break;
    case 5:
        moneyExpansion += 131000;
        fprintf (fp,"\nLeather package Agate Grey                                                          : price : 131,000");
	    break;
    case 6:
        moneyExpansion += 147000;
        fprintf (fp,"\nLeather package Black-Bordeaux Red                                                  : price : 147,000");
	    break;
    case 7:
        moneyExpansion += 147000;
        fprintf (fp,"\nLeather package Black-Crayou                                                        : price : 147,000");
	    break;
    case 8:
        moneyExpansion += 281000;
        fprintf (fp,"\nLeather interior in Black                                                           : price : 281,000");
	    break;
    case 9:
        moneyExpansion += 281000;
        fprintf (fp,"\nLeather interior in Agate Grey                                                      : price : 281,000");
	    break;
	case 10:
	    moneyExpansion += 314000;
        fprintf (fp,"\nLeather interior in special colour Graphhite Blue                                    : price : 314,000");
	    break;
    case 11:
        moneyExpansion += 314000;
        fprintf (fp,"\nLeather interior in special colour Bordeaux Red                                      : price : 314,000");
	    break;
    case 12:
        moneyExpansion += 314000;
        fprintf (fp,"\nTwo-tone Leather interior in two-tone combination Black-Bourdeaux Red                : price : 314,000");
	    break;
    case 13:
        moneyExpansion += 314000;
        fprintf (fp,"\nTwo-tone Leather interior in two-tone combination Black-Crayor                       : price : 314,000");
	    break;
    case 14:
        moneyExpansion += 386000;
        fprintf (fp,"\nLeather interior in natural leather Espresso                                         : price : 386,000");
        break;
    case 15:
        moneyExpansion += 419000;
        fprintf (fp,"\nLeather interior package in natural leather,two-tone combination in Espresso-Cognac  : price : 419,000");
        break;
    default:
        cout << "You choose wrong option." << endl;
        break;
        
    }
    fclose (fp);
    cout << "\nYour selection has been added.\n" << endl;
}

void
modelMacan::selectseats ()
{

  FILE *fp;
  fp = fopen ("customer_Choose.txt", "a");

  cout <<"Option 0 :\tSports seats(two-way electric)                                   : price : 0 "<< endl;
  cout <<"Option 1 :\tSports seats Plus(2-way electric)                                : price : 167,000"<< endl;
  cout <<"Option 2 :\tFull electric Sports seats (14-way,electric)incl.memory package  : price : 183,000"<< endl;
  cout <<"Option 3 :\tAdaptive Sports Sports Plus(18-way,electric)incl.memory package  : price : 302,000"<< endl;


  cout << "Choose your Option :";
  cin >> select4;

  switch (select4)
    {
    case 0:
      fprintf (fp,"\nSeat : Sports seats(two-way electric)                                   : price 0");
      break;
    case 1:
      moneyExpansion += 167000;
      fprintf (fp,"\nSeat : Sports seats Plus(2-way electric)                                : price : 167,000");
      break;
    case 2:
      moneyExpansion += 183000;
      fprintf (fp,"\nSeat : Full electric Sports seats (14-way,electric)incl.memory package  : price : 183,000");
      break;
    case 3:
      moneyExpansion += 302000;
      fprintf (fp,"\nSeat : Adaptive Sports Sports Plus(18-way,electric)incl.memory package  : price : 302,000");
      break;
    default:
      cout << "You choose wrong option." << endl;
      break;
    
    
    }
fclose (fp);
cout << "\nYour selection has been added.\n" << endl;
}





void
modelCayenne::selectExteriorColor ()
{

  FILE *fp;
  fp = fopen ("customer_Choose.txt", "a");

  fprintf(fp,"\nModel : Cayenne");

  cout << "Option 0  :\t White                  : price :  0" << endl;
  cout << "Option 1  :\t Black                  : price :  0" << endl;
  cout << "Option 2  :\t Guards Red             : price :  0" << endl;
  cout << "Option 3  :\t Racing Yellow          : price :  0" << endl;

  cout << "Option 4  :\t Jet Black Metallic     : price :  79,000" << endl;
  cout << "Option 5  :\t Gentian Blue Metallic  : price :  79,000" << endl;
  cout << "Option 6  :\t GT Silver Metallic     : price :  79,000" << endl;
  cout << "Option 7  :\t Agate Grey Metallic    : price :  79,000" << endl;

  cout << "Option 8  :\t Ruby Star Neo          : price :  207,000" << endl;
  cout << "Option 9  :\t Carmine Red            : price :  207,000" << endl;
  cout << "Option 10 :\t Shark Blue             : price :  207,000" << endl;
  cout << "Option 11 :\t Arctic Grey            : price :  207,000" << endl;
  cout << "Option 12 :\t Crayon                 : price :  207,000 " << endl;
  cout << "Option 13 :\t Ice Grey Metallic      : price :  207,000" << endl;

  cout << "****************************************************" << endl;

  cout << "Choose your Option :";
  cin >> select1;

  switch (select1)
    {
    case 0:
      fprintf (fp, "\nColor :  White                  : price :  0");
      moneyExpansion = 0;
      break;
    case 1:
      fprintf (fp, "\nColor : Black                  : price :  0");
      moneyExpansion = 0;
      break;
    case 2:
      fprintf (fp, "\nColor : Guards Red             : price :  0");
      moneyExpansion = 0;
      break;
    case 3:
      fprintf (fp, "\nColor : Racing Yellow          : price :  0");
      moneyExpansion = 0;
      break;
    case 4:
      fprintf (fp, "\nColor : Jet Black Metallic     : price :  79,000");
      moneyExpansion = 79000;
      break;
    case 5:
      fprintf (fp, "\nColor : Gentian Blue Metallic  : price :  79,000");
      moneyExpansion = 79000;
      break;
    case 6:
      fprintf (fp, "\nColor : GT Silver Metallic     : price :  79,000");
      moneyExpansion = 79000;
      break;
    case 7:
      fprintf (fp, "\nColor : Agate Grey Metallic    : price :  79,000");
      moneyExpansion = 79000;
      break;
    case 8:
      fprintf (fp, "\nColor : Ruby Star Neo          : price :  207,000");
      moneyExpansion = 207000;
      break;
    case 9:
      fprintf (fp, "\nColor : Carmine Red            : price :  207,000");
      moneyExpansion = 207000;
      break;
    case 10:
      fprintf (fp, "\nColor : Shark Blue             : price :  207,000");
      moneyExpansion = 207000;
      break;
    case 11:
      fprintf (fp, "\nColor : Arctic Grey            : price :  207,000");
      moneyExpansion = 207000;
      break;
    case 12:
      fprintf (fp, "\nColor : Crayon                 : price :  207,000");
      moneyExpansion = 207000;
      break;
    case 13:
      fprintf (fp, "\nColor : Ice Grey Metallic      : price :  207,000");
      moneyExpansion = 207000;
      break;
    default:
      cout << "You choose wrong option." << endl;
      moneyExpansion = 0;
      break;
    }

  fclose (fp);
  cout << "\nYour selection has been added.\n" << endl;
}

void
modelCayenne::selectWheels ()
{

  FILE *fp;
  fp = fopen ("customer_Choose.txt", "a");

  cout << "Option 0 :\t 19-icch Cayman S wheels         : price : 0 " << endl;
  cout << "Option 1 :\t 19-inch Boxster S wheels        : price : 164,000 " <<
    endl;
  cout << "Option 2 :\t 20-inch Carrera S wheels        : price : 216,000 " <<
    endl;
  cout << "Option 3 :\t 20-inch Carrera Classic wheels  : price : 268,000 " <<
    endl;
  cout << "Option 4 :\t 20-inch Carrera Sport wheels    : price : 282,000 " <<
    endl;
  cout << "Option 5 :\t 20-inch 911 Turbo wheels        : price : 363,000 " <<
    endl;


  cout << "Choose your Option :";
  cin >> select2;

  switch (select2)
    {
    case 0:
      fprintf (fp, "\nWheels : 19-icch Cayman S wheels         : price : 0");
      break;
    case 1:
      fprintf (fp,"\nWheels : 19-inch Boxster S wheels        : price : 164,000");
      moneyExpansion += 164000;
      break;
    case 2:
      fprintf (fp,"\nWheels : 20-inch Carrera S wheels        : price : 216,000");
      moneyExpansion += 216000;
      break;
    case 3:
      fprintf (fp,"\nWheels : 20-inch Carrera Classic wheels  : price : 268,000");
      moneyExpansion += 268000;
      break;
    case 4:
      fprintf (fp,
	       "\nWheels : 20-inch Carrera Sport wheels    : price : 282,000");
      moneyExpansion += 282000;
      break;
    case 5:
      fprintf (fp,
	       "\nWheels : 20-inch 911 Turbo wheels        : price : 363,000");
      moneyExpansion += 363000;
      break;
    default:
      cout << "You choose wrong option." << endl;
      break;

      
    }

  fclose (fp);
  cout << "\nYour selection has been added.\n" << endl;
}

void
modelCayenne::selectInteriorColor ()
{
    
  FILE *fp;
  fp = fopen ("customer_Choose.txt", "a");
    
  cout <<
    "Option 0 :\tStandard Interior/Race-Tex in Black                                                 : price :0 "
    << endl;
  cout <<
    "Option 1 :\tStandard Interior/Race-Tex in Agate Grey                                            : price :0 "
    << endl;
  cout <<
    "Option 2 :\tInterior in Black                                                                   : price : 0"
    << endl;
  cout <<
    "Option 3 :\tInterior in Agate Grey                                                              : price : 0"
    << endl;

  cout <<
    "Option 4 :\tLeather package Black                                                               : price : 131,000"
    << endl;
  cout <<
    "Option 5 :\tLeather package Agate Grey                                                          : price : 131,000"
    << endl;

  cout <<
    "Option 6 :\tLeather package Black-Bordeaux Red                                                  : price : 147,000"
    << endl;
  cout <<
    "Option 7 :\tLeather package Black-Crayou                                                        : price : 147,000"
    << endl;

  cout <<
    "Option 8 :\tLeather interior in Black                                                           : price : 281,000"
    << endl;
  cout <<
    "Option 9 :\tLeather interior in Agate Grey                                                      : price : 281,000"
    << endl;

  cout <<
    "Option 10:\tLeather interior in special colour Graphhite Blue                                    : price : 314,000"
    << endl;
  cout <<
    "Option 11:\tLeather interior in special colour Bordeaux Red                                      : price : 314,000"
    << endl;
  cout <<
    "Option 12:\tTwo-tone Leather interior in two-tone combination Black-Bourdeaux Red                : price : 314,000"
    << endl;
  cout <<
    "Option 13:\tTwo-tone Leather interior in two-tone combination Black-Crayor                       : price : 314,000"
    << endl;

  cout <<
    "Option 14:\tLeather interior in natural leather Espresso                                         : price : 386,000"
    << endl;
  cout <<
    "Option 15:\tLeather interior package in natural leather,two-tone combination in Espresso-Cognac  : price : 419,000"
    << endl;

  cout << "Choose your Option :";
  cin >> select3;

  switch (select3)
    {
    case 0:
        fprintf (fp,"\nStandard Interior/Race-Tex in Black                                                 : price :0");
	       break;
    case 1:
        fprintf (fp,"\nStandard Interior/Race-Tex in Agate Grey                                            : price :0");
        break;
    case 2:
        fprintf (fp,"\nInterior in Black                                                                   : price : 0");
        break;
    case 3:
        fprintf (fp,"\nInterior in Agate Grey                                                              : price : 0");
        break;
    case 4:
        moneyExpansion += 131000;
        fprintf (fp,"\nLeather package Black                                                               : price : 131,000");
	    break;
    case 5:
        moneyExpansion += 131000;
        fprintf (fp,"\nLeather package Agate Grey                                                          : price : 131,000");
	    break;
    case 6:
        moneyExpansion += 147000;
        fprintf (fp,"\nLeather package Black-Bordeaux Red                                                  : price : 147,000");
	    break;
    case 7:
        moneyExpansion += 147000;
        fprintf (fp,"\nLeather package Black-Crayou                                                        : price : 147,000");
	    break;
    case 8:
        moneyExpansion += 281000;
        fprintf (fp,"\nLeather interior in Black                                                           : price : 281,000");
	    break;
    case 9:
        moneyExpansion += 281000;
        fprintf (fp,"\nLeather interior in Agate Grey                                                      : price : 281,000");
	    break;
	case 10:
	    moneyExpansion += 314000;
        fprintf (fp,"\nLeather interior in special colour Graphhite Blue                                    : price : 314,000");
	    break;
    case 11:
        moneyExpansion += 314000;
        fprintf (fp,"\nLeather interior in special colour Bordeaux Red                                      : price : 314,000");
	    break;
    case 12:
        moneyExpansion += 314000;
        fprintf (fp,"\nTwo-tone Leather interior in two-tone combination Black-Bourdeaux Red                : price : 314,000");
	    break;
    case 13:
        moneyExpansion += 314000;
        fprintf (fp,"\nTwo-tone Leather interior in two-tone combination Black-Crayor                       : price : 314,000");
	    break;
    case 14:
        moneyExpansion += 386000;
        fprintf (fp,"\nLeather interior in natural leather Espresso                                         : price : 386,000");
        break;
    case 15:
        moneyExpansion += 419000;
        fprintf (fp,"\nLeather interior package in natural leather,two-tone combination in Espresso-Cognac  : price : 419,000");
        break;
    default:
        cout << "You choose wrong option." << endl;
        break;
        
    }
    fclose (fp);
    cout << "\nYour selection has been added.\n" << endl;
}

void
modelCayenne::selectseats ()
{

  FILE *fp;
  fp = fopen ("customer_Choose.txt", "a");

  cout <<"Option 0 :\tSports seats(two-way electric)                                   : price : 0 "<< endl;
  cout <<"Option 1 :\tSports seats Plus(2-way electric)                        : price : 167,000"<< endl;
  cout <<"Option 2 :\tFull electric Sports seats (14-way,electric)incl.memory package  : price : 183,000"<< endl;
  cout <<"Option 3 :\tAdaptive Sports Sports Plus(18-way,electric)incl.memory package    : price : 302,000"<< endl;


  cout << "Choose your Option :";
  cin >> select4;

  switch (select4)
    {
    case 0:
      fprintf (fp,"\nSeat : Sports seats(two-way electric)                                   : price 0");
      break;
    case 1:
      moneyExpansion += 167000;
      fprintf (fp,"\nSeat : Sports seats Plus(2-way electric)                                : price : 167,000");
      break;
    case 2:
      moneyExpansion += 183000;
      fprintf (fp,"\nSeat : Full electric Sports seats (14-way,electric)incl.memory package  : price : 183,000");
      break;
    case 3:
      moneyExpansion += 302000;
      fprintf (fp,"\nSeat : Adaptive Sports Sports Plus(18-way,electric)incl.memory package  : price : 302,000");
      break;
    default:
      cout << "You choose wrong option." << endl;
      break;
    
    
    }
fclose (fp);
cout << "\nYour selection has been added.\n" << endl;
}


int
main ()
{
  string Model;
  string Cont = "yes";

  model718 M718;
  model911 M911;
  modelTaycan MTaycan;
  modelPanamera MPanamera;
  modelMacan MMacan;
  modelCayenne MCayenne;


  while (Cont == "yes")
    {
      cout << "Porsche Car Configurator" << endl;
      cout << "| 718 | 911 | Taycan | Panamera | Macan | Cayenne |" << endl;
      cout << "Choose your model :";
      cin >> Model;

      if (Model == "718")
	{
	  M718.selectExteriorColor ();
	  M718.selectWheels ();
	  M718.selectInteriorColor ();
	  M718.selectseats ();
	  
	  cout << "Total price is :" << M718.showSelection () << endl;
	}
      else if (Model == "911")
	{
	  M911.selectExteriorColor ();
	  M911.selectWheels ();
	  M911.selectInteriorColor ();
	  M911.selectseats ();
	  
	  cout << "Total price is :" << M911.showSelection () << endl;
	}
      else if (Model == "Taycan")
	{
	  MTaycan.selectExteriorColor ();
	  MTaycan.selectWheels ();
	  MTaycan.selectInteriorColor ();
	  MTaycan.selectseats ();
	  
	  cout << "Total price is :" << MTaycan.showSelection () << endl;
	}
      else if (Model == "Panamera")
	{
	  MPanamera.selectExteriorColor ();
	  MPanamera.selectWheels ();
	  MPanamera.selectInteriorColor ();
	  MPanamera.selectseats ();
	  
	  cout << "Total price is :" << MPanamera.showSelection () << endl;
	}
      else if (Model == "Macan")
	{
	  MMacan.selectExteriorColor ();
	  MMacan.selectWheels ();
	  MMacan.selectInteriorColor ();
	  MMacan.selectseats ();
	  
	  cout << "Total price is :" << MMacan.showSelection () << endl;
	}
      else if (Model == "Cayenne")
	{
	  MCayenne.selectExteriorColor ();
	  MCayenne.selectWheels ();
	  MCayenne.selectInteriorColor ();
	  MCayenne.selectseats ();
	  
	  cout << "Total price is :" << MCayenne.showSelection () << endl;
	}
      else
	{
	  cout << "We don't have this mode sorry;" << endl;
	}

      cout << "You want to continue(yes or no) :" << endl;
      cin >> Cont;
    }

};
