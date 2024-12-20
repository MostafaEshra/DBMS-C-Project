#ifndef SDB_H_INCLUDED
#define SDB_H_INCLUDED

#include <stddef.h>
#include "STD.h"

typedef struct student {
    uint32 Student_ID;
    uint32 Student_year;
    uint32 Course1_ID;
    uint32 Course1_grade;
    uint32 Course2_ID;
    uint32 Course2_grade;
    uint32 Course3_ID;
    uint32 Course3_grade;
    struct student *pNext;
    struct student *pPrev;
    } student;
student* pHead;
student* pTail;

bool SDB_IsFull();
uint8 SDB_GetUsedSize();
bool SDB_AddEntry();
static student* Create_Node();
void SDB_DeleteEntry(uint32 id);
bool SDB_ReadEntry(uint32 id);
void SDB_Getlist(uint8 * count,uint32 * list);
bool SDB_IsIdExist(uint32 id);

#endif // SDB_H_INCLUDED
