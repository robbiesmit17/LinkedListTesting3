// LinkedListTesting3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>


struct Structy {
    std::string stringy;
    struct Structy* next;
};


void append(struct Structy** head, std::string node_data) {

    /* 1. create and allocate node */
    struct Structy* newNode = new Structy;

    struct Structy* last = *head; /* used in step 5*/

    /* 2. assign data to the node */
    newNode->stringy = node_data;


    /* 3. set next pointer of new node to null as its the last node*/
    newNode->next = NULL;

    /* 4. if list is empty, new node becomes first node */
    if (*head == NULL)
    {
        *head = newNode;
        return;
    }

    /* 5. Else traverse till the last node */
    while (last->next != NULL)
        last = last->next;

    /* 6. Change the next of last node */
    last->next = newNode;
    return;

}
void display(struct Structy* head) {
    Structy* list = head;
    while (list) {
        std::cout << list->stringy << " ";
        list = list->next;
    }
    std::cout << std::endl;
    std::cout << std::endl;
}


void CreateStructy(Structy* &head) {
    append(&head, "THING");
}


int main()
{

    struct Structy* head = NULL;
  //  head->stringy = "thing.";
    CreateStructy(head);
    CreateStructy(head);
    CreateStructy(head);
    CreateStructy(head);
    append(&head, "THING");
    append(&head, "THING");

    display(head);
}




// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
