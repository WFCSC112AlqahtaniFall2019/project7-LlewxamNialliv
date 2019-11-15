//data from Kaggle, This dataset contains emission data of Green House Gases (in tonnes) of different countries from year 1750 - 2019.
//https://www.kaggle.com/srikantsahu/co2-and-ghg-emission-data

#include <ostream>
#include "Data.h"
#include <string>
using namespace std;

Data::Data() { //default constructor
    //assign variables with default data
    Country = "No Name";
    GHG_Emission_tonnes = -1;
    year = -1;
    ZeroEmission = true;
}

Data::Data(string C, int GHG_E, int y, bool ZE) {
    //assign data to the variables accordingly
    Country = C;
    GHG_Emission_tonnes = GHG_E;
    year = y;
    ZeroEmission = ZE;
}

bool Data::operator > (const Data &Country) {
    return GHG_Emission_tonnes > Country.GHG_Emission_tonnes;
}

bool Data::operator <= (const Data &Country) {
    return GHG_Emission_tonnes <= Country.GHG_Emission_tonnes;
}

ostream& operator << (ostream& os, const Data Country) { // output stream operator
    //print data
    os << Country.Country;
    os << " emitted " << Country.GHG_Emission_tonnes << "tonnes of Green House Gases in ";
    os << Country.year;
}