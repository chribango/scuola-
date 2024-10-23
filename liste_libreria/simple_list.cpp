#include "simple_list.h"
#include <iostream>
/**
 * Inserimento in testa ad una lista
 */
void insert(Node* head, int value){
    node*nuovo=new node;
    nuovo->info=value;
    nuovo->next=head->next;
    head=nuovo;
}
/**
 * Inserimento in coda ad una lista
 */
void append(Node* head, int value){
    node*nuovo=new node;
    nuovo->info=value;
    node*lost=head->next;
    while (lost!= nullptr){
        head=lost;
        lost=head->next;
    }
    head->next=nuovo;
    nuovo->next= nullptr;
}
/**
 * Inserimento in coda ad una lista prima della posizione
 * specificata restituisce false se la dimensione
 * della lista è troppo piccola
 */
bool insert(Node*& head, int pos, int value) {
    if (pos < 0) {
        return false;
    }

    int listSize = size(head);
    if (pos > listSize) {
        return false;
    }

    Node* newNode = new Node{value, nullptr};

    if (pos == 0) {
        // Inserimento in testa
        newNode->next = head;
        head = newNode;
        return true;
    }

    Node* current = head;
    // Avanza fino al nodo prima della posizione specificata
    for (int i = 0; i < pos - 1 && current != nullptr; i++) {
        current = current->next;
    }

    // Inserimento del nuovo nodo nella lista
    newNode->next = current->next;
    current->next = newNode;

    return true;
}

/**
 * Restituisce la dimensione della lista
 */
int size(Node* head) {
    int count = 0;
    Node* current = head;
    while (current != nullptr) {
        count++;
        current = current->next;
    }
    return count;
}