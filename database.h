/*
 * Created by Niko Klemm
 * Created 2022-12-01
 * Version 1.0
 * Modified 2022-12-01
 */

#ifndef MINIDATABASE_DATABASE_H
#define MINIDATABASE_DATABASE_H

struct M_Item;
typedef struct M_Item Item;
void error(char*, int);
int add(void);
Item* last(void);
Item* first(void);
Item* get(int);
int rem(int);

#endif /* MINIDATABASE_DATABASE_H */
