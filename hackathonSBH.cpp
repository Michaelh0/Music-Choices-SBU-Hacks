#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <cmath>

void outputSong(std::string arrays[], int sizes)
{
    for(int i = 0; i < sizes;i++)
        std::cout << arrays[i] << "  ";
}

int checkInput(std::string arrays[], int sizes)
{
    std::cout << "\nWhich of the " << sizes << " topics would you like to choose?\n";
    int input;
    std::cin >> input;
    while(input < 1 || input > sizes)
    {
        std::cout << "The topic you choose was not part of the " << sizes << " topics.\n";
        std::cout << "Here are the topics again.\n";
        outputSong(arrays,sizes);
        std::cout << "Please choose one of " << sizes << " topics.\n";
        std::cin >> input;
    }
    return input;
}

int main()
{

    const int MIN_VALUE = 1;
    const int MAX_VALUE = 25;
    int topicChoice;

    const int sizeTopics = 3;
    const int sizeHoliday = 3;
    const int sizeMood = 5;
    const int sizeSinger = 7;

    std::string topics[]= { "Holiday(1)", "Genre (2)", "Mood (3)"} ;

    std::string holiday[] = { "Christmas (1)", "Halloween (2)" , "4th of July (3)"};
    std::string mood[] = { "joy (1)", "anger (2)", "worry (3)", "anxiety (4)","sadness(5)"};
    std::string singer[] = { "Hip hop (1)", "jazz (2)", "pop (3)", "rock (4)", "rhythm and blues (5)", "soul music (6)", "alternative (7)"};

//https://www.bbc.com/culture/article/20191007-the-greatest-hip-hop-songs-of-all-time
    std::string hip_hop[] = {"Alright, Kendrick Lamar","Rosa Parks, OutKast","All Of The Lights, Kanye West ft. Rhianna, Kid Cudi",
"Grindin’, Clipse ",
"Lose Yourself, Eminem ",
"Doo Wop (That Thing), Lauryn Hill ",
"International Players Anthem, UGK ft. OutKast ",
"U.N.I.T.Y., Queen Latifah ",
"Fuck Tha Police, NWA ",
"It Was A Good Day, Ice Cube ",
"B.O.B., OutKast ",
"They Reminisce Over You (T.R.O.Y.), Pete Rock & C.L. Smooth ",
"Rapper’s Delight, Sugarhill Gang ",
"Paid In Full, Eric B & Rakim ",
"Runaway, Kanye West ft. Pusha T ",
"Electric Relaxation, A Tribe Called Quest (1993)",
"Dear Mama, Tupac Shakur (1995)",
"N.Y. State Of Mind, Nas (1994)",
"Passin’ Me By, The Pharcyde (1992)",
"93 ’Til Infinity, Souls of Mischief (1993)",
"C.R.E.A.M., Wu-Tang Clan (1993)",
"Nuthin’ But A ‘G’ Thang, Dr. Dre ft. Snoop Doggy Dogg",
"The Message, Grandmaster Flash & The Furious Five",
"Shook Ones (Part II), Mobb Deep",
"Fight The Power, Public Enemy","Juicy, Notorious B.I.G."};
//https://www.udiscovermusic.com/stories/best-jazz-songs/
    std::string jazz[] ={"Ella Fitzgerald & Louis Armstrong ,  Summertime",
"Dizzy Gillespie, A Night in Tunisia",
"Coleman Hawkins, Body and Soul",
"Cannonball Adderley Quintet , Mercy, Mercy, Mercy",
"Miles Davis, Blue in Green",
"Dinah Washington , On The Sunny Side of the Street",
"Art Blakey & The Jazz Messengers,  Moanin\’",
"Bud Powell ,  Un Poco Loco",
"Benny Goodman , Sing, Sing, Sing (With a Swing)",
"Chet Baker ,  My Funny Valentine",
"Horace Silver,  Song For My Father",
"John Coltrane & Johnny Hartman, My One and Only Love",
"Charles Mingus ,  Goodbye Pork Pie Hat",
"Lee Morgan ,  The Sidewinder",
"Stan Getz & Joao Gilberto, The Girl From Ipanema",
"Thelonious Monk , Round Midnight",
"Dave Brubeck Quartet , Take Five",
"Louis Armstrong , What A Wonderful World",
"Billie Holiday ,  Strange Fruit",
"Count Basie and his Orchestra, One O’Clock Jump",
"Ella Fitzgerald , Mack the Knife",
"Charlie Parker , All The Things You Are",
"John Coltrane , Giant Steps",
"Miles Davis , So What",
"Duke Ellington , Take the A Train"};
//https://www.liveabout.com/top-pop-songs-of-all-time-3248395
    std::string pop[] = {"The Ronettes: 'Be My Baby'",
"Bee Gees: 'You Should Be Dancing'",
"Otis Redding: '(Sittin' On) The Dock of the Bay'",
"Audrey Hepburn: 'Moon River' ",
"Beach Boys: 'God Only Knows' ",
"Radiohead: 'Creep' ",
"Ben E. King: 'Stand by Me' ",
"Ray Charles: 'Georgia on My Mind' ",
"Aretha Franklin: 'Respect' ",
"The Archies: 'Sugar Sugar' ",
"The Monkees: 'I'm a Believer' ",
"The Police: 'Every Breath You Take' ",
"Barbra Streisand: 'The Way We Were' ",
"OutKast: 'Hey Ya!'",
"Woody Guthrie: 'This Land Is Your Land' ",
"Nirvana: 'Smells Like Teen Spirit' ",
"Amy Winehouse: 'Rehab' ",
"Elvis Presley: 'Heartbreak Hotel' ",
"Stevie Wonder: 'Superstition' ",
"Righteous Brothers: 'You've Lost That Lovin' Feelin'' ",
"Beyonce Featuring Jay-Z: 'Crazy in Love' ",
"Bill Haley and His Comets: 'Rock Around the Clock' ",
"Impressions: 'People Get Ready' ",
"Mariah Carey: 'Fantasy' ",
"Prince and the Revolution: 'When Doves Cry' (1984)"};

    std::string rock[0];
    std::string rhythm_and_blues[0];
    std::string soul_music[0];
    std::string alternative[0];

    //https://southfloridareporter.com/these-are-the-top-50-happiest-songs-ever-released/#:~:text=Queen%E2%80%99s%20%E2%80%98Don%E2%80%99t%20Stop%20Me%20Now%E2%80%99%2C%20%E2%80%98Stayin%E2%80%99%20Alive%E2%80%99%20by,likely%20to%20put%20you%20in%20a%20good%20mood.
    std::string joy[] = {"Mr Blue Sky,Elo",

"Don\’t Stop Me Now, Queen",
"Stayin\’ Alive ,Bee Gees",
"Dancing Queen,Abba",
"Livin\’ On a Prayer,Bon Jovi",
"Come on Eileen,Dexys Midnight Runners",
"You Can Call Me Al,Paul Simon",
"Walking on Sunshine,Katrina and the Waves",
"Just Can\’t Get Enough,Depeche Mode",
"Never Gonna Give You Up,Rick Astley",
"Wake Up Boo,The Boo Radleys",
"Girls Just Wanna Have Fun, Cyndi Lauper",
"You Make Me Feel (Mighty Real),Sylvester",
"Livin La Vida Loca,Ricky Martin",
"You\’re The One That I Want,John Travolta & Olivia Newton-John",
"Good Times,Chic",
"Crocodile Rock,Elton John",
"Flashdance What a Feeling,Irene Cara",
"December 1963 (Oh What a Night),Frankie Valli & The Four Seasons",
"That\’s The Way I Like It,KC and the Sunshine Band",
"Celebration,Kool and the Gang",
"1999,Prince",
"Finally,Ce Ce Peniston",
"You\’re The First The Last My Everything,Barry white",
"I Wanna Dance With Somebody (Who Loves Me),Whitney Houston"};

//https://pickuptheguitar.com/best-christmas-songs/
    std::string christmas[] = {"All I Want For Christmas Is You,Mariah Carey",
        "Last Christmas,Wham!",
        "Santa Claus Is Coming To Town,Bruce Springsteen",
        "Winter Wonderland,Bing Crosby",
        "Let It Snow! Let It Snow! Let It Snow!,Dean",
        "Jingle Bell Rock,Bobby Helms",
        "Frosty the Snowman,The Ronettes",
        "Oh Holy Night,HomeTown",
        "Do you hear What I hear,Orla Fallon",
        "O Come, All Ye Faithful,Pentatonix",
        "Santa Tell Me,Ariana Grande",
        "Carol Of the Bells,Pentatonix",
        "Christmas (Baby Please Come Home),Michael Buble",
        "White Christmas,Michael Buble",
        "Driving Home For Christmas,Chris Rea",
        "Santa Claus Is Coming To Town,Justin Beiber",
        "Merry Christmas Everyone,Shakin’ Stevens",
        "Christmas Tree,Lady Gaga",
        "The Christmas Shoes,Newsong",
        "Underneath the Tree,Kelly Clarkson",
        "Rockin’ Around the Christmas Tree,Brenda Lee",
        "Lonely This Christmas,Elvis Presley",
        "Everyday Is Christmas,Sia",
        "Someday at Christmas,Stevie Wonder",
        "Have Yourself a Merry Little Christmas,Sam Smith",
        "O Holy Night,Jackie Evancho"};

    int randomSong;
    unsigned seed = time(0);
    srand(seed);
    randomSong = rand() % (MAX_VALUE , MIN_VALUE + 1) + MIN_VALUE;


    outputSong(topics,sizeTopics);
//   for(int i = 0; i < sizeTopics;i++)
   //     std::cout << topics[i] << "  ";

    topicChoice = checkInput(topics,sizeTopics);

    /*while(topicChoice < 1 || topicChoice > sizeTopics)
    {
        std::cout << "The topic you choose was not part of the " << sizeTopics << " topics.\n";
        std::cout << "Here are the topics again.\n";
        outputSong(topics,sizeTopics);
        std::cout << "Please choose one of " << sizeTopics << " topics.\n";
        std::cin >> topicChoice;
    }
*/
    if (topicChoice == 1)
    {
        outputSong(holiday,sizeHoliday);

        topicChoice = checkInput(holiday,sizeHoliday);
        switch(topicChoice)
        {
            case 1: std::cout<< christmas[randomSong]; break;
            case 2: break;
            case 3: break;

        };

    }
    else if (topicChoice == 3)
    {
        outputSong(mood,sizeMood);

        topicChoice = checkInput(mood,sizeMood);

        //std::cout << "Here is a cool song from " << mood[topicChoice] << ": \n";

        switch(topicChoice)
        {
            case 1: std::cout<< joy[randomSong]; break;
            case 2: break;
            case 3: break;
            case 4: break;
            case 5: break;
        };

    }
    else if (topicChoice == 2)
    {
        outputSong(singer,sizeSinger);

        topicChoice = checkInput(singer,sizeSinger);
        std::cout << "Here is a cool song from " << singer[topicChoice] << ": \n";

        switch(topicChoice)
        {
            case 1: std::cout<< hip_hop[randomSong]; break;
            case 2: std::cout<< jazz[randomSong];break;
            case 3: std::cout<< pop[randomSong];break;
            case 4: break;
            case 5: break;
            case 6: break;
            case 7: break;

        };
    }

    return 0;

}
