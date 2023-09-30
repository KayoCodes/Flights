# Flights
The project is to load data through a CSV file and write C program that will conduct a variety of queries on that data.
The dataset (attached) is a modified CSV file on all International flight departing from US Airports between January and June 2020 reported by the US Department of Transportation (https://data.transportation.gov/Aviation/International_Report_Passengers/xgub-n9bw). Each record holds a route (origin to destination) operated by an airline.
You May Search by Route, Origin Airport, Destination Airport, Or Airline


All data is loaded into an array of RouteRecord’s which will they be queried in main() 

SAMPLE OUTPUT
Opening data.csv...
Unique routes operated by airlines: : 2763


######### Airline Route Records Database MENU #########
1. Search by Route
2. Search by Origin Airport
3. Search by Destination Airport
4. Search by Airline
5. Quit
Enter your selection: 1
Enter origin: LAX
Enter destination: LHR

Searching by route...
BA (LAX-LHR) EB (LAX-LHR) E9 (LAX-LHR) VS (LAX-LHR) UA (LAX-LHR) NZ (LAX-LHR) AA (LA                                                     X-LHR)
7 matches were found.

Statistics
Total Passengers:                 323437
Total Passengers in Month 1:      127446
Total Passengers in Month 2:      111471
Total Passengers in Month 3:       72703
Total Passengers in Month 4:        4734
Total Passengers in Month 5:        3304
Total Passengers in Month 6:        3779

Average Passengers per Month:      53906


######### Airline Route Records Database MENU #########
1. Search by Route
2. Search by Origin Airport
3. Search by Destination Airport
4. Search by Airline
5. Quit
Enter your selection: 2
Enter origin: SFO
Search by origin...
CX (SFO-HKG) PR (SFO-CEB) CI (SFO-TPE) AS (SFO-PVR) AC (SFO-YYZ) LH (SFO-MUC) BA (SFO-LHR) NH (SFO-NRT) BR (SFO-TPE) PR (SFO-MNL) AC (SFO-YVR) OZ (SFO-ICN) KE (SFO-ICN) UA (SFO-FRA) UA (SFO-SYD) UA (SFO-NRT) AI (SFO-DEL) LF (SFO-FAB) UA (SFO-DEL) CZ (SFO-CAN) CZ (SFO-KMG) CZ (SFO-CGO) CZ (SFO-SJW) AI (SFO-BOM) CZ (SFO-SHE) CZ (SFO-TAO) UA (SFO-SJD) AS (SFO-SJD) UA (SFO-CUN) UA (SFO-PVR) MU (SFO-PVG) CA (SFO-NKG) UA (SFO-MEL) UA (SFO-ICN) QK (SFO-YVR) JL (SFO-HND) AM (SFO-GDL) BA (SFO-LGW) EB (SFO-BEG) OO (SFO-YVR) EB (SFO-CRK) FJ (SFO-NAN) QK (SFO-YEG) LY (SFO-TLV) IB (SFO-BCN) DY (SFO-BCN) QK (SFO-YYC) CA (SFO-PEK) DY (SFO-CDG) BF (SFO-PPT) UA (SFO-KIX) BF (SFO-ORY) TP (SFO-LIS) QF (SFO-BNE) QF (SFO-MEL) UA (SFO-CDG) OO (SFO-YYC) UA (SFO-YYZ) UA (SFO-PPT) SK (SFO-CPH) UA (SFO-HND) LX (SFO-ZRH) UA (SFO-TPE) DI (SFO-LGW) AC (SFO-YUL) LH (SFO-FRA) UA (SFO-MUC) TA (SFO-SAL) QF (SFO-SYD) EI (SFO-DUB) UA (SFO-MEX) UA (SFO-TLV) AF (SFO-CDG) AM (SFO-MEX) CM (SFO-PTY) UA (SFO-SIN) VS (SFO-LHR) KL (SFO-AMS) SQ (SFO-SIN) UA (SFO-LHR) UA (SFO-AKL) TK (SFO-IST) NZ (SFO-AKL) EK (SFO-DXB) UA (SFO-YVR) AN (SFO-YYC) UA (SFO-BOM) CZ (SFO-WUH) MU (SFO-TAO) UA (SFO-CTU) UA (SFO-BCN) UA (SFO-PEK) UA (SFO-PVG) UA (SFO-HKG) SQ (SFO-HKG) CX (SFO-NRT) FI (SFO-KEF) CX (SFO-KIX) 4O (SFO-GDL)
99 matches were found.

Statistics
Total Passengers:                2560583
Total Passengers in Month 1:     1183469
Total Passengers in Month 2:      840282
Total Passengers in Month 3:      433704
Total Passengers in Month 4:       44483
Total Passengers in Month 5:       17104
Total Passengers in Month 6:       41541

Average Passengers per Month:     426763


######### Airline Route Records Database MENU #########
1. Search by Route
2. Search by Origin Airport
3. Search by Destination Airport
4. Search by Airline
5. Quit
Enter your selection: 3
Enter destination: KIX
Searching by destination...
JL (LAX-KIX) UA (SFO-KIX) UA (GUM-KIX) DL (HNL-KIX) JL (HNL-KIX) HA (HNL-KIX) D7 (HNL-KIX) CX (ORD-KIX) CX (SFO-KIX)
9 matches were found.

Statistics
Total Passengers:                 197847
Total Passengers in Month 1:       87720
Total Passengers in Month 2:       77050
Total Passengers in Month 3:       32397
Total Passengers in Month 4:         497
Total Passengers in Month 5:           0
Total Passengers in Month 6:         183

Average Passengers per Month:      32974


######### Airline Route Records Database MENU #########
1. Search by Route
2. Search by Origin Airport
3. Search by Destination Airport
4. Search by Airline
5. Quit
Enter your selection: 4
Enter airline: LO
Search by airline...
LO (ORD-WAW) LO (JFK-WAW) LO (IAD-WAW) LO (JFK-KIV) LO (JFK-BUD) LO (EWR-WAW) LO (LAX-WAW) LO (MIA-WAW) LO (ORD-KRK)
9 matches were found.

Statistics
Total Passengers:                 111330
Total Passengers in Month 1:       48891
Total Passengers in Month 2:       36994
Total Passengers in Month 3:       20439
Total Passengers in Month 4:         787
Total Passengers in Month 5:        2450
Total Passengers in Month 6:        1769

Average Passengers per Month:      18555


######### Airline Route Records Database MENU #########
1. Search by Route
2. Search by Origin Airport
3. Search by Destination Airport
4. Search by Airline
5. Quit
Enter your selection: 10
Invalid choice.


######### Airline Route Records Database MENU #########
1. Search by Route
2. Search by Origin Airport
3. Search by Destination Airport
4. Search by Airline
5. Quit
Enter your selection: 5
Good-bye!

Functionality
[x] - main.c
	[x] - Processes command-line argument for input file name
	[x] - Open files and checks for success in opening
	[x] - Sets up the array of RouteRecords
	[x] - Processes user input, handling bad input
	[x] - asks user for search keys and calls appropriate functions for desired functionality
	
[x] - route-records.h
	[x] - header guard
	[x] - enum and struct
	[x] - function prototypes
	
[x] - createRecords()
	[x] - Traverses the CSV file and counts the number of lines, excluding header row
	[x] - Rewinds the file pointer
	[x] - Dynamically allocates memory for the array of RouteRecords based on the number of lines counted
	[x] - Initializes the passenger data array within each RouteRecord struct object
	[x] - Returns the pointer to the array
  	
[x] - fillRecords()
	[x] - Traverses the CSV file skipping the header row
	[x] - Calls findAirlineRoute() to see if route operated by airline already exists in the array
	[x] - If found, updates an existing route operated by an airline in the array with the new month's passenger data
	[x] - If not found, adds the new route operated by an airline into the array
	[x] - Returns the unique number of routes as operated by different airlines. This will be the number of items in the array that are actually used. 

[x] - findAirlineRoute()
	[x] - RECURSIVE function set up to find the airline route by checking if there a struct object that matches the origin, destination, and airline
	[x] - Returns the index of the array in which it was found
	[x] - Returns -1 if not found

[x] - searchRecords()
	[x] - Traverses the array
	[x] - Determines the search type and compares key(s) against appropriate data members
	[x] - Prints all matching information AirlineCode (Origin-Destination)
	[x] - Calculates and prints out total passengers, total passengers per month, and average


