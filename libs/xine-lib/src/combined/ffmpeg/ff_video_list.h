#ifndef AV_VERSION_INT
# define AV_VERSION_INT(a,b,c) 0x7FFFFFFF
#endif
static const ff_codec_t ff_video_lookup[] = {
  { BUF_VIDEO_MSMPEG4_V1, CODEC_ID_MSMPEG4V1, "Microsoft MPEG-4 v1 (ffmpeg)" },
  { BUF_VIDEO_MSMPEG4_V2, CODEC_ID_MSMPEG4V2, "Microsoft MPEG-4 v2 (ffmpeg)" },
  { BUF_VIDEO_MSMPEG4_V3, CODEC_ID_MSMPEG4V3, "Microsoft MPEG-4 v3 (ffmpeg)" },
  { BUF_VIDEO_WMV7, CODEC_ID_WMV1, "MS Windows Media Video 7 (ffmpeg)" },
  { BUF_VIDEO_WMV8, CODEC_ID_WMV2, "MS Windows Media Video 8 (ffmpeg)" },
  { BUF_VIDEO_WMV9, CODEC_ID_WMV3, "MS Windows Media Video 9 (ffmpeg)" },
  { BUF_VIDEO_VC1, CODEC_ID_VC1, "MS Windows Media Video VC-1 (ffmpeg)" },
  { BUF_VIDEO_MPEG4, CODEC_ID_MPEG4, "ISO MPEG-4 (ffmpeg)" },
  { BUF_VIDEO_XVID, CODEC_ID_MPEG4, "ISO MPEG-4 (XviD) (ffmpeg)" },
  { BUF_VIDEO_DIVX5, CODEC_ID_MPEG4, "ISO MPEG-4 (DivX5) (ffmpeg)" },
  { BUF_VIDEO_3IVX, CODEC_ID_MPEG4, "ISO MPEG-4 (3ivx) (ffmpeg)" },
  { BUF_VIDEO_JPEG, CODEC_ID_MJPEG, "Motion JPEG (ffmpeg)" },
  { BUF_VIDEO_MJPEG, CODEC_ID_MJPEG, "Motion JPEG (ffmpeg)" },
  { BUF_VIDEO_MJPEG_B, CODEC_ID_MJPEGB, "Motion JPEG B (ffmpeg)" },
  { BUF_VIDEO_I263, CODEC_ID_H263I, "ITU H.263 (ffmpeg)" },
  { BUF_VIDEO_H263, CODEC_ID_H263, "H.263 (ffmpeg)" },
  { BUF_VIDEO_RV10, CODEC_ID_RV10, "Real Video 1.0 (ffmpeg)" },
  { BUF_VIDEO_RV20, CODEC_ID_RV20, "Real Video 2.0 (ffmpeg)" },
  { BUF_VIDEO_RV30, CODEC_ID_RV30, "Real Video 3.0 (ffmpeg)" },
  { BUF_VIDEO_RV40, CODEC_ID_RV40, "Real Video 4.0 (ffmpeg)" },
  { BUF_VIDEO_IV31, CODEC_ID_INDEO3, "Indeo Video 3.1 (ffmpeg)" },
  { BUF_VIDEO_IV32, CODEC_ID_INDEO3, "Indeo Video 3.2 (ffmpeg)" },
  { BUF_VIDEO_SORENSON_V1, CODEC_ID_SVQ1, "Sorenson Video 1 (ffmpeg)" },
  { BUF_VIDEO_SORENSON_V3, CODEC_ID_SVQ3, "Sorenson Video 3 (ffmpeg)" },
  { BUF_VIDEO_DV, CODEC_ID_DVVIDEO, "DV (ffmpeg)" },
  { BUF_VIDEO_HUFFYUV, CODEC_ID_HUFFYUV, "HuffYUV (ffmpeg)" },
  { BUF_VIDEO_VP31, CODEC_ID_VP3, "On2 VP3.1 (ffmpeg)" },
  { BUF_VIDEO_VP5, CODEC_ID_VP5, "On2 VP5 (ffmpeg)" },
  { BUF_VIDEO_VP6, CODEC_ID_VP6, "On2 VP6 (ffmpeg)" },
  { BUF_VIDEO_VP6F, CODEC_ID_VP6F, "On2 VP6 (ffmpeg)" },
  { BUF_VIDEO_VP8, CODEC_ID_VP8, "On2 VP8 (ffmpeg)" },
  { BUF_VIDEO_4XM, CODEC_ID_4XM, "4X Video (ffmpeg)" },
  { BUF_VIDEO_CINEPAK, CODEC_ID_CINEPAK, "Cinepak (ffmpeg)" },
  { BUF_VIDEO_MSVC, CODEC_ID_MSVIDEO1, "Microsoft Video 1 (ffmpeg)" },
  { BUF_VIDEO_MSRLE, CODEC_ID_MSRLE, "Microsoft RLE (ffmpeg)" },
  { BUF_VIDEO_RPZA, CODEC_ID_RPZA, "Apple Quicktime Video/RPZA (ffmpeg)" },
  { BUF_VIDEO_CYUV, CODEC_ID_CYUV, "Creative YUV (ffmpeg)" },
  { BUF_VIDEO_ROQ, CODEC_ID_ROQ, "Id Software RoQ (ffmpeg)" },
  { BUF_VIDEO_IDCIN, CODEC_ID_IDCIN, "Id Software CIN (ffmpeg)" },
  { BUF_VIDEO_WC3, CODEC_ID_XAN_WC3, "Xan (ffmpeg)" },
  { BUF_VIDEO_VQA, CODEC_ID_WS_VQA, "Westwood Studios VQA (ffmpeg)" },
  { BUF_VIDEO_INTERPLAY, CODEC_ID_INTERPLAY_VIDEO, "Interplay MVE (ffmpeg)" },
  { BUF_VIDEO_FLI, CODEC_ID_FLIC, "FLIC Video (ffmpeg)" },
  { BUF_VIDEO_8BPS, CODEC_ID_8BPS, "Planar RGB (ffmpeg)" },
  { BUF_VIDEO_SMC, CODEC_ID_SMC, "Apple Quicktime Graphics/SMC (ffmpeg)" },
  { BUF_VIDEO_DUCKTM1, CODEC_ID_TRUEMOTION1, "Duck TrueMotion v1 (ffmpeg)" },
  { BUF_VIDEO_DUCKTM2, CODEC_ID_TRUEMOTION2, "Duck TrueMotion v2 (ffmpeg)" },
  { BUF_VIDEO_VMD, CODEC_ID_VMDVIDEO, "Sierra VMD Video (ffmpeg)" },
  { BUF_VIDEO_ZLIB, CODEC_ID_ZLIB, "ZLIB Video (ffmpeg)" },
  { BUF_VIDEO_MSZH, CODEC_ID_MSZH, "MSZH Video (ffmpeg)" },
  { BUF_VIDEO_ASV1, CODEC_ID_ASV1, "ASV v1 Video (ffmpeg)" },
  { BUF_VIDEO_ASV2, CODEC_ID_ASV2, "ASV v2 Video (ffmpeg)" },
  { BUF_VIDEO_ATIVCR1, CODEC_ID_VCR1, "ATI VCR-1 (ffmpeg)" },
  { BUF_VIDEO_FLV1, CODEC_ID_FLV1, "Flash Video (ffmpeg)" },
  { BUF_VIDEO_QTRLE, CODEC_ID_QTRLE, "Apple Quicktime Animation/RLE (ffmpeg)" },
  { BUF_VIDEO_H264, CODEC_ID_H264, "H.264/AVC (ffmpeg)" },
  { BUF_VIDEO_H261, CODEC_ID_H261, "H.261 (ffmpeg)" },
  { BUF_VIDEO_AASC, CODEC_ID_AASC, "Autodesk Video (ffmpeg)" },
  { BUF_VIDEO_LOCO, CODEC_ID_LOCO, "LOCO (ffmpeg)" },
  { BUF_VIDEO_QDRW, CODEC_ID_QDRAW, "QuickDraw (ffmpeg)" },
  { BUF_VIDEO_QPEG, CODEC_ID_QPEG, "Q-Team QPEG (ffmpeg)" },
  { BUF_VIDEO_TSCC, CODEC_ID_TSCC, "TechSmith Video (ffmpeg)" },
  { BUF_VIDEO_ULTI, CODEC_ID_ULTI, "IBM UltiMotion (ffmpeg)" },
  { BUF_VIDEO_WNV1, CODEC_ID_WNV1, "Winnow Video (ffmpeg)" },
  { BUF_VIDEO_XL, CODEC_ID_VIXL, "Miro/Pinnacle VideoXL (ffmpeg)" },
  { BUF_VIDEO_RT21, CODEC_ID_INDEO2, "Indeo/RealTime 2 (ffmpeg)" },
  { BUF_VIDEO_FPS1, CODEC_ID_FRAPS, "Fraps (ffmpeg)" },
  { BUF_VIDEO_MPEG, CODEC_ID_MPEG1VIDEO, "MPEG 1/2 (ffmpeg)" },
  { BUF_VIDEO_CSCD, CODEC_ID_CSCD, "CamStudio (ffmpeg)" },
  { BUF_VIDEO_AVS, CODEC_ID_AVS, "AVS (ffmpeg)" },
  { BUF_VIDEO_ALGMM, CODEC_ID_MMVIDEO, "American Laser Games MM (ffmpeg)" },
  { BUF_VIDEO_ZMBV, CODEC_ID_ZMBV, "Zip Motion Blocks Video (ffmpeg)" },
  { BUF_VIDEO_SMACKER, CODEC_ID_SMACKVIDEO, "Smacker (ffmpeg)" },
  { BUF_VIDEO_NUV, CODEC_ID_NUV, "NuppelVideo (ffmpeg)" },
  { BUF_VIDEO_KMVC, CODEC_ID_KMVC, "Karl Morton's Video Codec (ffmpeg)" },
  { BUF_VIDEO_FLASHSV, CODEC_ID_FLASHSV, "Flash Screen Video (ffmpeg)" },
  { BUF_VIDEO_CAVS, CODEC_ID_CAVS, "Chinese AVS (ffmpeg)" },
  { BUF_VIDEO_VMNC, CODEC_ID_VMNC, "VMware Screen Codec (ffmpeg)" },
  { BUF_VIDEO_THEORA_RAW, CODEC_ID_THEORA, "Theora (ffmpeg)" },
  { BUF_VIDEO_SNOW, CODEC_ID_SNOW, "Snow (ffmpeg)" },
};

static uint32_t supported_video_types[] = {
  BUF_VIDEO_MSMPEG4_V1,
  BUF_VIDEO_MSMPEG4_V2,
  BUF_VIDEO_MSMPEG4_V3,
  BUF_VIDEO_WMV7,
  BUF_VIDEO_WMV8,
  BUF_VIDEO_WMV9,
  BUF_VIDEO_VC1,
  BUF_VIDEO_MPEG4,
  BUF_VIDEO_XVID,
  BUF_VIDEO_DIVX5,
  BUF_VIDEO_3IVX,
  BUF_VIDEO_JPEG,
  BUF_VIDEO_MJPEG,
  BUF_VIDEO_MJPEG_B,
  BUF_VIDEO_I263,
  BUF_VIDEO_H263,
  BUF_VIDEO_RV10,
  BUF_VIDEO_RV20,
  BUF_VIDEO_RV30,
  BUF_VIDEO_RV40,
  BUF_VIDEO_IV31,
  BUF_VIDEO_IV32,
  BUF_VIDEO_SORENSON_V1,
  BUF_VIDEO_SORENSON_V3,
  BUF_VIDEO_DV,
  BUF_VIDEO_HUFFYUV,
  BUF_VIDEO_VP31,
  BUF_VIDEO_VP5,
  BUF_VIDEO_VP6,
  BUF_VIDEO_VP6F,
  BUF_VIDEO_VP8,
  BUF_VIDEO_4XM,
  BUF_VIDEO_CINEPAK,
  BUF_VIDEO_MSVC,
  BUF_VIDEO_MSRLE,
  BUF_VIDEO_RPZA,
  BUF_VIDEO_CYUV,
  BUF_VIDEO_ROQ,
  BUF_VIDEO_IDCIN,
  BUF_VIDEO_WC3,
  BUF_VIDEO_VQA,
  BUF_VIDEO_INTERPLAY,
  BUF_VIDEO_FLI,
  BUF_VIDEO_8BPS,
  BUF_VIDEO_SMC,
  BUF_VIDEO_DUCKTM1,
  BUF_VIDEO_DUCKTM2,
  BUF_VIDEO_VMD,
  BUF_VIDEO_ZLIB,
  BUF_VIDEO_MSZH,
  BUF_VIDEO_ASV1,
  BUF_VIDEO_ASV2,
  BUF_VIDEO_ATIVCR1,
  BUF_VIDEO_FLV1,
  BUF_VIDEO_QTRLE,
  BUF_VIDEO_H264,
  BUF_VIDEO_H261,
  BUF_VIDEO_AASC,
  BUF_VIDEO_LOCO,
  BUF_VIDEO_QDRW,
  BUF_VIDEO_QPEG,
  BUF_VIDEO_TSCC,
  BUF_VIDEO_ULTI,
  BUF_VIDEO_WNV1,
  BUF_VIDEO_XL,
  BUF_VIDEO_RT21,
  BUF_VIDEO_FPS1,
  BUF_VIDEO_MPEG,
  BUF_VIDEO_CSCD,
  BUF_VIDEO_AVS,
  BUF_VIDEO_ALGMM,
  BUF_VIDEO_ZMBV,
  BUF_VIDEO_SMACKER,
  BUF_VIDEO_NUV,
  BUF_VIDEO_KMVC,
  BUF_VIDEO_FLASHSV,
  BUF_VIDEO_CAVS,
  BUF_VIDEO_VMNC,
  BUF_VIDEO_THEORA_RAW,
  BUF_VIDEO_SNOW,
  0,
};