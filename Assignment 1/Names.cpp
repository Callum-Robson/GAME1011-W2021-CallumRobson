#include "Names.h"

string Names::getStreamingNames(int i)
{
	return m_streamingNames[i];
}

string Names::getDeviceNames(int i)
{
	return m_deviceNames[i];
}

string Names::getCollegeNames(int i)
{
	return m_collegeNames[i];
}

string Names::getProgramNames(int i)
{
	return m_programNames[i];
}

string Names::getPersonNames(int i)
{
	return m_personNames[i];
}
const string Names::m_programNames[] = { "Nursing", "Graphic Design", "Game Programming"};
const string Names::m_streamingNames[] = { "Netflix", "Prime Video", "Disney+", "Crave" };
const string Names::m_deviceNames[] = { "PS4", "Xbox One", "Nintendo Switch", "PC" };
const string Names::m_collegeNames[] = { "George Brown", "Seneca", "Centennial" };
const string Names::m_personNames[] =
{
	"Abby", "Abe", "Ace", "Addie",
		"Abbott", "Alexis", "Ace", "Alice", "Aero", "Allie", "Aiden", "Alyssa", "Amber", "Albert", "Angel", "Alden",
		"Anna", "Alex", "Annie", "Alfie", "Ariel", "Alvin", "Ashley", "Amos", "Aspen", "Andy", "Athena", "Angus",
		"Autumn", "Apollo", "Ava", "Archie", "Avery", "Aries", "Baby", "Artie", "Bailey", "Ash", "Arthur", "Basil",
		"Austin", "Bean", "Axel", "Bella", "Belle", "Bandit", "Betsy", "Barkley", "Betty", "Barney", "Bianca", "Baron",
		"Birdie", "Baxter", "Biscuit", "Bear", "Blondie", "Beau", "Blossom", "Benji", "Bonnie", "Benny", "Brandy",
		"Bentley", "Brooklyn", "Billy", "Brownie", "Bingo", "Buffy", "Blake", "Callie", "Blaze", "Camilla",
		"Blue", "Candy", "Bo", "Carla", "Boomer", "Carly", "Brady", "Carmela", "Brody", "Casey", "Cassie", "Bruce",
		"Baron", "Chance", "Bruno", "Chanel", "Brutus", "Chloe", "Bubba", "Cinnamon", "Buck", "Cleo",
		"Buddy", "Coco", "Buster", "Cookie", "Butch", "Cricket", "Buzz", "Daisy", "Cain", "Dakota", "Captain", "Dana",
		"Carter", "Daphne", "Elaine", "Cash", "Darla", "Casper", "Darlene", "Champ", "Kramer", "Chucky", "Ross", "Delia",
		"Delilah", "Charlie", "Destiny", "Chase", "Diamond", "Chester", "Diva", "Chewy", "Dixie", "Chico", "Dolly", "Chief",
		"Duchess", "Chip", "Eden", "CJ", "Edie", "Clifford", "Ella", "Clyde", "Ellie", "Elsa", "Cody", "Emma",
		"Colby", "Emmy", "Cooper", "Eva", "Copper", "Faith", "Damien", "Fanny", "Dane", "Fern", "Dante", "Fiona",
		"Denver", "Foxy", "Dexter", "Gabby", "Diego", "Gemma", "Diesel", "Georgia", "Dodge", "Gia", "Drew", "Gidget",
		"Duke", "Gigi", "Dylan", "Ginger", "Eddie", "Goldie", "Eli", "Grace", "Elmer", "Gracie", "Emmett", "Greta",
		"Evan", "Gypsy", "Felix", "Hailey", "Finn", "Hannah", "Fisher", "Harley", "Flash", "Harper", "Frankie", "Hazel",
		"Freddy", "Heidi", "Fritz", "Hershey", "Gage", "Holly", "George", "Geoff", "Honey", "Gizmo", "Hope", "Jerry",
		"Goose", "Ibby", "Gordie", "Inez", "Griffin", "Isabella", "Gunner", "Ivy", "Gus", "Izzy", "Hank", "Jackie",
		"Jada", "Harvey", "Jade", "Hawkeye", "Jasmine", "Henry", "Jenna", "Hoss", "Jersey", "Huck", "Jessie", "Hunter",
		"Jill", "Iggy", "Josie", "Ivan", "Julia", "Jack", "Juliet", "Jackson", "Juno", "Jake", "Kali", "Jasper",
		"Kallie", "Jax", "Karma", "Jesse", "Kate", "Joey", "Katie", "Johnny", "Kayla", "Judge", "Kelsey", "Kane",
		"Khloe", "King", "Kiki", "Kobe", "Kira", "Koda", "Koko", "Lenny", "Kona", "Leo", "Lacy", "Leroy", "Lady", "Levi",
		"Layla", "Lewis", "Leia", "Logan", "Lena", "Loki", "Lexi", "Louie", "Libby", "Lucky", "Liberty", "Luke",
		"Lily", "Marley", "Lizzy", "Marty", "Lola", "Maverick", "London", "Max", "Maximus", "Lulu", "Mickey",
		"Luna", "Miles", "Mabel", "Milo", "Mackenzie", "Moe", "Macy", "Moose", "Maddie", "Morris", "Madison", "Murphy",
		"Maggie", "Ned", "Maisy", "Nelson", "Mandy", "Nero", "Nico", "Matilda", "Noah", "Mattie", "Norm", "Maya",
		"Oakley", "Mia", "Odie", "Mika", "Odin", "Mila", "Oliver", "Miley", "Ollie", "Millie", "Oreo", "Mimi",
		"Oscar", "Minnie", "Otis", "Missy", "Otto", "Misty", "Ozzy", "Mitzi", "Pablo", "Mocha", "Parker", "Molly",
		"Santiago", "Peanut", "Morgan", "Pepper", "Moxie", "Petey", "Muffin", "Porter", "Mya", "Prince", "Nala", "Quincy",
		"Nell", "Numan", "Radar", "Nellie", "Ralph", "Nikki", "Rambo", "Nina", "Ranger", "Noel", "Rascal", "Nola",
		"Rebel", "Nori", "Reese", "Olive", "Reggie", "Olivia", "Remy", "Rex", "Paisley", "Ricky", "Pandora", "Rider",
		"Paris", "Riley", "Peaches", "Ringo", "Rocco", "Pearl", "Rockwell", "Pebbles", "Rocky", "Penelope",
		"Penny", "Romeo", "Rosco", "Phoebe", "Rudy", "Piper", "Phoebe", "Ursula", "Rufus", "Pippa", "Rusty", "Pixie",
		"Sam", "Polly", "Sammy", "Poppy", "Samson", "Precious", "Sarge", "Larry", "Costanza", "Cosmo", "Princess", "Sawyer",
		"Priscilla", "Scooby", "Raven", "Scooter", "Scout", "Scrappy", "Rose", "Shadow", "Rosie", "Shamus",
		"Roxy", "Shiloh", "Ruby", "Simba", "Sadie", "Simon", "Sage", "Smoky", "Sally", "Snoopy", "Sparky", "Samantha",
		"Spencer", "Sammie", "Spike", "Sandy", "Spot", "Sasha", "Stanley", "Sassy", "Stewie", "Savannah",
		"Storm", "Scarlet", "Taco", "Tank", "Sheba", "Taz", "Shelby", "Teddy", "Tesla", "Sierra", "Theo", "Sissy",
		"Thor", "Sky", "Titus", "Smokey", "TJ", "Snickers", "Toby", "Sophia", "Trapper", "Sophie", "Tripp", "Star",
		"Tucker", "Stella", "Tyler", "Sugar", "Tyson", "Suki", "Vince", "Summer", "Vinnie", "Sunny", "Wally", "Sweetie",
		"Walter", "Sydney", "Watson", "Tasha", "Willy", "Tessa", "Winston", "Tilly", "Woody", "Tootsie", "Wrigley", "Trixie",
		"Wyatt", "Violet", "Yogi", "Willow", "Yoshi", "Winnie", "Yukon", "Xena", "Zane", "Zelda", "Zeus", "Zoe", "Ziggy", "Velma"
};