#ifndef __de_dsi_h__
#define __de_dsi_h__

#include "ebios_lcdc_tve.h"

typedef union
{
	__u32 dwval;
	struct
	{
		__u32 dsi_en                     :  1 ;    // default: 0;
		__u32 res0                       : 31 ;    // default: ;
	} bits;
} dsi_ctl_reg_t;

typedef union
{
	__u32 dwval;
	struct
	{
		__u32 dsi_irq_en  				 : 16 ;    // default: 0;
		__u32 dsi_irq_flag               : 16 ;    // default: 0;
	} bits;
} dsi_gint0_reg_t;

typedef union
{
	__u32 dwval;
	struct
	{
		__u32 video_line_int_num         : 13 ;    // Default: 0;
		__u32 res0                       : 19 ;    // Default: ;
	} bits;
} dsi_gint1_reg_t;

typedef union
{
	__u32 dwval;
	struct
	{
		__u32 video_mode_burst           :  1 ;    // default: 0;
		__u32 hsa_hse_dis                :  1 ;    // default: 0;
		__u32 hbp_dis                    :  1 ;    // default: 0;
		__u32 trail_fill				 :  1 ;	   // default: 0;
		__u32 trail_inv  				 :  4 ;	   // default: 0;
		__u32 res0                       :  8 ;    // default: 0;
		__u32 brdy_set			         :  8 ;    // default: 0;
		__u32 brdy_l_sel		         :  3 ;    // default: 0;
		__u32 res1		                 :  5 ;    // default: 0;
	} bits;
} dsi_basic_ctl_reg_t;

typedef union
{
	__u32 dwval;
	struct
	{
		__u32 inst_st                    :  1 ;    // default: 0;
		__u32 res0                       :  3 ;    // default: ;
		__u32 src_sel                    :  2 ;    // default: 0;
		__u32 res1                       :  4 ;    // default: ;
		__u32 fifo_manual_reset          :  1 ;    // default: 0;
		__u32 res2                       :  1 ;    // default: ;
		__u32 fifo_gating                :  1 ;    // default: 0;
		__u32 res3                       :  3 ;    // default: ;
		__u32 ecc_en                     :  1 ;    // default: 0;
		__u32 crc_en                     :  1 ;    // default: 0;
		__u32 hs_eotp_en                 :  1 ;    // default: 0;
		__u32 res4                       : 13 ;    // default: ;
	} bits;
} dsi_basic_ctl0_reg_t;

typedef union
{
	__u32 dwval;
	struct
	{
		__u32 dsi_mode                   :  1 ;    // default: 0;
		__u32 video_frame_start          :  1 ;    // default: 0;
		__u32 video_precision_mode_align :  1 ;    // default: 0;
		__u32 res0                       :  1 ;    // default: ;
		__u32 video_start_delay          : 13 ;    // default: 0;
		__u32 res1                       : 15 ;    // default: 0;
	} bits;
} dsi_basic_ctl1_reg_t;

typedef union
{
	__u32 dwval;
	struct
	{
		__u32 vsa                  : 12 ;    // default: 0;
		__u32 res0                       :  4 ;    // default: ;
		__u32 vbp                  : 12 ;    // default: 0;
		__u32 res1                       :  4 ;    // default: ;
	} bits;
} dsi_basic_size0_reg_t;

typedef union
{
	__u32 dwval;
	struct
	{
		__u32 vact                 : 12 ;    // default: 0;
		__u32 res0                       :  4 ;    // default: ;
		__u32 vt                   : 13 ;    // default: 0;
		__u32 res1                       :  3 ;    // default: ;
	} bits;
} dsi_basic_size1_reg_t;

typedef union
{
	__u32 dwval;
	struct
	{
		__u32 lane_den                   :  4 ;    // default: 0;
		__u32 lane_cen                   :  1 ;    // default: 0;
		__u32 res0                       : 11 ;    // default: ;
		__u32 trans_start_condition      :  4 ;    // default: 0;
		__u32 trans_packet               :  4 ;    // default: 0;
		__u32 escape_enrty               :  4 ;    // default: 0;
		__u32 instru_mode                :  4 ;    // default: 0;
	} bits;
} dsi_basic_inst0_reg_t;

typedef union
{
	__u32 dwval;
	struct
	{
		__u32 inst0_sel                  :  4 ;    // default: 0;
		__u32 inst1_sel                  :  4 ;    // default: 0;
		__u32 inst2_sel                  :  4 ;    // default: 0;
		__u32 inst3_sel                  :  4 ;    // default: 0;
		__u32 inst4_sel                  :  4 ;    // default: 0;
		__u32 inst5_sel                  :  4 ;    // default: 0;
		__u32 inst6_sel                  :  4 ;    // default: 0;
		__u32 inst7_sel                  :  4 ;    // default: 0;
	} bits;
} dsi_basic_inst1_reg_t;

typedef union
{
	__u32 dwval;
	struct
	{
		__u32 loop_n0                    : 12 ;    // default: 0;
		__u32 res0                       :  4 ;    // default: ;
		__u32 loop_n1                    : 12 ;    // default: 0;
		__u32 res1                       :  4 ;    // default: ;
	} bits;
} dsi_basic_inst2_reg_t;

typedef union
{
	__u32 dwval;
	struct
	{
		__u32 inst0_jump                 :  4 ;    // default: 0;
		__u32 inst1_jump                 :  4 ;    // default: 0;
		__u32 inst2_jump                 :  4 ;    // default: 0;
		__u32 inst3_jump                 :  4 ;    // default: 0;
		__u32 inst4_jump                 :  4 ;    // default: 0;
		__u32 inst5_jump                 :  4 ;    // default: 0;
		__u32 inst6_jump                 :  4 ;    // default: 0;
		__u32 inst7_jump                 :  4 ;    // default: 0;
	} bits;
} dsi_basic_inst3_reg_t;

typedef union
{
	__u32 dwval;
	struct
	{
		__u32 jump_cfg_num              : 16 ;    // default: 0;
		__u32 jump_cfg_point            :  4 ;    // default: 0;
		__u32 jump_cfg_to               :  4 ;    // default: 0;
		__u32 res0                       :  4 ;    // default: ;
		__u32 jump_cfg_en               :  1 ;    // default: 0;
		__u32 res1                       :  3 ;    // default: ;
	} bits;
} dsi_basic_inst4_reg_t;

typedef union
{
	__u32 dwval;
	struct
	{
		__u32 trans_start_set            : 13 ;    // default: 0;
		__u32 res0                       : 19 ;    // default: ;
	} bits;
} dsi_basic_tran0_reg_t;

typedef union
{
	__u32 dwval;
	struct
	{
		__u32 trans_size                 : 16 ;    // default: 0;
		__u32 res0                       : 12 ;    // default: ;
		__u32 trans_end_condition        :  1 ;    // default: 0;
		__u32 res1                       :  3 ;    // default: ;
	} bits;
} dsi_basic_tran1_reg_t;

typedef union
{
	__u32 dwval;
	struct
	{
		__u32 trans_cycle_set            : 16 ;    // default: 0;
		__u32 res0                       : 16 ;    // default: ;
	} bits;
} dsi_basic_tran2_reg_t;

typedef union
{
	__u32 dwval;
	struct
	{
		__u32 trans_blank_set            : 16 ;    // default: 0;
		__u32 res0                       : 16 ;    // default: ;
	} bits;
} dsi_basic_tran3_reg_t;

typedef union
{
	__u32 dwval;
	struct
	{
		__u32 hs_zero_reduce_set         : 16 ;    // default: 0;
		__u32 res0                       : 16 ;    // default: ;
	} bits;
} dsi_basic_tran4_reg_t;

typedef union
{
	__u32 dwval;
	struct
	{
		__u32 drq_set			         : 10 ;    // default: 0;
		__u32 res0                       : 18 ;    // default: ;
		__u32 drq_mode			         :  1 ;    // default: 0;
		__u32 res1                       :  3 ;    // default: ;
	} bits;
} dsi_basic_tran5_reg_t;

typedef union
{
	__u32 dwval;
	struct
	{
		__u32 pixel_format               :  4 ;    // default: 0;
		__u32 pixel_endian               :  1 ;    // default: 0;
		__u32 res0                       : 11 ;    // default: ;
		__u32 pd_plug_dis                :  1 ;    // default: 0;
		__u32 res1                       : 15 ;    // default: ;
	} bits;
} dsi_pixel_ctl0_reg_t;

typedef union
{
	__u32 dwval;
	struct
	{
		__u32 res0                            ;    // default: ;
	} bits;
} dsi_pixel_ctl1_reg_t;

typedef union
{
	__u32 dwval;
	struct
	{
		__u32 dt                         :  6 ;    // default: 0;
		__u32 vc                         :  2 ;    // default: 0;
		__u32 wc                         : 16 ;    // default: 0;
		__u32 ecc                        :  8 ;    // default: 0;
	} bits;
} dsi_pixel_ph_reg_t;

typedef union
{
	__u32 dwval;
	struct
	{
		__u32 pd_tran0                   :  8 ;    // default: 0;
		__u32 res0                       :  8 ;    // default: ;
		__u32 pd_trann                   :  8 ;    // default: 0;
		__u32 res1                       :  8 ;    // default: ;
	} bits;
} dsi_pixel_pd_reg_t;

typedef union
{
	__u32 dwval;
	struct
	{
		__u32 crc_force                  : 16 ;    // default: 0;
		__u32 res0                       : 16 ;    // default: ;
	} bits;
} dsi_pixel_pf0_reg_t;

typedef union
{
	__u32 dwval;
	struct
	{
		__u32 crc_init_line0             : 16 ;    // default: 0xffff;
		__u32 crc_init_linen             : 16 ;    // default: 0xffff;
	} bits;
} dsi_pixel_pf1_reg_t;

typedef union
{
	__u32 dwval;
	struct
	{
		__u32 dt                         :  6 ;    // default: 0;
		__u32 vc                         :  2 ;    // default: 0;
		__u32 d0                         :  8 ;    // default: 0;
		__u32 d1                         :  8 ;    // default: 0;
		__u32 ecc                        :  8 ;    // default: 0;
	} bits;
} dsi_short_pkg_reg_t;

typedef union
{
	__u32 dwval;
	struct
	{
		__u32 dt                         :  6 ;    // default: 0;
		__u32 vc                         :  2 ;    // default: 0;
		__u32 wc                         :  16 ;    // default: 0;
		__u32 ecc                        :  8 ;    // default: 0;
	} bits;
} dsi_blk_pkg0_reg_t;

typedef union
{
	__u32 dwval;
	struct
	{
		__u32 pd                	     :  8 ;    // default: 0;
		__u32 res0                       :  8 ;    // default: ;
		__u32 pf                   		 : 16 ;    // default: 0;
	} bits;
} dsi_blk_pkg1_reg_t;

typedef union
{
	__u32 dwval;
	struct
	{
		__u32 line_num            	     : 16 ;    // default: 0;
		__u32 line_syncpoint             : 16 ;    // default: 0;
	} bits;
} dsi_burst_line_reg_t;

typedef union
{
	__u32 dwval;
	struct
	{
		__u32 drq_edge0            	     : 16 ;    // default: 0;
		__u32 drq_edge1		             : 16 ;    // default: 0;
	} bits;
} dsi_burst_drq_reg_t;

typedef union
{
	__u32 dwval;
	struct
	{
		__u32 tx_size                    :  8 ;    // default: 0;
		__u32 tx_status                  :  1 ;    // default: 0;
		__u32 tx_flag                    :  1 ;    // default: 0;
		__u32 res0                       :  6 ;    // default: ;
		__u32 rx_size                    :  5 ;    // default: 0;
		__u32 res1                       :  3 ;    // default: ;
		__u32 rx_status                  :  1 ;    // default: 0;
		__u32 rx_flag                    :  1 ;    // default: 0;
		__u32 rx_overflow                :  1 ;    // default: 0;
		__u32 res2                       :  5 ;    // default: ;
	} bits;
} dsi_cmd_ctl_reg_t;

typedef union
{
	__u32 dwval;
	struct
	{
		__u32 byte0						 :  8 ;    // default: 0;
		__u32 byte1                      :  8 ;    // default: 0;
		__u32 byte2                      :  8 ;    // default: 0;
		__u32 byte3                      :  8 ;    // default: 0;
	} bits;
} dsi_cmd_data_reg_t;

typedef union
{
	__u32 dwval;
	struct
	{
		__u32 video_curr_line            : 13 ;    // default: 0;
		__u32 res0                       : 19 ;    // default: ;
	} bits;
} dsi_debug0_reg_t;

typedef union
{
	__u32 dwval;
	struct
	{
		__u32 video_curr_lp2hs           : 16 ;    // default: 0;
		__u32 res0                       : 16 ;    // default: ;
	} bits;
} dsi_debug1_reg_t;

typedef union
{
	__u32 dwval;
	struct
	{
		__u32 trans_low_flag             :  1 ;    // default: 0;
		__u32 trans_fast_flag            :  1 ;    // default: 0;
		__u32 res0                       :  2 ;    // default: ;
		__u32 curr_loop_num              : 16 ;    // default: 0;
		__u32 curr_instru_num            :  3 ;    // default: 0;
		__u32 res1                       :  1 ;    // default: ;
		__u32 instru_unknow_flag         :  8 ;    // default: 0;
	} bits;
} dsi_debug2_reg_t;

typedef union
{
	__u32 dwval;
	struct
	{
		__u32 res0                       : 16 ;    // default: ;
		__u32 curr_fifo_num              : 16 ;    // default: 0;
	} bits;
} dsi_debug3_reg_t;

typedef union
{
	__u32 dwval;
	struct
	{
		__u32 test_data                  : 24 ;    // default: 0;
		__u32 res0                       :  4 ;    // default: ;
		__u32 dsi_fifo_bist_en           :  1 ;    // default: 0;
		__u32 res1                       :  3 ;    // default: ;
	} bits;
} dsi_debug4_reg_t;

typedef union
{
	__u32 dwval;
	struct
	{
		__u32 res0                       	  ;    // Default: ;
	} bits;
}dsi_reservd_reg_t;

//device define
typedef struct
{
	dsi_ctl_reg_t				dsi_gctl;					//0x000
	dsi_gint0_reg_t				dsi_gint0;					//0x004
	dsi_gint1_reg_t				dsi_gint1;					//0x008
	dsi_basic_ctl_reg_t			dsi_basic_ctl;				//0x00c
	dsi_basic_ctl0_reg_t		dsi_basic_ctl0;				//0x010
	dsi_basic_ctl1_reg_t		dsi_basic_ctl1;				//0x014
	dsi_basic_size0_reg_t		dsi_basic_size0;			//0x018
	dsi_basic_size1_reg_t		dsi_basic_size1;			//0x01c
	dsi_basic_inst0_reg_t		dsi_inst_func[8];			//0x020~0x03c
	dsi_basic_inst1_reg_t		dsi_inst_loop_sel;			//0x040
	dsi_basic_inst2_reg_t		dsi_inst_loop_num;			//0x044
	dsi_basic_inst3_reg_t		dsi_inst_jump_sel;			//0x048
	dsi_basic_inst4_reg_t		dsi_inst_jump_cfg[2];		//0x04c~0x050
	dsi_basic_inst2_reg_t		dsi_inst_loop_num2;			//0x054
	dsi_reservd_reg_t			dsi_reg058[2];				//0x058~0x05c
	dsi_basic_tran0_reg_t		dsi_trans_start;			//0x060
	dsi_reservd_reg_t			dsi_reg064[5];				//0x064~0x074
	dsi_basic_tran4_reg_t		dsi_trans_zero;				//0x078
	dsi_basic_tran5_reg_t		dsi_tcon_drq;				//0x07c
	dsi_pixel_ctl0_reg_t		dsi_pixel_ctl0;				//0x080
	dsi_pixel_ctl1_reg_t		dsi_pixel_ctl1;				//0x084
	dsi_reservd_reg_t			dsi_reg088[2];				//0x088~0x08c
	dsi_pixel_ph_reg_t			dsi_pixel_ph;				//0x090
	dsi_pixel_pd_reg_t			dsi_pixel_pd;				//0x094
	dsi_pixel_pf0_reg_t			dsi_pixel_pf0;				//0x098
	dsi_pixel_pf1_reg_t			dsi_pixel_pf1;				//0x09c
	dsi_reservd_reg_t			dsi_reg0a0[4];				//0x0a0~0x0ac
	dsi_short_pkg_reg_t			dsi_sync_hss;				//0x0b0
	dsi_short_pkg_reg_t			dsi_sync_hse;				//0x0b4
	dsi_short_pkg_reg_t			dsi_sync_vss;				//0x0b8
	dsi_short_pkg_reg_t			dsi_sync_vse;				//0x0bc
	dsi_blk_pkg0_reg_t			dsi_blk_hsa0;				//0x0c0
	dsi_blk_pkg1_reg_t			dsi_blk_hsa1;				//0x0c4
	dsi_blk_pkg0_reg_t			dsi_blk_hbp0;				//0x0c8
	dsi_blk_pkg1_reg_t			dsi_blk_hbp1;				//0x0cc
	dsi_blk_pkg0_reg_t			dsi_blk_hfp0;				//0x0d0
	dsi_blk_pkg1_reg_t			dsi_blk_hfp1;				//0x0d4
	dsi_reservd_reg_t			dsi_reg0d8[2];				//0x0d8~0x0dc
	dsi_blk_pkg0_reg_t			dsi_blk_hblk0;				//0x0e0
	dsi_blk_pkg1_reg_t			dsi_blk_hblk1;				//0x0e4
	dsi_blk_pkg0_reg_t			dsi_blk_vblk0;				//0x0e8
	dsi_blk_pkg1_reg_t			dsi_blk_vblk1;				//0x0ec
	dsi_burst_line_reg_t		dsi_burst_line;				//0x0f0
	dsi_burst_drq_reg_t			dsi_burst_drq;				//0x0f4
	dsi_reservd_reg_t			dsi_reg0f0[66];				//0x0f8~0x1fc
	dsi_cmd_ctl_reg_t			dsi_cmd_ctl;				//0x200
	dsi_reservd_reg_t			dsi_reg204[15];				//0x204~0x23c
	dsi_cmd_data_reg_t			dsi_cmd_rx[8];				//0x240~0x25c
	dsi_reservd_reg_t			dsi_reg260[32];				//0x260~0x2dc
	dsi_debug0_reg_t			dsi_debug_video0;			//0x02e0
	dsi_debug1_reg_t			dsi_debug_video1;			//0x02e4
	dsi_reservd_reg_t			dsi_reg2e8[2];				//0x2e8~0x2ec
	dsi_debug2_reg_t			dsi_debug_inst;				//0x2f0
	dsi_debug3_reg_t			dsi_debug_fifo;				//0x2f4
	dsi_debug4_reg_t			dsi_debug_data;				//0x2f8
	dsi_reservd_reg_t			dsi_reg2fc;					//0x2fc
	dsi_cmd_data_reg_t			dsi_cmd_tx[64];				//0x300
}__de_dsi_dev_t;




typedef union
{
	__u32 dwval;
	struct
	{
		__u32 module_en           :  1 ;    // default: 0;
		__u32 res0                :  3 ;    // default: ;
		__u32 lane_num            :  2 ;    // default: 0;
		__u32 res1                : 26 ;    // default: ;
	} bits;
} dphy_ctl_reg_t;

typedef union
{
	__u32 dwval;
	struct
	{
		__u32 tx_d0_force         :  1 ;    // default: 0;
		__u32 tx_d1_force         :  1 ;    // default: 0;
		__u32 tx_d2_force         :  1 ;    // default: 0;
		__u32 tx_d3_force         :  1 ;    // default: 0;
		__u32 tx_clk_force        :  1 ;    // default: 0;
		__u32 res0                :  3 ;    // default: ;
		__u32 lptx_endian         :  1 ;    // default: 0;
		__u32 hstx_endian         :  1 ;    // default: 0;
		__u32 lptx_8b9b_en        :  1 ;    // default: 0;
		__u32 hstx_8b9b_en        :  1 ;    // default: 0;
		__u32 force_lp11          :  1 ;    // default: 0;
		__u32 res1                :  3 ;    // default: ;
		__u32 ulpstx_data0_exit   :  1 ;    // default: 0;
		__u32 ulpstx_data1_exit   :  1 ;    // default: 0;
		__u32 ulpstx_data2_exit   :  1 ;    // default: 0;
		__u32 ulpstx_data3_exit   :  1 ;    // default: 0;
		__u32 ulpstx_clk_exit     :  1 ;    // default: 0;
		__u32 res2                :  3 ;    // default: ;
		__u32 hstx_data_exit      :  1 ;    // default: 0;
		__u32 hstx_clk_exit       :  1 ;    // default: 0;
		__u32 res3                :  2 ;    // default: ;
		__u32 hstx_clk_cont       :  1 ;    // default: 0;
		__u32 ulpstx_enter        :  1 ;    // default: 0;
		__u32 res4                :  2 ;    // default: ;
	} bits;
} dphy_tx_ctl_reg_t;

typedef union
{
	__u32 dwval;
	struct
	{
		__u32 res0                :  8 ;    // default: ;
		__u32 lprx_endian         :  1 ;    // default: 0;
		__u32 hsrx_endian         :  1 ;    // default: 0;
		__u32 lprx_8b9b_en        :  1 ;    // default: 0;
		__u32 hsrx_8b9b_en        :  1 ;    // default: 0;
		__u32 hsrx_sync           :  1 ;    // default: 0;
		__u32 res1                :  3 ;    // default: ;
		__u32 lprx_trnd_mask      :  4 ;    // default: 0;
		__u32 rx_d0_force         :  1 ;    // default: 0;
		__u32 rx_d1_force         :  1 ;    // default: 0;
		__u32 rx_d2_force         :  1 ;    // default: 0;
		__u32 rx_d3_force         :  1 ;    // default: 0;
		__u32 rx_clk_force        :  1 ;    // default: 0;
		__u32 res2                :  6 ;    // default: ;
		__u32 dbc_en              :  1 ;    // default: 0;
	} bits;
} dphy_rx_ctl_reg_t;

typedef union
{
	__u32 dwval;
	struct
	{
		__u32 lpx_tm_set          :  8 ;    // default: 0;
		__u32 dterm_set           :  8 ;    // default: 0;
		__u32 hs_pre_set          :  8 ;    // default: 0;
		__u32 hs_trail_set        :  8 ;    // default: 0;
	} bits;
} dphy_tx_time0_reg_t;

typedef union
{
	__u32 dwval;
	struct
	{
		__u32 ck_prep_set         :  8 ;    // default: 0;
		__u32 ck_zero_set         :  8 ;    // default: 0;
		__u32 ck_pre_set          :  8 ;    // default: 0;
		__u32 ck_post_set         :  8 ;    // default: 0;
	} bits;
} dphy_tx_time1_reg_t;

typedef union
{
	__u32 dwval;
	struct
	{
		__u32 ck_trail_set        :  8 ;    // default: 0;
		__u32 hs_dly_set          : 16 ;    // default: 0;
		__u32 res0                :  4 ;    // default: ;
		__u32 hs_dly_mode         :  1 ;    // default: 0;
		__u32 res1                :  3 ;    // default: ;
	} bits;
} dphy_tx_time2_reg_t;

typedef union
{
	__u32 dwval;
	struct
	{
		__u32 lptx_ulps_exit_set  : 20 ;    // default: 0;
		__u32 res0                : 12 ;    // default: ;
	} bits;
} dphy_tx_time3_reg_t;

typedef union
{
	__u32 dwval;
	struct
	{
		__u32 hstx_ana0_set       :  8 ;    // default: 1;
		__u32 hstx_ana1_set       :  8 ;    // default: 1;
		__u32 res0                : 16 ;    // default: ;
	} bits;
} dphy_tx_time4_reg_t;

typedef union
{
	__u32 dwval;
	struct
	{
		__u32 lprx_to_en          :  1 ;    // default: 0;
		__u32 freq_cnt_en         :  1 ;    // default: 0;
		__u32 res0                :  2 ;    // default: ;
		__u32 hsrx_clk_miss_en    :  1 ;    // default: 0;
		__u32 hsrx_sync_err_to_en :  1 ;    // default: 0;
		__u32 res1                :  2 ;    // default: ;
		__u32 lprx_to             :  8 ;    // default: 0;
		__u32 hsrx_clk_miss       :  8 ;    // default: 0;
		__u32 hsrx_sync_err_to    :  8 ;    // default: 0;
	} bits;
} dphy_rx_time0_reg_t;

typedef union
{
	__u32 dwval;
	struct
	{
		__u32 lprx_ulps_wp        : 20 ;    // default: 0;
		__u32 rx_dly              : 12 ;    // default: 0;
	} bits;
} dphy_rx_time1_reg_t;

typedef union
{
	__u32 dwval;
	struct
	{
		__u32 hsrx_ana0_set       :  8 ;    // default: 0;
		__u32 hsrx_ana1_set       :  8 ;    // default: 0;
		__u32 res0                : 16 ;    // default: ;
	} bits;
} dphy_rx_time2_reg_t;

typedef union
{
	__u32 dwval;
	struct
	{
		__u32 freq_cnt            : 16 ;    // default: 0;
		__u32 res0                :  8 ;    // default: ;
		__u32 lprst_dly           :  8 ;    // default: 0;
	} bits;
} dphy_rx_time3_reg_t;

typedef union
{
	__u32 dwval;
	struct
	{
		__u32 reg_selsck          :  1 ;    // default: 0;
		__u32 reg_rsd             :  1 ;    // default: 0;
		__u32 reg_sfb             :  2 ;    // default: 0;
		__u32 reg_plr             :  4 ;    // default: 0;
		__u32 reg_den             :  4 ;    // default: 0;
		__u32 reg_slv             :  3 ;    // default: 0;
		__u32 reg_sdiv2           :  1 ;    // default: 0;
		__u32 reg_srxck           :  4 ;    // default: 0;
		__u32 reg_srxdt           :  4 ;    // default: 0;
		__u32 reg_dmpd            :  4 ;    // default: 0;
		__u32 reg_dmpc            :  1 ;    // default: 0;
		__u32 reg_pwenc           :  1 ;    // default: 0;
		__u32 reg_pwend           :  1 ;    // default: 0;
		__u32 reg_pws             :  1 ;    // default: 0;
	} bits;
} dphy_ana0_reg_t;

typedef union
{
	__u32 dwval;
	struct
	{
		__u32 reg_stxck           :  1 ;    // default: 0;
		__u32 res0                :  3 ;    // default: ;
		__u32 reg_svdl0           :  4 ;    // default: 0;
		__u32 reg_svdl1           :  4 ;    // default: 0;
		__u32 reg_svdl2           :  4 ;    // default: 0;
		__u32 reg_svdl3           :  4 ;    // default: 0;
		__u32 reg_svdlc           :  4 ;    // default: 0;
		__u32 reg_svtt            :  4 ;    // default: 0;
		__u32 reg_csmps           :  2 ;    // default: 0;
		__u32 res1                :  1 ;    // default: ;
		__u32 reg_vttmode         :  1 ;    // default: ;
	} bits;
} dphy_ana1_reg_t;

typedef union
{
	__u32 dwval;
	struct
	{
		__u32 ana_cpu_en          :  1 ;    // default: 0;
		__u32 enib                :  1 ;    // default: 0;
		__u32 enrvs               :  1 ;    // default: 0;
		__u32 res0                :  1 ;    // default: ;
		__u32 enck_cpu            :  1 ;    // default: 0;
		__u32 entxc_cpu           :  1 ;    // default: 0;
		__u32 enckq_cpu           :  1 ;    // default: 0;
		__u32 res1                :  1 ;    // default: ;
		__u32 entx_cpu            :  4 ;    // default: 0;
		__u32 res2                :  1 ;    // default: ;
		__u32 entermc_cpu         :  1 ;    // default: 0;
		__u32 enrxc_cpu           :  1 ;    // default: 0;
		__u32 res3                :  1 ;    // default: ;
		__u32 enterm_cpu          :  4 ;    // default: 0;
		__u32 enrx_cpu            :  4 ;    // default: 0;
		__u32 enp2s_cpu           :  4 ;    // default: 0;
		__u32 res4                :  4 ;    // default: ;
	} bits;
} dphy_ana2_reg_t;

typedef union
{
	__u32 dwval;
	struct
	{
		__u32 enlptx_cpu          :  4 ;    // default: 0;
		__u32 enlprx_cpu          :  4 ;    // default: 0;
		__u32 enlpcd_cpu          :  4 ;    // default: 0;
		__u32 enlprxc_cpu         :  1 ;    // default: 0;
		__u32 enlptxc_cpu         :  1 ;    // default: 0;
		__u32 enlpcdc_cpu         :  1 ;    // default: 0;
		__u32 res0                :  1 ;    // default: ;
		__u32 entest              :  1 ;    // default: 0;
		__u32 enckdbg             :  1 ;    // default: 0;
		__u32 enldor              :  1 ;    // default: 0;
		__u32 res1                :  5 ;    // default: ;
		__u32 enldod              :  1 ;    // default: 0;
		__u32 enldoc              :  1 ;    // default: 0;
		__u32 endiv               :  1 ;    // default: 0;
		__u32 envttc              :  1 ;    // default: 0;
		__u32 envttd               :  4 ;    // default: 0;
	} bits;
} dphy_ana3_reg_t;

typedef union
{
	__u32 dwval;
	struct
	{
		__u32 reg_txpusd          :  2 ;    // default: 0;
		__u32 reg_txpusc          :  2 ;    // default: 0;
		__u32 reg_txdnsd          :  2 ;    // default: 0;
		__u32 reg_txdnsc          :  2 ;    // default: 0;
		__u32 reg_tmsd            :  2 ;    // default: 0;
		__u32 reg_tmsc            :  2 ;    // default: 0;
		__u32 reg_ckdv            :  5 ;    // default: 0;
		__u32 res0                :  3 ;    // default: ;
		__u32 reg_dmplvd		  :  4 ;
		__u32 reg_dmplvc		  :  1 ;
		__u32 res1				  :  7 ;

	} bits;
} dphy_ana4_reg_t;

typedef union
{
	__u32 dwval;
	struct
	{
		__u32 sot_d0_int          :  1 ;    // default: 0x0;
		__u32 sot_d1_int          :  1 ;    // default: 0x0;
		__u32 sot_d2_int          :  1 ;    // default: 0x0;
		__u32 sot_d3_int          :  1 ;    // default: 0x0;
		__u32 sot_err_d0_int      :  1 ;    // default: 0x0;
		__u32 sot_err_d1_int      :  1 ;    // default: 0x0;
		__u32 sot_err_d2_int      :  1 ;    // default: 0x0;
		__u32 sot_err_d3_int      :  1 ;    // default: 0x0;
		__u32 sot_sync_err_d0_int :  1 ;    // default: 0x0;
		__u32 sot_sync_err_d1_int :  1 ;    // default: 0x0;
		__u32 sot_sync_err_d2_int :  1 ;    // default: 0x0;
		__u32 sot_sync_err_d3_int :  1 ;    // default: 0x0;
		__u32 rx_alg_err_d0_int   :  1 ;    // default: 0x0;
		__u32 rx_alg_err_d1_int   :  1 ;    // default: 0x0;
		__u32 rx_alg_err_d2_int   :  1 ;    // default: 0x0;
		__u32 rx_alg_err_d3_int   :  1 ;    // default: 0x0;
		__u32 res0                :  6 ;    // default: ;
		__u32 cd_lp0_err_clk_int  :  1 ;    // default: 0x0;
		__u32 cd_lp1_err_clk_int  :  1 ;    // default: 0x0;
		__u32 cd_lp0_err_d0_int   :  1 ;    // default: 0x0;
		__u32 cd_lp1_err_d0_int   :  1 ;    // default: 0x0;
		__u32 cd_lp0_err_d1_int   :  1 ;    // default: 0x0;
		__u32 cd_lp1_err_d1_int   :  1 ;    // default: 0x0;
		__u32 cd_lp0_err_d2_int   :  1 ;    // default: 0x0;
		__u32 cd_lp1_err_d2_int   :  1 ;    // default: 0x0;
		__u32 cd_lp0_err_d3_int   :  1 ;    // default: 0x0;
		__u32 cd_lp1_err_d3_int   :  1 ;    // default: 0x0;
	} bits;
} dphy_int_en0_reg_t;

typedef union
{
	__u32 dwval;
	struct
	{
		__u32 ulps_d0_int         :  1 ;    // default: 0x0;
		__u32 ulps_d1_int         :  1 ;    // default: 0x0;
		__u32 ulps_d2_int         :  1 ;    // default: 0x0;
		__u32 ulps_d3_int         :  1 ;    // default: 0x0;
		__u32 ulps_wp_d0_int      :  1 ;    // default: 0x0;
		__u32 ulps_wp_d1_int      :  1 ;    // default: 0x0;
		__u32 ulps_wp_d2_int      :  1 ;    // default: 0x0;
		__u32 ulps_wp_d3_int      :  1 ;    // default: 0x0;
		__u32 ulps_clk_int        :  1 ;    // default: 0x0;
		__u32 ulps_wp_clk_int     :  1 ;    // default: 0x0;
		__u32 res0                :  2 ;    // default: ;
		__u32 lpdt_d0_int         :  1 ;    // default: 0x0;
		__u32 rx_trnd_d0_int      :  1 ;    // default: 0x0;
		__u32 tx_trnd_err_d0_int  :  1 ;    // default: 0x0;
		__u32 undef1_d0_int       :  1 ;    // default: 0x0;
		__u32 undef2_d0_int       :  1 ;    // default: 0x0;
		__u32 undef3_d0_int       :  1 ;    // default: 0x0;
		__u32 undef4_d0_int       :  1 ;    // default: 0x0;
		__u32 undef5_d0_int       :  1 ;    // default: 0x0;
		__u32 rst_d0_int          :  1 ;    // default: 0x0;
		__u32 rst_d1_int          :  1 ;    // default: 0x0;
		__u32 rst_d2_int          :  1 ;    // default: 0x0;
		__u32 rst_d3_int          :  1 ;    // default: 0x0;
		__u32 esc_cmd_err_d0_int  :  1 ;    // default: 0x0;
		__u32 esc_cmd_err_d1_int  :  1 ;    // default: 0x0;
		__u32 esc_cmd_err_d2_int  :  1 ;    // default: 0x0;
		__u32 esc_cmd_err_d3_int  :  1 ;    // default: 0x0;
		__u32 false_ctl_d0_int    :  1 ;    // default: 0x0;
		__u32 false_ctl_d1_int    :  1 ;    // default: 0x0;
		__u32 false_ctl_d2_int    :  1 ;    // default: 0x0;
		__u32 false_ctl_d3_int    :  1 ;    // default: 0x0;
	} bits;
} dphy_int_en1_reg_t;

typedef union
{
	__u32 dwval;
	struct
	{
		__u32 res0                     ;    // default: ;
	} bits;
} dphy_int_en2_reg_t;

typedef union
{
	__u32 dwval;
	struct
	{
		__u32 sot_d0_pd           :  1 ;    // default: 0x0;
		__u32 sot_d1_pd           :  1 ;    // default: 0x0;
		__u32 sot_d2_pd           :  1 ;    // default: 0x0;
		__u32 sot_d3_pd           :  1 ;    // default: 0x0;
		__u32 sot_err_d0_pd       :  1 ;    // default: 0x0;
		__u32 sot_err_d1_pd       :  1 ;    // default: 0x0;
		__u32 sot_err_d2_pd       :  1 ;    // default: 0x0;
		__u32 sot_err_d3_pd       :  1 ;    // default: 0x0;
		__u32 sot_sync_err_d0_pd  :  1 ;    // default: 0x0;
		__u32 sot_sync_err_d1_pd  :  1 ;    // default: 0x0;
		__u32 sot_sync_err_d2_pd  :  1 ;    // default: 0x0;
		__u32 sot_sync_err_d3_pd  :  1 ;    // default: 0x0;
		__u32 rx_alg_err_d0_pd    :  1 ;    // default: 0x0;
		__u32 rx_alg_err_d1_pd    :  1 ;    // default: 0x0;
		__u32 rx_alg_err_d2_pd    :  1 ;    // default: 0x0;
		__u32 rx_alg_err_d3_pd    :  1 ;    // default: 0x0;
		__u32 res0                :  6 ;    // default: ;
		__u32 cd_lp0_err_clk_pd   :  1 ;    // default: 0x0;
		__u32 cd_lp1_err_clk_pd   :  1 ;    // default: 0x0;
		__u32 cd_lp0_err_d1_pd    :  1 ;    // default: 0x0;
		__u32 cd_lp1_err_d1_pd    :  1 ;    // default: 0x0;
		__u32 cd_lp0_err_d0_pd    :  1 ;    // default: 0x0;
		__u32 cd_lp1_err_d0_pd    :  1 ;    // default: 0x0;
		__u32 cd_lp0_err_d2_pd    :  1 ;    // default: 0x0;
		__u32 cd_lp1_err_d2_pd    :  1 ;    // default: 0x0;
		__u32 cd_lp0_err_d3_pd    :  1 ;    // default: 0x0;
		__u32 cd_lp1_err_d3_pd    :  1 ;    // default: 0x0;
	} bits;
} dphy_int_pd0_reg_t;

typedef union
{
	__u32 dwval;
	struct
	{
		__u32 ulps_d0_pd          :  1 ;    // default: 0x0;
		__u32 ulps_d1_pd          :  1 ;    // default: 0x0;
		__u32 ulps_d2_pd          :  1 ;    // default: 0x0;
		__u32 ulps_d3_pd          :  1 ;    // default: 0x0;
		__u32 ulps_wp_d0_pd       :  1 ;    // default: 0x0;
		__u32 ulps_wp_d1_pd       :  1 ;    // default: 0x0;
		__u32 ulps_wp_d2_pd       :  1 ;    // default: 0x0;
		__u32 ulps_wp_d3_pd       :  1 ;    // default: 0x0;
		__u32 ulps_clk_pd         :  1 ;    // default: 0x0;
		__u32 ulps_wp_clk_pd      :  1 ;    // default: 0x0;
		__u32 res0                :  2 ;    // default: ;
		__u32 lpdt_d0_pd          :  1 ;    // default: 0x0;
		__u32 rx_trnd_d0_pd       :  1 ;    // default: 0x0;
		__u32 tx_trnd_err_d0_pd   :  1 ;    // default: 0x0;
		__u32 undef1_d0_pd        :  1 ;    // default: 0x0;
		__u32 undef2_d0_pd        :  1 ;    // default: 0x0;
		__u32 undef3_d0_pd        :  1 ;    // default: 0x0;
		__u32 undef4_d0_pd        :  1 ;    // default: 0x0;
		__u32 undef5_d0_pd        :  1 ;    // default: 0x0;
		__u32 rst_d0_pd           :  1 ;    // default: 0x0;
		__u32 rst_d1_pd           :  1 ;    // default: 0x0;
		__u32 rst_d2_pd           :  1 ;    // default: 0x0;
		__u32 rst_d3_pd           :  1 ;    // default: 0x0;
		__u32 esc_cmd_err_d0_pd   :  1 ;    // default: 0x0;
		__u32 esc_cmd_err_d1_pd   :  1 ;    // default: 0x0;
		__u32 esc_cmd_err_d2_pd   :  1 ;    // default: 0x0;
		__u32 esc_cmd_err_d3_pd   :  1 ;    // default: 0x0;
		__u32 false_ctl_d0_pd     :  1 ;    // default: 0x0;
		__u32 false_ctl_d1_pd     :  1 ;    // default: 0x0;
		__u32 false_ctl_d2_pd     :  1 ;    // default: 0x0;
		__u32 false_ctl_d3_pd     :  1 ;    // default: 0x0;
	} bits;
} dphy_int_pd1_reg_t;

typedef union
{
	__u32 dwval;
	struct
	{
		__u32 res0                     ;    // default: ;
	} bits;
} dphy_int_pd2_reg_t;

typedef union
{
	__u32 dwval;
	struct
	{
		__u32 lptx_sta_d0         :  3 ;    // default: 0;
		__u32 res0                :  1 ;    // default: ;
		__u32 lptx_sta_d1         :  3 ;    // default: 0;
		__u32 res1                :  1 ;    // default: ;
		__u32 lptx_sta_d2         :  3 ;    // default: 0;
		__u32 res2                :  1 ;    // default: ;
		__u32 lptx_sta_d3         :  3 ;    // default: 0;
		__u32 res3                :  1 ;    // default: ;
		__u32 lptx_sta_clk        :  3 ;    // default: 0;
		__u32 res4                :  9 ;    // default: ;
		__u32 direction           :  1 ;    // default: 0;
		__u32 res5                :  3 ;    // default: ;
	} bits;
} dphy_dbg0_reg_t;

typedef union
{
	__u32 dwval;
	struct
	{
		__u32 lptx_dbg_en         :  1 ;    // default: 0;
		__u32 hstx_dbg_en         :  1 ;    // default: 0;
		__u32 res0                :  2 ;    // default: ;
		__u32 lptx_set_d0         :  2 ;    // default: 0;
		__u32 lptx_set_d1         :  2 ;    // default: 0;
		__u32 lptx_set_d2         :  2 ;    // default: 0;
		__u32 lptx_set_d3         :  2 ;    // default: 0;
		__u32 lptx_set_ck         :  2 ;    // default: 0;
		__u32 res1                : 18 ;    // default: ;
	} bits;
} dphy_dbg1_reg_t;

typedef union
{
	__u32 dwval;
	struct
	{
		__u32 hstx_data                ;    // default: 0;
	} bits;
} dphy_dbg2_reg_t;

typedef union
{
	__u32 dwval;
	struct
	{
		__u32 lprx_sta_d0         :  4 ;    // default: 0;
		__u32 lprx_sta_d1         :  4 ;    // default: 0;
		__u32 lprx_sta_d2         :  4 ;    // default: 0;
		__u32 lprx_sta_d3         :  4 ;    // default: 0;
		__u32 lprx_sta_clk        :  4 ;    // default: 0;
		__u32 res0                : 12 ;    // default: ;
	} bits;
} dphy_dbg3_reg_t;

typedef union
{
	__u32 dwval;
	struct
	{
		__u32 lprx_phy_d0         :  2 ;    // default: 0;
		__u32 lprx_phy_d1         :  2 ;    // default: 0;
		__u32 lprx_phy_d2         :  2 ;    // default: 0;
		__u32 lprx_phy_d3         :  2 ;    // default: 0;
		__u32 lprx_phy_clk        :  2 ;    // default: 0;
		__u32 res0                :  6 ;    // default: ;
		__u32 lpcd_phy_d0         :  2 ;    // default: 0;
		__u32 lpcd_phy_d1         :  2 ;    // default: 0;
		__u32 lpcd_phy_d2         :  2 ;    // default: 0;
		__u32 lpcd_phy_d3         :  2 ;    // default: 0;
		__u32 lpcd_phy_clk        :  2 ;    // default: 0;
		__u32 res1                :  6 ;    // default: ;
	} bits;
} dphy_dbg4_reg_t;

typedef union
{
	__u32 dwval;
	struct
	{
		__u32 hsrx_data                ;    // default: 0;
	} bits;
} dphy_dbg5_reg_t;


typedef union
{
	__u32 dwval;
	struct
	{
		__u32 res0                      ;    // Default: ;
	} bits;
}dphy_reservd_reg_t;

//device define
typedef struct
{
	dphy_ctl_reg_t					dphy_gctl;			//0x000
	dphy_tx_ctl_reg_t				dphy_tx_ctl;		//0x004
	dphy_rx_ctl_reg_t				dphy_rx_ctl;		//0x008
	dphy_reservd_reg_t				dphy_reg00c;		//0x00c
	dphy_tx_time0_reg_t				dphy_tx_time0;		//0x010
	dphy_tx_time1_reg_t				dphy_tx_time1;		//0x014
	dphy_tx_time2_reg_t				dphy_tx_time2;		//0x018
	dphy_tx_time3_reg_t				dphy_tx_time3;		//0x01c
	dphy_tx_time4_reg_t				dphy_tx_time4;		//0x020
	dphy_reservd_reg_t				dphy_reg024[3];		//0x024~0x02c
	dphy_rx_time0_reg_t				dphy_rx_time0;		//0x030
	dphy_rx_time1_reg_t				dphy_rx_time1;		//0x034
	dphy_rx_time2_reg_t				dphy_rx_time2;		//0x038
	dphy_reservd_reg_t				dphy_reg03c;		//0x03c
	dphy_rx_time3_reg_t				dphy_rx_time3;		//0x040
	dphy_reservd_reg_t				dphy_reg044[2];		//0x044~0x048
	dphy_ana0_reg_t					dphy_ana0;			//0x04c
	dphy_ana1_reg_t					dphy_ana1;			//0x050
	dphy_ana2_reg_t					dphy_ana2;			//0x054
	dphy_ana3_reg_t					dphy_ana3;			//0x058
	dphy_ana4_reg_t					dphy_ana4;			//0x05c
	dphy_int_en0_reg_t				dphy_int_en0;		//0x060
	dphy_int_en1_reg_t				dphy_int_en1;		//0x064
	dphy_int_en2_reg_t				dphy_int_en2;		//0x068
	dphy_reservd_reg_t				dphy_reg06c;		//0x06c
	dphy_int_pd0_reg_t				dphy_int_pd0;		//0x070
	dphy_int_pd1_reg_t				dphy_int_pd1;		//0x074
	dphy_int_pd2_reg_t				dphy_int_pd2;		//0x078
	dphy_reservd_reg_t				dphy_reg07c[25];	//0x07c~0x0dc
	dphy_dbg0_reg_t					dphy_dbg0;			//0xe0
	dphy_dbg1_reg_t					dphy_dbg1;			//0xe4
	dphy_dbg2_reg_t					dphy_dbg2;			//0xe8
	dphy_dbg3_reg_t					dphy_dbg3;			//0xec
	dphy_dbg4_reg_t					dphy_dbg4;			//0xf0
	dphy_dbg5_reg_t					dphy_dbg5;			//0xf4
}__de_dsi_dphy_dev_t;





typedef union
{
	struct
	{
		__u32 byte012                    : 24 ;    // default: 0;
		__u32 byte3                    	 :  8 ;    // default: 0;
	}bytes;
	struct
	{
		__u32 bit00                    	 :  1 ;    // default: 0;
		__u32 bit01                    	 :  1 ;    // default: 0;
		__u32 bit02                    	 :  1 ;    // default: 0;
		__u32 bit03                    	 :  1 ;    // default: 0;
		__u32 bit04                    	 :  1 ;    // default: 0;
		__u32 bit05                    	 :  1 ;    // default: 0;
		__u32 bit06                    	 :  1 ;    // default: 0;
		__u32 bit07                    	 :  1 ;    // default: 0;
		__u32 bit08                    	 :  1 ;    // default: 0;
		__u32 bit09                    	 :  1 ;    // default: 0;
		__u32 bit10                    	 :  1 ;    // default: 0;
		__u32 bit11                    	 :  1 ;    // default: 0;
		__u32 bit12                    	 :  1 ;    // default: 0;
		__u32 bit13                    	 :  1 ;    // default: 0;
		__u32 bit14                    	 :  1 ;    // default: 0;
		__u32 bit15                    	 :  1 ;    // default: 0;
		__u32 bit16                    	 :  1 ;    // default: 0;
		__u32 bit17                    	 :  1 ;    // default: 0;
		__u32 bit18                    	 :  1 ;    // default: 0;
		__u32 bit19                    	 :  1 ;    // default: 0;
		__u32 bit20                    	 :  1 ;    // default: 0;
		__u32 bit21                    	 :  1 ;    // default: 0;
		__u32 bit22                    	 :  1 ;    // default: 0;
		__u32 bit23                    	 :  1 ;    // default: 0;
		__u32 bit24                    	 :  1 ;    // default: 0;
		__u32 bit25                    	 :  1 ;    // default: 0;
		__u32 bit26                    	 :  1 ;    // default: 0;
		__u32 bit27                    	 :  1 ;    // default: 0;
		__u32 bit28                    	 :  1 ;    // default: 0;
		__u32 bit29                    	 :  1 ;    // default: 0;
		__u32 bit30                    	 :  1 ;    // default: 0;
		__u32 bit31                    	 :  1 ;    // default: 0;
	} bits;
} dsi_ph_t;


typedef enum
{
    //Processor to Peripheral Direction (Processor-Sourced) Packet Data Types
    DSI_DT_VSS                  = 0x01,
    DSI_DT_VSE                  = 0x11,
    DSI_DT_HSS                  = 0x21,
    DSI_DT_HSE                  = 0x31,
    DSI_DT_EOT                  = 0x08,
    DSI_DT_CM_OFF               = 0x02,
    DSI_DT_CM_ON                = 0x12,
    DSI_DT_SHUT_DOWN            = 0x22,
    DSI_DT_TURN_ON              = 0x32,
    DSI_DT_GEN_WR_P0            = 0x03,
    DSI_DT_GEN_WR_P1            = 0x13,
    DSI_DT_GEN_WR_P2            = 0x23,
    DSI_DT_GEN_RD_P0            = 0x04,
    DSI_DT_GEN_RD_P1            = 0x14,
    DSI_DT_GEN_RD_P2            = 0x24,
    DSI_DT_DCS_WR_P0            = 0x05,
    DSI_DT_DCS_WR_P1            = 0x15,
    DSI_DT_DCS_RD_P0            = 0x06,
    DSI_DT_MAX_RET_SIZE         = 0x37,
    DSI_DT_NULL                 = 0x09,
    DSI_DT_BLK                  = 0x19,
    DSI_DT_GEN_LONG_WR          = 0x29,
    DSI_DT_DCS_LONG_WR          = 0x39,
    DSI_DT_PIXEL_RGB565         = 0x0E,
    DSI_DT_PIXEL_RGB666P        = 0x1E,
    DSI_DT_PIXEL_RGB666         = 0x2E,
    DSI_DT_PIXEL_RGB888         = 0x3E,

    //Data Types for Peripheral-sourced Packets
    DSI_DT_ACK_ERR              = 0x02,
    DSI_DT_EOT_PERI             = 0x08,
    DSI_DT_GEN_RD_R1            = 0x11,
    DSI_DT_GEN_RD_R2            = 0x12,
    DSI_DT_GEN_LONG_RD_R        = 0x1A,
    DSI_DT_DCS_LONG_RD_R        = 0x1C,
    DSI_DT_DCS_RD_R1            = 0x21,
    DSI_DT_DCS_RD_R2            = 0x22,
}__dsi_dt_t;

typedef enum
{
	DSI_DCS_ENTER_IDLE_MODE				=	0x39 ,			//01
	DSI_DCS_ENTER_INVERT_MODE			=	0x21 ,			//02
	DSI_DCS_ENTER_NORMAL_MODE			=	0x13 ,			//03
	DSI_DCS_ENTER_PARTIAL_MODE			=	0x12 ,			//04
	DSI_DCS_ENTER_SLEEP_MODE			=	0x10 ,			//05
	DSI_DCS_EXIT_IDLE_MODE				=	0x38 ,			//06
	DSI_DCS_EXIT_INVERT_MODE			=	0x20 ,			//07
	DSI_DCS_EXIT_SLEEP_MODE				=	0x11 ,			//08
	DSI_DCS_GET_ADDRESS_MODE			=	0x0b ,			//09
	DSI_DCS_GET_BLUE_CHANNEL			=	0x08 ,			//10
	DSI_DCS_GET_DIAGNOSTIC_RESULT		=	0x0f ,			//11
	DSI_DCS_GET_DISPLAY_MODE			=	0x0d ,			//12
	DSI_DCS_GET_GREEN_CHANNEL			=	0x07 ,			//13
	DSI_DCS_GET_PIXEL_FORMAT			=	0x0c ,			//14
	DSI_DCS_GET_POWER_MODE				=	0x0a ,			//15
	DSI_DCS_GET_RED_CHANNEL				=	0x06 ,			//16
	DSI_DCS_GET_SCANLINE				=	0x45 ,			//17
	DSI_DCS_GET_SIGNAL_MODE				=	0x0e ,			//18
	DSI_DCS_NOP							=	0x00 ,			//19
	DSI_DCS_READ_DDB_CONTINUE			=	0xa8 ,			//20
	DSI_DCS_READ_DDB_START				=	0xa1 ,			//21
	DSI_DCS_READ_MEMORY_CONTINUE		=	0x3e ,			//22
	DSI_DCS_READ_MEMORY_START			=	0x2e ,			//23
	DSI_DCS_SET_ADDRESS_MODE			=	0x36 ,			//24
	DSI_DCS_SET_COLUMN_ADDRESS			=	0x2a ,			//25
	DSI_DCS_SET_DISPLAY_OFF				=	0x28 ,			//26
	DSI_DCS_SET_DISPLAY_ON				=	0x29 ,			//27
	DSI_DCS_SET_GAMMA_CURVE				=	0x26 ,			//28
	DSI_DCS_SET_PAGE_ADDRESS			=	0x2b ,			//29
	DSI_DCS_SET_PARTIAL_AREA			=	0x30 ,			//30
	DSI_DCS_SET_PIXEL_FORMAT			=	0x3a ,			//31
	DSI_DCS_SET_SCROLL_AREA				=	0x33 ,			//32
	DSI_DCS_SET_SCROLL_START			=	0x37 ,			//33
	DSI_DCS_SET_TEAR_OFF				=	0x34 ,			//34
	DSI_DCS_SET_TEAR_ON					=	0x35 ,			//35
	DSI_DCS_SET_TEAR_SCANLINE			=	0x44 ,			//36
	DSI_DCS_SOFT_RESET					=	0x01 ,			//37
	DSI_DCS_WRITE_LUT					=	0x2d ,			//38
	DSI_DCS_WRITE_MEMORY_CONTINUE		=	0x3c ,			//39
	DSI_DCS_WRITE_MEMORY_START			=	0x2c ,			//40
}__dsi_dcs_t;

typedef enum
{
	DSI_START_LP11				= 0,
	DSI_START_TBA				= 1,
	DSI_START_HSTX				= 2,
	DSI_START_LPTX				= 3,
	DSI_START_LPRX				= 4,
	DSI_START_HSC         = 5,
	DSI_START_HSD         = 6,
}__dsi_start_t;

typedef enum
{
	DSI_INST_ID_LP11			= 0,
	DSI_INST_ID_TBA				= 1,
	DSI_INST_ID_HSC				= 2,
	DSI_INST_ID_HSD				= 3,
	DSI_INST_ID_LPDT			= 4,
	DSI_INST_ID_HSCEXIT			= 5,
	DSI_INST_ID_NOP				= 6,
	DSI_INST_ID_DLY				= 7,
	DSI_INST_ID_END				= 15,
}__dsi_inst_id_t;

typedef enum
{
	DSI_INST_MODE_STOP			= 0,
	DSI_INST_MODE_TBA			= 1,
	DSI_INST_MODE_HS			= 2,
	DSI_INST_MODE_ESCAPE		= 3,
	DSI_INST_MODE_HSCEXIT		= 4,
	DSI_INST_MODE_NOP			= 5,
}__dsi_inst_mode_t;

typedef enum
{
	DSI_INST_ESCA_LPDT			= 0,
	DSI_INST_ESCA_ULPS			= 1,
	DSI_INST_ESCA_UN1			= 2,
	DSI_INST_ESCA_UN2			= 3,
	DSI_INST_ESCA_RESET			= 4,
	DSI_INST_ESCA_UN3			= 5,
	DSI_INST_ESCA_UN4			= 6,
	DSI_INST_ESCA_UN5			= 7,
}__dsi_inst_escape_t;

typedef enum
{
	DSI_INST_PACK_PIXEL			= 0,
	DSI_INST_PACK_COMMAND		= 1,
}__dsi_inst_packet_t;



__u8 	dsi_ecc_pro(__u32 dsi_ph);
__u16 	dsi_crc_pro(__u8* pd_p,__u32 pd_bytes);
__u16 	dsi_crc_pro_pd_repeat(__u8 pd,__u32 pd_bytes);
//__s32 	dsi_dphy_init(__u32 sel,__panel_para_t * panel);
//__s32 	dsi_inst_init(__u32 sel,__panel_para_t * panel);
//__s32 	dsi_packet_init(__u32 sel,__panel_para_t * panel);


#endif
