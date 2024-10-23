//
// Created by stefy on 02/10/2024.
//

#ifndef SIMPLE_LIST_H
#define SIMPLE_LIST_H
typedef struct Node{
    int info;
    Node *next= nullptr;
}node;

/**
 * Inserimento in testa ad una lista
 */
void insert(Node* head, int value);

/**
 * Inserimento in coda ad una lista
 */
void append(Node* head, int value);

/**
 * Inserimento in coda ad una lista prima della posizione specificata restituisce false se la dimensione
 * della lista è troppo piccola
 */
bool insert(Node* head, int pos, int value);

/**
 * Restituisce la dimensione della lista
 */
int size(Node* head);

/**
 * Inverte l'ordinamento della lista
 */
void reverse(Node* head);

/**
 * Cerca un elemento nella lista e restituisce il nodo a cui appartiene
 */
Node* find(Node* head, int value);

/**
 * Cerca e rimuove la prima occorrenza di un elemento dalla lista, se non lo trova restituisce NULL
 */
Node* remove(Node* head, int value);

/**
 * Ordina la lista in modo crescente
 */
void order(Node* head);

/**
 * Stampa il contenuto di una lista
 */
void print(Node* head);

/**
 * Toglie gli elementi duplicati dalla lista
 */
void unique(Node* head);

/**
 * Crea una copia della lista eliminando gli elementi duplicati
 */
Node* listset(Node* head);

/**
 * Crea una copia della lista che contiene gli elementi unici di entrambe le liste a e b
 */
Node* listset_union(Node* a,Node* b);

/**
 * Crea una copia della lista eliminando gli elementi b contenuti in a
 */
Node* listset_diff(Node* a, Node* b);


/**
 * Unisce due liste ordinate creando una lista ordina nuova
 */
Node* merge(Node* left,Node* right);


/**
 * Aggiunge in fondo una lista ad un lista
 */
void append(Node* head, Node* list);

/**
 * Cancella tutti gli elementi della lista
 */
void clear(Node* head);

/**
 * Crea una copia della lista
 */
Node* copy(Node* head);

/**
 * Esegue passa-avanti in una lista
 */
void next(Node* head);

/**
 * Esegue passa-indietro in una lista
 */
void prev(Node* head);


#endif //SIMPLE_LIST_H
