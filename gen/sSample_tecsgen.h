/*
 * ���Υե������ tecsgen �ˤ�꼫ư��������ޤ���
 * ���Υե�������Խ����ƻ��Ѥ��뤳�Ȥϡ��տޤ���Ƥ��ޤ���
 */
#ifndef sSample_TECSGEN_H
#define sSample_TECSGEN_H

/*
 * signature   :  sSample
 * global name :  sSample
 * context     :  task
 */

#ifndef TOPPERS_MACRO_ONLY

/* �����˥���ǥ�������ץ� #_SD_# */
struct tag_sSample_VDES {
    struct tag_sSample_VMT *VMT;
};

/* �����˥���ؿ��ơ��֥� #_SFT_# */
struct tag_sSample_VMT {
    ER             (*sayHello__T)( const struct tag_sSample_VDES *edp, int32_t times );
    ER             (*howAreYou__T)( const struct tag_sSample_VDES *edp, char_t* buf, int32_t len );
};

/* �����˥���ǥ�������ץ�(ưŪ�����) #_SDES_# */
#ifndef Descriptor_of_sSample_Defined
#define  Descriptor_of_sSample_Defined
typedef struct { struct tag_sSample_VDES *vdes; } Descriptor( sSample );
#endif
#endif /* TOPPERS_MACRO_ONLY */

/* function id */
#define	FUNCID_SSAMPLE_SAYHELLO                (1)
#define	FUNCID_SSAMPLE_HOWAREYOU               (2)

#endif /* sSample_TECSGEN_H */
