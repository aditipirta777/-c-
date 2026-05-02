// file is the bunch of bytes stored under a specific name on a storage device (text.txt)
/*stream refers to the sequence of bytes 
every file is linked to a stream and each stream is associated with particular class 
types of files 
1 text file == it is a file that stores information in ASCII characters in text file each line of text terminated by a special character known as EOL(end of line)
or delimeter character .. when the end of line character is read or written certain internal translation take place 

2 binary file == it is the file that contains information in same format as it is held in memory .. in binary files no delimeters used for a line and no translation occur 
binary files are faster and easier for program to read and write .. by default the file considered in c++ is text file 
                             ios
                           /     \
                        istream  ostream
                          /    \   /    \
                               iostream
                        ifstream   |    ofstream
                           \       |       /
                                 fstream



this stream class used to write on file == of stream
used to read from file = if stream
being a input file stream class it provides input operations for file it inherits the function get () , getline (),read() and function supporting random access seeek g() , tell g () 
grom i stream classs define inside the header file iostream.h 


of stream = is the output file stream it provides the output operations it inherit the function put() write() along with function supporting the random access that is seek p () and tell p()
from o stream class which is defined inside the header file iostream.h 


fsream class = is an input and output filestream it provides both input and output operations it inherits all the functions from istream and ostream class define inside the 
header file iostream.h 
in c++ u open a file you must first optain a stream so there are 3 stream 
 1 create an input stream ==to create input stream you must declare----- 
 syntax 
 ifstream fin; creating input stream
 ofstream fout;// creating output stream
 ffstream fio;// creating both input and ooutput stream

 ///OPENING FILE USING CONSTRUCTOR ////
as the constructor of class initialise an object of its class when it is being created in the same way the constructor of stream classes are used to initialise filestream object
with the file name pass to them 
ifstrean fin(""myfia",ios::/n)
this statement creates an object fin        after creating the if stream object the file name my file is opened and a attached to the input stream now the data being read 
from myfile has been chanalised through input stream object to read from this file this stream object will be used using get from operator 
char ch ;
fin ch ;//read chzracter from file 

float amt ;
fin>>amt;

similarly when  you want to program to write a file that is open and output file this will be accomplised by 1 creating ofstream object to manage the output stream 
// associatinbg that object with aprticular file
ifstream fin("myFile",ios::is)
ofstream fout("myFile",ios::out)
in




















*/