#include <stdio.h>

struct Address {
    char street[50];
    char city[50];
};

struct Person {
    char fullName[50];
    int id;
    struct Address address;
    char tel[15];
};

int main(void) {
    struct Person p = {
        .fullName = "POOM KONGHUAYROB",
        .id = 69011014,
        .address = {
        .street = "3 Moo 2, Chalongkrung Rd.",
        .city = "Ladkrabang, Bangkok"
    },
    .tel = "088 888 8888"
};

printf("Full name : %s, ID : %d\n", p.fullName, p.id);
printf("Address : %s\n", p.address.street);
printf("%s\n", p.address.city);
printf("Tel. %s\n", p.tel);

return 0;
}