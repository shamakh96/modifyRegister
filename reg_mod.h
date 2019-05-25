/*
 * reg_mod.h
 *
 *  Created on: May 25, 2019
 *      Author: r
 */

#ifndef REG_MOD_H_
#define REG_MOD_H_



#define MODI_REG3(REG , PIN0 , VALUE0) \
	REG |= 	( VALUE0 << PIN0 );\
	REG &= ~(!VALUE0 << PIN0 );

#define MODI_REG5(REG , PIN0 , VALUE0, PIN1 , VALUE1)\
{\
	REG |= 	( VALUE0 << PIN0 )|\
			( VALUE1 << PIN1 );\
	REG &= ~(!VALUE0 << PIN0 )&\
		   ~(!VALUE1 << PIN1 );\
}


#define MODI_REG7(REG , PIN0 , VALUE0, PIN1 , VALUE1, PIN2, VALUE2)\
{\
	REG |= 	( VALUE0 << PIN0 )|\
			( VALUE1 << PIN1 )|\
			( VALUE2 << PIN2 );\
	REG &= 	~(!VALUE0 << PIN0 )&\
			~(!VALUE1 << PIN1 )&\
			~(!VALUE2 << PIN2 );\
}

#define MODI_REG9(REG , PIN0 , VALUE0, PIN1 , VALUE1, PIN2, VALUE2, PIN3, VALUE3)\
{\
	REG |= 	( VALUE0 << PIN0 )|\
			( VALUE1 << PIN1 )|\
			( VALUE2 << PIN2 )|\
			( VALUE3 << PIN3 );\
	REG &= 	~(!VALUE0 << PIN0 )&\
			~(!VALUE1 << PIN1 )&\
			~(!VALUE2 << PIN2 )&\
			~(!VALUE3 << PIN3 );\
}


#define MODI_REG11(REG , PIN0 , VALUE0, PIN1 , VALUE1, PIN2 , VALUE2, PIN3 , VALUE3, PIN4 , VALUE4)\
		{\
	REG |= 	( VALUE0 << PIN0 )|\
			( VALUE1 << PIN1 )|\
			( VALUE2 << PIN2 )|\
			( VALUE3 << PIN3 )|\
			( VALUE4 << PIN4);\
	REG &= ~(!VALUE0 << PIN0 )&\
		   ~(!VALUE1 << PIN1 )&\
		   ~(!VALUE2 << PIN2 )&\
		   ~(!VALUE3 << PIN3 )&\
		   ~(!VALUE4 << PIN4 );\
		}

#define MODI_REG13(REG , PIN0 , VALUE0, PIN1 , VALUE1, PIN2 , VALUE2, PIN3 , VALUE3, PIN4 , VALUE4, PIN5 , VALUE5)\
		{\
	REG |= 	( VALUE0 << PIN0 )|\
			( VALUE1 << PIN1 )|\
			( VALUE2 << PIN2 )|\
			( VALUE3 << PIN3 )|\
			( VALUE4 << PIN4 )|\
			( VALUE5 << PIM5 );\
	REG &= ~(!VALUE0 << PIN0 )&\
		   ~(!VALUE1 << PIN1 )&\
		   ~(!VALUE2 << PIN2 )&\
		   ~(!VALUE3 << PIN3 )&\
		   ~(!VALUE4 << PIN4 )&\
		   ~(!VALUE5 << PIN5 );\
		}

#define MODI_REG15(REG , PIN0 , VALUE0, PIN1 , VALUE1, PIN2 , VALUE2, PIN3 , VALUE3, PIN4 , VALUE4, PIN5 , VALUE5, PIN6 , VALUE6)\
		{\
	REG |= 	( VALUE0 << PIN0 )|\
			( VALUE1 << PIN1 )|\
			( VALUE2 << PIN2 )|\
			( VALUE3 << PIN3 )|\
			( VALUE4 << PIN4 )|\
			( VALUE5 << PIN5 )|\
			( VALUE6 << PIN6);\
	REG &= 	~(!VALUE0 << PIN0 )&\
			~(!VALUE1 << PIN1 )&\
			~(!VALUE2 << PIN2 )&\
			~(!VALUE3 << PIN3 )&\
			~(!VALUE4 << PIN4 )&\
			~(!VALUE5 << PIN5 )&\
			~(!VALUE6 << PIN6 );\
		}

#define MODI_REG17(REG , PIN0 , VALUE0, PIN1 , VALUE1, PIN2 , VALUE2, PIN3 , VALUE3, PIN4 , VALUE4, PIN5 , VALUE5, PIN6 , VALUE6, PIN7 , VALUE7)\
		{\
	REG |= 	( VALUE0 << PIN0 )|\
			( VALUE1 << PIN1 )|\
			( VALUE2 << PIN2 )|\
			( VALUE3 << PIN3 )|\
			( VALUE4 << PIN4 )|\
			( VALUE5 << PIN5 )|\
			( VALUE6 << PIN6 )|\
			( VALUE7 << PIN7 );\
	REG &= 	~(!VALUE0 << PIN0 )&\
			~(!VALUE1 << PIN1 )&\
			~(!VALUE2 << PIN2 )&\
			~(!VALUE3 << PIN3 )&\
			~(!VALUE4 << PIN4 )&\
			~(!VALUE5 << PIN5 )&\
			~(!VALUE6 << PIN6 )&\
			~(!VALUE7 << PIN7 );\
		}

/*
 * 17 arguments are the maximum number of arguments this macro can hold .. 8 pins , 8 pin values , register name
 */
#define _ARG2(_0, _1, _2,_3,_4,_5,_6,_7,_8,_9,_10,_11,_12,_13,_14,_15,_16,_17, ...) _17
#define NARG2(...) 		_ARG2(__VA_ARGS__,17, 16, 15, 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0)


/*
 * this macro calls a macro that modifies 1 pin
 */
#define SELECT3(REG, PIN0, VALUE0)\
	MODI_REG3(REG, PIN0, VALUE0)
/*
 * this macro calls a macro that modifies 2 pins
 */
#define SELECT5(REG, PIN0, VALUE0, PIN1, VALUE1)\
	MODI_REG5(REG, PIN0, VALUE0, PIN1, VALUE1)

/*
 * this macro calls a macro that modifies 3 pins
 */
#define SELECT7(REG , PIN0 , VALUE0, PIN1 , VALUE1, PIN2 , VALUE2)\
	MODI_REG7(REG , PIN0 , VALUE0, PIN1 , VALUE1, PIN2 , VALUE2)

/*
 * this macro calls a macro that modifies 4 pins
 */
#define SELECT9(REG , PIN0 , VALUE0, PIN1 , VALUE1, PIN2 , VALUE2, PIN3 , VALUE3)\
	MODI_REG9(REG , PIN0 , VALUE0, PIN1 , VALUE1, PIN2 , VALUE2, PIN3 , VALUE3)

/*
 * this macro calls a macro that modifies 5 pins
 */
#define SELECT11(REG , PIN0 , VALUE0, PIN1 , VALUE1, PIN2 , VALUE2, PIN3 , VALUE3, PIN4 , VALUE4)\
	MODI_REG11(REG , PIN0 , VALUE0, PIN1 , VALUE1, PIN2 , VALUE2, PIN3 , VALUE3, PIN4 , VALUE4)

/*
 * this macro calls a macro that modifies 6 pins
 */
#define SELECT13(REG , PIN0 , VALUE0, PIN1 , VALUE1, PIN2 , VALUE2, PIN3 , VALUE3, PIN4 , VALUE4, PIN5 , VALUE5)\
	MODI_REG13(REG , PIN0 , VALUE0, PIN1 , VALUE1, PIN2 , VALUE2, PIN3 , VALUE3, PIN4 , VALUE4, PIN5 , VALUE5)

/*
 * this macro calls a macro that modifies 7 pins
 */
#define SELECT15(REG , PIN0 , VALUE0, PIN1 , VALUE1, PIN2 , VALUE2, PIN3 , VALUE3, PIN4 , VALUE4, PIN5 , VALUE5, PIN6 , VALUE6)\
	MODI_REG15(REG , PIN0 , VALUE0, PIN1 , VALUE1, PIN2 , VALUE2, PIN3 , VALUE3, PIN4 , VALUE4, PIN5 , VALUE5, PIN6 , VALUE6)

/*
 * this macro calls a macro that modifies 8 pins
 */
#define SELECT17(REG , PIN0 , VALUE0, PIN1 , VALUE1, PIN2 , VALUE2, PIN3 , VALUE3, PIN4 , VALUE4, PIN5 , VALUE5, PIN6 , VALUE6, PIN7 , VALUE7)\
	MODI_REG17(REG , PIN0 , VALUE0, PIN1 , VALUE1, PIN2 , VALUE2, PIN3 , VALUE3, PIN4 , VALUE4, PIN5 , VALUE5, PIN6 , VALUE6, PIN7 , VALUE7)


#define SELECT(N, ...) 		SELECT##N(__VA_ARGS__)
#define _SELECT(N, ...) 	SELECT(N, __VA_ARGS__)

#define MODI_REG(...) 		_SELECT(NARG2(__VA_ARGS__), __VA_ARGS__)

/*
 * use MODI_REG (PORTx , variable number of arguments ... ) to change a the value of a pin (set or clear)
 * without changing the other pins
 */


#endif /* REG_MOD_H_ */
