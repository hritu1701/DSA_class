#include <iostream>
struct Link {
    int info;
    Link* next;
};


Link* start = nullptr;


Link* createHeaderList(int data)
{

    Link* new_node = new Link;
    new_node->info = data;
    new_node->next = nullptr;


    if (start == nullptr) {

        start = new Link;
        start->next = new_node;
    }
    else {
        // Insert the node at the end
        Link* node = start;
        while (node->next != nullptr) {
            node = node->next;
        }
        node->next = new_node;
    }
    return start;
}


Link* display()
{
    Link* node = start;
    node = node->next;
    while (node != nullptr) {
        std::cout << node->info << " ";
        node = node->next;
    }
    std::cout << std::endl;
    return start;
}


int countElements()
{
    int count = 0;
    Link* node = start->next;
    while (node != nullptr) {
        count++;
        node = node->next;
    }
    return count;
}

int main()
{
    int data;

    // Create the list
    std::cout << "Enter data for the linked list (0 to exit):" << std::endl;
    while (true) {
        std::cin >> data;
        if (data == 0)
            break;
        createHeaderList(data);
    }

    int totalElements = countElements();
    std::cout << "Total number of elements: " << totalElements << std::endl;



    std::cout << "Linked list elements: ";
    display();

    return 0;
}
