#ifndef TETRA_MM_PDU_H
#define TETRA_MM_PDU_H

/* 16.10.39 PDU Type */
enum tetra_mm_pdu_type_d {
	TMM_PDU_T_D_OTAR 	= 0x0,
	TMM_PDU_T_D_AUTH	= 0x1,
	TMM_PDU_T_D_CK_CHG_DEM	= 0x2,
	TMM_PDU_T_D_DISABLE	= 0x3,
	TMM_PDU_T_D_ENABLE	= 0x4,
	TMM_PDU_T_D_LOC_UPD_ACC	= 0x5,
	TMM_PDU_T_D_LOC_UPD_CMD	= 0x6,
	TMM_PDU_T_D_LOC_UPD_REJ	= 0x7,
	/* RES */
	TMM_PDU_T_D_LOC_UPD_PROC	= 0x9,
	TMM_PDU_T_D_ATT_DET_GRP		= 0xa,
	TMM_PDU_T_D_ATT_DET_GRP_ACK	= 0xb,
	TMM_PDU_T_D_MM_STATUS		= 0xc,
	/* RES */
	/* RES */
	TMM_PDU_T_D_MM_PDU_NOTSUPP	= 0xf
};

const char *tetra_get_mm_pdut_name(uint8_t pdut, int uplink);

#endif
