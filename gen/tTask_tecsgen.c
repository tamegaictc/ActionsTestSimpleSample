/*
 * ���Υե������ tecsgen �ˤ�꼫ư��������ޤ���
 * ���Υե�������Խ����ƻ��Ѥ��뤳�Ȥϡ��տޤ���Ƥ��ޤ���
 */
#include "tTask_tecsgen.h"
#include "tTask_factory.h"

/* �������ǥ�������ץ��� #_EDT_# */
/* eTask : omitted by entry port optimize */

/* ������������ȥ�ؿ� #_EPSF_# */
/* eTask : omitted by entry port optimize */

/* ������������ȥ�ؿ��ơ��֥� #_EPSFT_# */
/* eTask : omitted by entry port optimize */

/* �ƤӸ��λ��Ȥ���������ǥ�������ץ�(�ºݤη�����㤷�����) #_CPEPD_# */

/* �ƤӸ����� #_CPA_# */

/* °�����ѿ������� #_AVAI_# */
/* ���� INIB #_INIB_# */
tTask_INIB tTask_INIB_tab[] = {
    /* cell: tTask_CB_tab[0]:  Task id=1 */
    {
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        TA_ACT,                                  /* taskAttribute */
        TA_NULL,                                 /* exceptionAttribute */
        11,                                      /* priority */
        1024,                                    /* stackSize */
        "tTask_Task",                            /* name */
    },
};

/* ���� CB #_CB_# */
struct tag_tTask_CB tTask_CB_tab[] = {
    /* cell: tTask_CB_tab[0]:  Task id=1 */
    {
        &tTask_INIB_tab[0],                      /* _inib */
        /* entry port #_EP_# */ 
        /* var */ 
        0,                                       /* my_thread */
        0,                                       /* my_cond */
        0,                                       /* my_mutex */
        0,                                       /* state */
    },
};

/* �������ǥ�������ץ� #_EPD_# */
/* eTask : omitted by entry port optimize */
