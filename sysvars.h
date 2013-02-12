#ifndef __SYSVARS_H
#define __SYSVARS_H


//=====================================
//Variables del Sistema del ZX Spectrum
//=====================================

extern unsigned int *udg_ptr;    //primer UserDefinedGraphic (lo ultimo que hay en la memoria)
extern unsigned int *p_ramt_ptr; //el mayor byte (absoluto) de la memoria
extern unsigned int *ramtop_ptr; //ramtop es el ultimo byte que el BASIC puede usar
extern unsigned int *stkend_ptr; //fin del stack



#endif
