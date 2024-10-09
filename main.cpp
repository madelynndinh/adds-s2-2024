#include "DocumentManager.h"
#include <cassert>  // Required for assert

int main() {
    // Create DocumentManager instance
    DocumentManager libraryManager;

    // Add documents with name, ID, and license limit
    libraryManager.addDocument("Book1", 1, 2);  
    libraryManager.addDocument("Book2", 2, 1);  

    // Add patrons with IDs
    libraryManager.addPatron(1);
    libraryManager.addPatron(2);   

    // Test document search by name
    assert(libraryManager.search("Book1") == 1);    
    assert(libraryManager.search("Book2") == 2);  
    assert(libraryManager.search("NonexistentBook") == -1);  // Test a book that doesn't exist

    // Test borrowing documents
    assert(libraryManager.borrowDocument(1, 1) == true);   // Patron 1 borrows Book1
    assert(libraryManager.borrowDocument(1, 2) == true);   // Patron 2 borrows Book1
    assert(libraryManager.borrowDocument(1, 3) == false);  // Invalid patron ID (3)

    assert(libraryManager.borrowDocument(2, 1) == true);   // Patron 1 borrows Book2
    assert(libraryManager.borrowDocument(2, 2) == false);  // License limit exceeded for Book2

    // Return document and test borrowing again
    libraryManager.returnDocument(2, 1);                   // Patron 1 returns Book2
    assert(libraryManager.borrowDocument(2, 2) == true);   // Now Patron 2 can borrow Book2

    // If no assertion errors occur, the test passed
    return 0;
}
