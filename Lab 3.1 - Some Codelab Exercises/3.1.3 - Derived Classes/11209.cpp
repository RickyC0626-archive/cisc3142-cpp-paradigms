/**
 * Assume the existence of a `Building` class.
 * 
 * Define a derived class, `ApartmentBuilding` that contains four data
 * members: an integer named `numFloors`, an integer named `unitsPerFloor`,
 * a boolean named `hasElevator`, and a boolean named `hasCentralAir`. There
 * is a constructor containing parameters for the initialization of the
 * above variables (in the same order as they appear above). There are two
 * functions: the first, `getTotalUnits`, accepts no parameters and returns
 * the total number of units in the building; the second, `isLuxuryBuilding`
 * accepts no parameters and returns true if the building has central air,
 * and elevator and 2 or less units per floor.
 */

class ApartmentBuilding : Building
{
	private:
		int numFloors;
		int unitsPerFloor;
		bool hasElevator;
		bool hasCentralAir;
	public:
		ApartmentBuilding(int, int, bool, bool);
		int getTotalUnits();
		bool isLuxuryBuilding();
};

ApartmentBuilding::ApartmentBuilding(int nf, int upf, bool he, bool hca)
{
	numFloors = nf;
	unitsPerFloor = upf;
	hasElevator = he;
	hasCentralAir = hca;
}

int ApartmentBuilding::getTotalUnits()
{
	int totalUnits = 0;
	for(int i = 1; i <= numFloors; i++)
	{
		totalUnits += unitsPerFloor;	
	}
	return totalUnits;
}

bool ApartmentBuilding::isLuxuryBuilding()
{
	return hasCentralAir && hasElevator && unitsPerFloor <= 2;	
}