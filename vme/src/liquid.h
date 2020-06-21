/*
	*Liquid file.
	*
	*Feel free to add change or delete these macros.  This is how you create
	*your own special liquids now that all the liquid commands are in dil.
	*These macros all use the base liq_def that is in wmacros.h which should
	*not be changed.
*/
#define LIQ_WATER(WEIGHT,CAPACITY,INSIDE,POISON) \
				LIQ_DEF("clear", WEIGHT,CAPACITY,INSIDE,10,1,0,POISON)
#define LIQ_BEER(WEIGHT,CAPACITY,INSIDE,POISON) \
				LIQ_DEF("brown", WEIGHT,CAPACITY,INSIDE,5,2,3,POISON)
#define LIQ_WINE(WEIGHT,CAPACITY,INSIDE,POISON) \
				LIQ_DEF("clear", WEIGHT,CAPACITY,INSIDE,5,2,5,POISON)
#define LIQ_ALE(WEIGHT,CAPACITY,INSIDE,POISON) \
				LIQ_DEF("brown", WEIGHT,CAPACITY,INSIDE,5,2,2,POISON)
#define LIQ_DARK_ALE(WEIGHT,CAPACITY,INSIDE,POISON) \
				LIQ_DEF("dark brown", WEIGHT,CAPACITY,INSIDE,5,2,1,POISON)
#define LIQ_WHISKEY(WEIGHT,CAPACITY,INSIDE,POISON) \
				LIQ_DEF("golden",WEIGHT ,CAPACITY,INSIDE,4,1,6,POISON)
#define LIQ_LEMONADE(WEIGHT,CAPACITY,INSIDE,POISON) \
				LIQ_DEF("red", WEIGHT, CAPACITY, INSIDE, 8, 1, 0,POISON)
#define LIQ_FIREBRT(WEIGHT,CAPACITY,INSIDE,POISON) \
				LIQ_DEF("green", WEIGHT,CAPACITY,INSIDE,0,0,10,POISON)
#define LIQ_LOCALSPC(WEIGHT,CAPACITY,INSIDE,POISON) \
				LIQ_DEF("clear", WEIGHT, CAPACITY, INSIDE, 3, 3, 3,POISON)
#define LIQ_SLIME(WEIGHT,CAPACITY,INSIDE,POISON) \
				LIQ_DEF("light green", WEIGHT,CAPACITY,INSIDE,8,4,0,POISON)
#define LIQ_MILK(WEIGHT,CAPACITY,INSIDE,POISON) \
				LIQ_DEF("white", WEIGHT, CAPACITY, INSIDE, 6, 3, 0,POISON)
#define LIQ_TEA(WEIGHT,CAPACITY,INSIDE,POISON) \
				LIQ_DEF("brown", WEIGHT, CAPACITY, INSIDE, 6, 1, 0,POISON)
#define LIQ_COFFEE(WEIGHT,CAPACITY,INSIDE,POISON) \
				LIQ_DEF("black", WEIGHT, CAPACITY, INSIDE, 6, 1, 0,POISON)
#define LIQ_BLOOD(WEIGHT,CAPACITY,INSIDE,POISON) \
				LIQ_DEF("red", WEIGHT, CAPACITY, INSIDE, -1, 2, 0, POISON)
#define LIQ_SALTWAT(WEIGHT,CAPACITY,INSIDE,POISON) \
				LIQ_DEF("clear", WEIGHT, CAPACITY, INSIDE, 2, 1, 0, POISON)
#define LIQ_COKE(WEIGHT,CAPACITY,INSIDE,POISON) \
				LIQ_DEF("black", WEIGHT, CAPACITY, INSIDE, 5, 1, 0,POISON)
#define LIQ_VODKA(WEIGHT,CAPACITY,INSIDE,POISON) \
				LIQ_DEF("clear", WEIGHT,CAPACITY,INSIDE,0,0,10,POISON)
#define LIQ_BRANDY(WEIGHT,CAPACITY,INSIDE,POISON) \
				LIQ_DEF("golden", WEIGHT,CAPACITY,INSIDE,4,1,6,POISON)