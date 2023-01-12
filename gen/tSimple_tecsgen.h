/*
 * ���Υե������ tecsgen �ˤ�꼫ư��������ޤ���
 * ���Υե�������Խ����ƻ��Ѥ��뤳�Ȥϡ��տޤ���Ƥ��ޤ���
 */
#ifndef tSimple_TECSGEN_H
#define tSimple_TECSGEN_H

/*
 * celltype          :  tSimple
 * global name       :  tSimple
 * multi-domain      :  no
 * idx_is_id(actual) :  no(no)
 * singleton         :  yes
 * has_CB            :  no
 * has_INIB          :  no
 * rom               :  yes
 * CB initializer    :  no
 */

/* �����Х�إå� #_IGH_# */
#include "global_tecsgen.h"

/* �����˥���إå� #_ISH_# */
#include "sSample_tecsgen.h"
#include "sTaskBody_tecsgen.h"

#ifndef TOPPERS_MACRO_ONLY

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */
/* ���� CB (���ߡ�)����� #_CCDP_# */
typedef struct tag_tSimple_CB {
    int  dummy;
} tSimple_CB;
/* ���󥰥�ȥ󥻥� CB �ץ�ȥ�������� #_SCP_# */


/* ���륿���פ�IDX�� #_CTIX_# */
typedef int   tSimple_IDX;

/* �������ؿ��ץ�ȥ�������� #_EPP_# */
/* sTaskBody */
void         tSimple_eBody_main();
#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* TOPPERS_MACRO_ONLY */

/* ��Ŭ���Τ��Ỳ�Ȥ��륻�륿���פ� CB ������������� #_ICT_# */
#ifndef  TOPPERS_CB_TYPE_ONLY
#define  tSimple_CB_TYPE_ONLY
#define TOPPERS_CB_TYPE_ONLY
#endif  /* TOPPERS_CB_TYPE_ONLY */
#include "tSample_tecsgen.h"
#ifdef  tSimple_CB_TYPE_ONLY
#undef TOPPERS_CB_TYPE_ONLY
#endif /* tSimple_CB_TYPE_ONLY */
#ifndef TOPPERS_CB_TYPE_ONLY


/* ����CB������ޥ��� #_GCB_# */
#define tSimple_GET_CELLCB(idx) ((void *)0)
#ifndef TECSFLOW
 /* �ƤӸ��ؿ��ޥ��� #_CPM_# */
#define tSimple_cCall_sayHello( times ) \
	  tSample_eEnt_sayHello( \
	   (tSample_IDX)0, (times) )
#define tSimple_cCall_howAreYou( buf, len ) \
	  tSample_eEnt_howAreYou( \
	   (tSample_IDX)0, (buf), (len) )

#else  /* TECSFLOW */
#define tSimple_cCall_sayHello( times ) \
	  (p_that)->cCall.sayHello__T( \
 (times) )
#define tSimple_cCall_howAreYou( buf, len ) \
	  (p_that)->cCall.howAreYou__T( \
 (buf), (len) )

#endif /* TECSFLOW */
#endif /* TOPPERS_CB_TYPE_ONLY */

#ifndef TOPPERS_MACRO_ONLY

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

/* ������������ȥ�ؿ��ץ�ȥ����������VMT���׺�Ŭ���ˤ�껲�Ȥ����Ρ� #_EPSP_# */

#ifndef TOPPERS_CB_TYPE_ONLY

#endif /* TOPPERS_CB_TYPE_ONLY */

#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* TOPPERS_MACRO_ONLY */

#ifndef TOPPERS_CB_TYPE_ONLY


/* ����CB������ޥ���(û�̷�) #_GCBA_# */
#define GET_CELLCB(idx)  tSimple_GET_CELLCB(idx)

/* CELLCB ��(û�̷�) #_CCT_# */
#define CELLCB	tSimple_CB

/* ���륿���פ�IDX��(û�̷�) #_CTIXA_# */
#define CELLIDX	tSimple_IDX

/* �ƤӸ��ؿ��ޥ����û�̷���#_CPMA_# */
#define cCall_sayHello( times ) \
          tSimple_cCall_sayHello( times )
#define cCall_howAreYou( buf, len ) \
          tSimple_cCall_howAreYou( buf, len )




/* �������ؿ��ޥ����û�̷��� #_EPM_# */
#define eBody_main       tSimple_eBody_main

/* CB ������ޥ��� #_CIM_# */
#endif /* TOPPERS_CB_TYPE_ONLY */

#ifndef TOPPERS_MACRO_ONLY

#endif /* TOPPERS_MACRO_ONLY */

#endif /* tSimple_TECSGENH */
