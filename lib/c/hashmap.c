#define HASH_SIZE 65536

struct list {
    int num;
    int val;
    struct list *next;
};

struct list *create_htable(void) {
    static struct list htable[HASH_SIZE];
    int i;
    for(i = 0; i < HASH_SIZE; i++) {
        htable[i].next = &htable[i];
    }
    return htable;
}

int get_key(int num) {
    return num & (HASH_SIZE-1);
}

struct list* find(struct list *htable, int num) {
    struct list *head = &htable[get_key(num)];
    struct list *elem;
    for(elem = head->next; elem != head; elem = elem->next) {
        if(elem->num == num) {
            return elem;
        }
    }
    return NULL;
}

int find_val(struct list *htable, int num) {
    struct list *elem = find(htable, num);
    return (elem) ? elem->val : 0;
}

void add_elem(struct list *htable, int num) {
    struct list *elem = find(htable, num);
    if(elem) {
        elem->val++;
        return;
    }
    elem = malloc(sizeof(struct list));
    struct list *head = &htable[get_key(num)];
    elem->next = head->next;
    elem->num = num;
    elem->val = 1;
    head->next = elem;
}

void put_elem(struct list *htable, int num) {
    struct list *elem = find(htable, num);
    if(!elem) return;
    if(elem->val) elem->val--;
    return;
}
