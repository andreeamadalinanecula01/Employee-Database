/*

Book Store Employee Database
Object-oriented C++ for a book store. Involves building an employee database, book database, etc.
Define
- class Book with different fields like title, author, cost, year, publisher
- class Employee with different fields like name, job title, time employed, salary
- class Customer with different fields like name, wallet amount
Add new employee, customers, books to the database and insert details about them
- employees - name, job title, salaries
- customers - name, wallet amount
- book - title, author
If a customer wants to make a purchase, print purchase amount, purchased book title and author.
Print Transaction Details - what book a customer wants to purchase, their wallet amount,
purchase amount and which employee assisted in the process of purchase.

*/


#include <iostream>
#include <string>


// Define class Book with different fields like title, author, cost, year, publisher
class Book {
  private:
    std::string title;
    std::string author;
    double cost;
    int year;
    std::string publisher;

  public:
    /* Setter Methods*/
    void setTitle(std::string t){
      title = t;
    }

    void setAuthor(std::string a){
      author = a;
    }

    void setCost(double c){
      cost = c;
    }

    void setYear(std::string y){
      year = y;
    }

    void setPublisher(std::string p){
      publisher = p;
    }

    /* Getter Methods */
    std::string getTitle(){
      return title;  
    }

    std::string getAuthor(){
      return author;
    }

    double getCost(){
      return cost;
    }

    std::string getYear(){
      return year;
    }

    std::string getPublisher(){
      return publisher;
    }
};


// Define class Employee with different fields like name, job title, time employed, salary
class Employee {
  private:
    std::string name;
    std::string jobTitle;
    std::string timeEmployedAtCompany;
    int salary;

  public:

   /* Setter Methods */
  void setName(std::string nm){
    name = nm;
  }

  void setJobTitle(std::string role){
    jobTitle = role;
  }

  void setTimeEmployedAtCompany(std::string time){
    timeEmployedAtCompany = time; // Value in years
  }

  void setSalary(int dollarAmount){
    salary = dollarAmount;
  }

  /* Getter Methods */
  std::string getName(){
    return name;
  }

  std::string getJobTitle(){
    return jobTitle;
  }

  std::string getTimeEmployedAtCompany(){
    return timeEmployedAtCompany; // Value in years
  }

  int getSalary(){
    return salary;
  }

};

// Define class Customer with different fields like name, wallet amount
class Customer {
  private:
    std::string name;
    int walletAmount;

  public:
  void setName(std::string nm){
    name = nm;
  }

  void setWalletAmount(int cash){
    walletAmount = cash;
  }

  /* Getter Methods */
  int getWalletAmoount(){
    return walletAmount;
  }

  std::string getName(){
    return name;
  }

  void makeTransaction(int purchaseAmount){
    std::cout << "This customer has $" << walletAmount<< " dollars in his wallet."<<std::endl;
    std::cout << "They want to make a purchase of $" << purchaseAmount << std::endl;
    
  }
};


int main() {

  // initialize an employee object type
  Employee newEmployee1;
  // set all employee fields - name, job title, time employed, salary
  newEmployee1.setName("Richard Sventhal");
  newEmployee1.setJobTitle("Supervisor II");
  newEmployee1.setTimeEmployedAtCompany("4 years 1 month");
  newEmployee1.setSalary(40000);

  // initialize another employee object type
  Employee newEmployee2;

  // set all employee fields - name, job title, time employed, salary
  newEmployee2.setName("Melissa Robinson");
  newEmployee2.setJobTitle("Cashier");
  newEmployee2.setTimeEmployedAtCompany("2 years 4 months");
  newEmployee2.setSalary(27000);

  Employee EmployeeArray[2];

  EmployeeArray[0] = newEmployee1;
  EmployeeArray[1] = newEmployee2;

  /* Print Employee Names - go through the list of employees and print names */
  for (int i=0; i<2;i++){
    std::cout << "Employee name is " << EmployeeArray[i].getName() << std::endl;
  }

  /* Print Employee Titles - go through the list of employees and print job titles */
  for (int i=0; i<2; i++){
    std::cout << "Employee works as a " << EmployeeArray[i].getJobTitle() << std::endl;
  }

  /* Print Employee Salaries - go through the list of employees and print their salary */
  for (int i=0; i<2;i++){
    std::cout << EmployeeArray[i].getName() << "'s salary is: " << EmployeeArray[i].getSalary() << std::endl;
  }

  std::cout << std::endl;

  /* Filter Cashiers from Array */


  /* Add New Customer to the Database*/
  Customer newCustomer;
  newCustomer.setName("Gloria Bakerson");
  newCustomer.setWalletAmount(237);

  /* Customer wants to Make a Purchase*/
  int purchaseAmount = 15;
  std::string purchaseBookTitle = "The Grapes of Wrath";
  std::string purchaseBookAuthor = "John Steinbeck";

  Book book1;
  book1.setTitle("The Grapes of Wrath");
  book1.setAuthor("John Steinbeck");

  /* Print Transaction Details */
  std::cout << "This customer would like to purchase " << purchaseBookTitle << " written by " << purchaseBookAuthor << std::endl;
  std::cout << "This customer has $" << newCustomer.getWalletAmoount() << " dollars in his wallet."<< std::endl;
  std::cout << "This would be a purchase of $" << purchaseAmount << std::endl;
  std::cout << EmployeeArray[1].getName() << " (Cashier) helps at the register to ring up the purchase." << std::endl;

  return 0;
}