#ifndef GRAPHIC_H
#define GRAPHIC_G 1

#define WINDOW_WIDTH                    80
#define WINDOW_HEIGHT                   24


/*
 *
 * Funkcija koja inicijalizuje grafiku
 *
 */
void init(void);

/*
 *
 * Funkcija koja "iskljucije" grafiku, "cisti"
 *
 */
void cleanup(void);

/*
 *
 * Funkcija koja iscrtava loading screen
 *
 */
void drawLoad(int dotNum);

/*
 *
 * Funkcija za crtanje frejma
 * Argumenti:
 *  int x - x koordinata pokazivaca
 *  int y - y koordinata pokazivaca
 *  int (*map)[width] - pokazivac na mapu
 *
 */
void drawFrame(int x, int y, int mHeight, int mWidth, int (*map)[mWidth]);

/*
 *
 * Funkcija za iscrtavanje okvira
 *
 */
void drawBox(int x, int y, int w, int h);

/*
 *
 * Funkcija za iscrtavanje "ucitavanje", "loading:"
 *
 */
void loading(void);

#endif
