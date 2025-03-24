// One class can extend another class
class Base
{}
class Derived extends Base
{}
///////////////////////////////////////////////////////
//2 : One class can implement one interface
interface Demo
{}

class Hello implements Demo
{}

/////////////////////////////////////////////////////
//3 : One class can implement more than one interface   //replacement for concept of Multiple inheritance in java
interface Hello 
{}

interface Demo 
{}

class Marvellous implements Hello,Demo
{}
///////////////////////////////////////////////////////
//4 : One interface extends another interface

interface Demo
{}

interface Hello extends Demo    //Hello la demo kadna yenarya methods la define karnyachi jababdari nahi,
{}                              //karan to fakt extend kartoy implement nahi ,just carry forward karaycha gheun methods la

class Marvellous implements Hello
{}
//////////////////////////////////////////////////////
// 5 : One class can extend one class and implement one interface

class Demo
{}

interface Hello
{}

class Marvellous extends Demo implements Hello
{}
/////////////////////////////////////////////////////

