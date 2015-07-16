#ifndef LOGIC_H
#define LOGIC_H 1

#define MAP_FREE            0   // Prazno polje, nema broda
#define MAP_SHIP_ALIVE      1   // Deo broda koji nije pogodjen
#define MAP_SHIP_DEAD       2   // Deo broda koji je pogodjen
#define MAP_SHIP_KILLED     3   // Deo broda koji je ceo pogodjen

/*
 * Uklonjeno zbog smnjivanja koda (for petlje)
#define SHIP_BIG_COUNT      1   // Broj velikih brodova
#define SHIP_BIG_SIZE       4   // Broj polja koje zauzima veliki brod
#define SHIP_MIDDLE_COUNT   2   // Broj srednjih brodova
#define SHIP_MIDDLE_SIZE    3   // Broj polja koje zauzima srednji bro
#define SHIP_SMALL_COUNT    2   // Broj malih brodova
#define SHIP_SMALL_SIZE     2   // Broj polja koje zauzima mali brod
*/

/*
 *
 * Funkcija koja generise slucajni broj
 *  od 1 do max
 */
int randNumber(int max);

/*
 *
 * Funkcija koja generise brodove na slucajnoj lokaciji
 *
 * Argumenti:
 *  int width - sirina mape
 *  int height - visina mape
 *  int (*map)[width] - pokazivac na mesto u memoriji na kome se nalazi mapa
 */
void *genMap(int height, int width, int (*map)[width]);

#endif
