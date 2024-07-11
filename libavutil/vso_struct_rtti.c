/* This source table is generated from Delphi
   function build_struct_rtti(var c_source: tarray<string>): boolean;
   in unit libavutil.vso_addons_h.
   It enumerates all the fields names present in the Delphi record
   Which must match their counterpart in the C struct.
   It is used to generate field table that will allow Delphi to match
   exactly the declared c struct.
   Do not edit / modify this file, unless you know exactly what you are doing
*/
/* built 07/11/2024 16:48:13 from libavutil version 58.36.101 */
FF_DISABLE_DEPRECATION_WARNINGS

static const avstruct_field_descriptor AVHWDeviceContext_field_list[] = {
  STRUCT_FIELD_DECL(AVHWDeviceContext,av_class), 
  STRUCT_FIELD_DECL(AVHWDeviceContext,internal), 
  STRUCT_FIELD_DECL(AVHWDeviceContext,type), 
  STRUCT_FIELD_DECL(AVHWDeviceContext,hwctx), 
  STRUCT_FIELD_DECL(AVHWDeviceContext,free), 
  STRUCT_FIELD_DECL(AVHWDeviceContext,user_opaque), 
  { NULL } 
};

static const avstruct_field_descriptor AVHWFramesContext_field_list[] = {
  STRUCT_FIELD_DECL(AVHWFramesContext,av_class), 
  STRUCT_FIELD_DECL(AVHWFramesContext,internal), 
  STRUCT_FIELD_DECL(AVHWFramesContext,device_ref), 
  STRUCT_FIELD_DECL(AVHWFramesContext,device_ctx), 
  STRUCT_FIELD_DECL(AVHWFramesContext,hwctx), 
  STRUCT_FIELD_DECL(AVHWFramesContext,free), 
  STRUCT_FIELD_DECL(AVHWFramesContext,user_opaque), 
  STRUCT_FIELD_DECL(AVHWFramesContext,pool), 
  STRUCT_FIELD_DECL(AVHWFramesContext,initial_pool_size), 
  STRUCT_FIELD_DECL(AVHWFramesContext,format), 
  STRUCT_FIELD_DECL(AVHWFramesContext,sw_format), 
  STRUCT_FIELD_DECL(AVHWFramesContext,width), 
  STRUCT_FIELD_DECL(AVHWFramesContext,height), 
  { NULL } 
};

static const avstruct_field_descriptor AVHWFramesConstraints_field_list[] = {
  STRUCT_FIELD_DECL(AVHWFramesConstraints,valid_hw_formats), 
  STRUCT_FIELD_DECL(AVHWFramesConstraints,valid_sw_formats), 
  STRUCT_FIELD_DECL(AVHWFramesConstraints,min_width), 
  STRUCT_FIELD_DECL(AVHWFramesConstraints,min_height), 
  STRUCT_FIELD_DECL(AVHWFramesConstraints,max_width), 
  STRUCT_FIELD_DECL(AVHWFramesConstraints,max_height), 
  { NULL } 
};

static const avstruct_field_descriptor HWContextType_field_list[] = {
  STRUCT_FIELD_DECL(HWContextType,type), 
  STRUCT_FIELD_DECL(HWContextType,name), 
  STRUCT_FIELD_DECL(HWContextType,pix_fmts), 
  STRUCT_FIELD_DECL(HWContextType,device_hwctx_size), 
  STRUCT_FIELD_DECL(HWContextType,device_priv_size), 
  STRUCT_FIELD_DECL(HWContextType,device_hwconfig_size), 
  STRUCT_FIELD_DECL(HWContextType,frames_hwctx_size), 
  STRUCT_FIELD_DECL(HWContextType,frames_priv_size), 
  STRUCT_FIELD_DECL(HWContextType,device_create), 
  STRUCT_FIELD_DECL(HWContextType,device_derive), 
  STRUCT_FIELD_DECL(HWContextType,device_init), 
  STRUCT_FIELD_DECL(HWContextType,device_uninit), 
  STRUCT_FIELD_DECL(HWContextType,frames_get_constraints), 
  STRUCT_FIELD_DECL(HWContextType,frames_init), 
  STRUCT_FIELD_DECL(HWContextType,frames_uninit), 
  STRUCT_FIELD_DECL(HWContextType,frames_get_buffer), 
  STRUCT_FIELD_DECL(HWContextType,transfer_get_formats), 
  STRUCT_FIELD_DECL(HWContextType,transfer_data_to), 
  STRUCT_FIELD_DECL(HWContextType,transfer_data_from), 
  STRUCT_FIELD_DECL(HWContextType,map_to), 
  STRUCT_FIELD_DECL(HWContextType,map_from), 
  STRUCT_FIELD_DECL(HWContextType,frames_derive_to), 
  STRUCT_FIELD_DECL(HWContextType,frames_derive_from), 
  { NULL } 
};

static const avstruct_field_descriptor AVHWDeviceInternal_field_list[] = {
  STRUCT_FIELD_DECL(AVHWDeviceInternal,hw_type), 
  STRUCT_FIELD_DECL(AVHWDeviceInternal,priv), 
  STRUCT_FIELD_DECL(AVHWDeviceInternal,source_device), 
  { NULL } 
};

static const avstruct_field_descriptor AVHWFramesInternal_field_list[] = {
  STRUCT_FIELD_DECL(AVHWFramesInternal,hw_type), 
  STRUCT_FIELD_DECL(AVHWFramesInternal,priv), 
  STRUCT_FIELD_DECL(AVHWFramesInternal,pool_internal), 
  STRUCT_FIELD_DECL(AVHWFramesInternal,source_frames), 
  STRUCT_FIELD_DECL(AVHWFramesInternal,source_allocation_map_flags), 
  { NULL } 
};

static const avstruct_field_descriptor HWMapDescriptor_field_list[] = {
  STRUCT_FIELD_DECL(HWMapDescriptor,source), 
  STRUCT_FIELD_DECL(HWMapDescriptor,hw_frames_ctx), 
  STRUCT_FIELD_DECL(HWMapDescriptor,unmap), 
  STRUCT_FIELD_DECL(HWMapDescriptor,priv), 
  { NULL } 
};

static const avstruct_field_descriptor AVFrameSideData_field_list[] = {
  STRUCT_FIELD_DECL(AVFrameSideData,type), 
  STRUCT_FIELD_DECL(AVFrameSideData,data), 
  STRUCT_FIELD_DECL(AVFrameSideData,size), 
  STRUCT_FIELD_DECL(AVFrameSideData,metadata), 
  STRUCT_FIELD_DECL(AVFrameSideData,buf), 
  { NULL } 
};

static const avstruct_field_descriptor AVRegionOfInterest_field_list[] = {
  STRUCT_FIELD_DECL(AVRegionOfInterest,self_size), 
  STRUCT_FIELD_DECL(AVRegionOfInterest,top), 
  STRUCT_FIELD_DECL(AVRegionOfInterest,bottom), 
  STRUCT_FIELD_DECL(AVRegionOfInterest,left), 
  STRUCT_FIELD_DECL(AVRegionOfInterest,right), 
  STRUCT_FIELD_DECL(AVRegionOfInterest,qoffset), 
  { NULL } 
};

static const avstruct_field_descriptor AVFrame_field_list[] = {
  STRUCT_FIELD_DECL(AVFrame,data), 
  STRUCT_FIELD_DECL(AVFrame,linesize), 
  STRUCT_FIELD_DECL(AVFrame,extended_data), 
  STRUCT_FIELD_DECL(AVFrame,width), 
  STRUCT_FIELD_DECL(AVFrame,height), 
  STRUCT_FIELD_DECL(AVFrame,nb_samples), 
  STRUCT_FIELD_DECL(AVFrame,format), 
  STRUCT_FIELD_DECL(AVFrame,key_frame), 
  STRUCT_FIELD_DECL(AVFrame,pict_type), 
  STRUCT_FIELD_DECL(AVFrame,sample_aspect_ratio), 
  STRUCT_FIELD_DECL(AVFrame,pts), 
  STRUCT_FIELD_DECL(AVFrame,pkt_dts), 
  STRUCT_FIELD_DECL(AVFrame,time_base), 
  STRUCT_FIELD_DECL(AVFrame,coded_picture_number), 
  STRUCT_FIELD_DECL(AVFrame,display_picture_number), 
  STRUCT_FIELD_DECL(AVFrame,quality), 
  STRUCT_FIELD_DECL(AVFrame,opaque), 
  STRUCT_FIELD_DECL(AVFrame,repeat_pict), 
  STRUCT_FIELD_DECL(AVFrame,interlaced_frame), 
  STRUCT_FIELD_DECL(AVFrame,top_field_first), 
  STRUCT_FIELD_DECL(AVFrame,palette_has_changed), 
  STRUCT_FIELD_DECL(AVFrame,reordered_opaque), 
  STRUCT_FIELD_DECL(AVFrame,sample_rate), 
  STRUCT_FIELD_DECL(AVFrame,channel_layout), 
  STRUCT_FIELD_DECL(AVFrame,buf), 
  STRUCT_FIELD_DECL(AVFrame,extended_buf), 
  STRUCT_FIELD_DECL(AVFrame,nb_extended_buf), 
  STRUCT_FIELD_DECL(AVFrame,side_data), 
  STRUCT_FIELD_DECL(AVFrame,nb_side_data), 
  STRUCT_FIELD_DECL(AVFrame,flags), 
  STRUCT_FIELD_DECL(AVFrame,color_range), 
  STRUCT_FIELD_DECL(AVFrame,color_primaries), 
  STRUCT_FIELD_DECL(AVFrame,color_trc), 
  STRUCT_FIELD_DECL(AVFrame,colorspace), 
  STRUCT_FIELD_DECL(AVFrame,chroma_location), 
  STRUCT_FIELD_DECL(AVFrame,best_effort_timestamp), 
  STRUCT_FIELD_DECL(AVFrame,pkt_pos), 
  STRUCT_FIELD_DECL(AVFrame,pkt_duration), 
  STRUCT_FIELD_DECL(AVFrame,metadata), 
  STRUCT_FIELD_DECL(AVFrame,decode_error_flags), 
  STRUCT_FIELD_DECL(AVFrame,channels), 
  STRUCT_FIELD_DECL(AVFrame,pkt_size), 
  STRUCT_FIELD_DECL(AVFrame,hw_frames_ctx), 
  STRUCT_FIELD_DECL(AVFrame,opaque_ref), 
  STRUCT_FIELD_DECL(AVFrame,crop_top), 
  STRUCT_FIELD_DECL(AVFrame,crop_bottom), 
  STRUCT_FIELD_DECL(AVFrame,crop_left), 
  STRUCT_FIELD_DECL(AVFrame,crop_right), 
  STRUCT_FIELD_DECL(AVFrame,private_ref), 
  STRUCT_FIELD_DECL(AVFrame,ch_layout), 
  STRUCT_FIELD_DECL(AVFrame,duration), 
  { NULL } 
};

static const avstruct_field_descriptor AVChannelLayout_field_list[] = {
  STRUCT_FIELD_DECL(AVChannelLayout,order), 
  STRUCT_FIELD_DECL(AVChannelLayout,nb_channels), 
  STRUCT_FIELD_DECL(AVChannelLayout,u), 
  STRUCT_FIELD_DECL(AVChannelLayout,opaque), 
  { NULL } 
};

static const avstruct_field_descriptor AVChannelCustom_field_list[] = {
  STRUCT_FIELD_DECL(AVChannelCustom,id), 
  STRUCT_FIELD_DECL(AVChannelCustom,name), 
  STRUCT_FIELD_DECL(AVChannelCustom,opaque), 
  { NULL } 
};

static const avstruct_field_descriptor AVPacket_field_list[] = {
  STRUCT_FIELD_DECL(AVPacket,buf), 
  STRUCT_FIELD_DECL(AVPacket,pts), 
  STRUCT_FIELD_DECL(AVPacket,dts), 
  STRUCT_FIELD_DECL(AVPacket,data), 
  STRUCT_FIELD_DECL(AVPacket,size), 
  STRUCT_FIELD_DECL(AVPacket,stream_index), 
  STRUCT_FIELD_DECL(AVPacket,flags), 
  STRUCT_FIELD_DECL(AVPacket,side_data), 
  STRUCT_FIELD_DECL(AVPacket,side_data_elems), 
  STRUCT_FIELD_DECL(AVPacket,duration), 
  STRUCT_FIELD_DECL(AVPacket,pos), 
  STRUCT_FIELD_DECL(AVPacket,opaque), 
  STRUCT_FIELD_DECL(AVPacket,opaque_ref), 
  STRUCT_FIELD_DECL(AVPacket,time_base), 
  { NULL } 
};

static const avstruct_field_descriptor AVPacketSideData_field_list[] = {
  STRUCT_FIELD_DECL(AVPacketSideData,data), 
  STRUCT_FIELD_DECL(AVPacketSideData,size), 
  STRUCT_FIELD_DECL(AVPacketSideData,type), 
  { NULL } 
};

static const avstruct_field_descriptor RcOverride_field_list[] = {
  STRUCT_FIELD_DECL(RcOverride,start_frame), 
  STRUCT_FIELD_DECL(RcOverride,end_frame), 
  STRUCT_FIELD_DECL(RcOverride,qscale), 
  STRUCT_FIELD_DECL(RcOverride,quality_factor), 
  { NULL } 
};

static const avstruct_field_descriptor AVCodecContext_field_list[] = {
  STRUCT_FIELD_DECL(AVCodecContext,av_class), 
  STRUCT_FIELD_DECL(AVCodecContext,log_level_offset), 
  STRUCT_FIELD_DECL(AVCodecContext,codec_type), 
  STRUCT_FIELD_DECL(AVCodecContext,codec), 
  STRUCT_FIELD_DECL(AVCodecContext,codec_id), 
  STRUCT_FIELD_DECL(AVCodecContext,codec_tag), 
  STRUCT_FIELD_DECL(AVCodecContext,priv_data), 
  STRUCT_FIELD_DECL(AVCodecContext,internal), 
  STRUCT_FIELD_DECL(AVCodecContext,opaque), 
  STRUCT_FIELD_DECL(AVCodecContext,bit_rate), 
  STRUCT_FIELD_DECL(AVCodecContext,bit_rate_tolerance), 
  STRUCT_FIELD_DECL(AVCodecContext,global_quality), 
  STRUCT_FIELD_DECL(AVCodecContext,compression_level), 
  STRUCT_FIELD_DECL(AVCodecContext,flags), 
  STRUCT_FIELD_DECL(AVCodecContext,flags2), 
  STRUCT_FIELD_DECL(AVCodecContext,extradata), 
  STRUCT_FIELD_DECL(AVCodecContext,extradata_size), 
  STRUCT_FIELD_DECL(AVCodecContext,time_base), 
  STRUCT_FIELD_DECL(AVCodecContext,ticks_per_frame), 
  STRUCT_FIELD_DECL(AVCodecContext,delay), 
  STRUCT_FIELD_DECL(AVCodecContext,width), 
  STRUCT_FIELD_DECL(AVCodecContext,height), 
  STRUCT_FIELD_DECL(AVCodecContext,coded_width), 
  STRUCT_FIELD_DECL(AVCodecContext,coded_height), 
  STRUCT_FIELD_DECL(AVCodecContext,gop_size), 
  STRUCT_FIELD_DECL(AVCodecContext,pix_fmt), 
  STRUCT_FIELD_DECL(AVCodecContext,draw_horiz_band), 
  STRUCT_FIELD_DECL(AVCodecContext,get_format), 
  STRUCT_FIELD_DECL(AVCodecContext,max_b_frames), 
  STRUCT_FIELD_DECL(AVCodecContext,b_quant_factor), 
  STRUCT_FIELD_DECL(AVCodecContext,b_quant_offset), 
  STRUCT_FIELD_DECL(AVCodecContext,has_b_frames), 
  STRUCT_FIELD_DECL(AVCodecContext,i_quant_factor), 
  STRUCT_FIELD_DECL(AVCodecContext,i_quant_offset), 
  STRUCT_FIELD_DECL(AVCodecContext,lumi_masking), 
  STRUCT_FIELD_DECL(AVCodecContext,temporal_cplx_masking), 
  STRUCT_FIELD_DECL(AVCodecContext,spatial_cplx_masking), 
  STRUCT_FIELD_DECL(AVCodecContext,p_masking), 
  STRUCT_FIELD_DECL(AVCodecContext,dark_masking), 
  STRUCT_FIELD_DECL(AVCodecContext,slice_count), 
  STRUCT_FIELD_DECL(AVCodecContext,slice_offset), 
  STRUCT_FIELD_DECL(AVCodecContext,sample_aspect_ratio), 
  STRUCT_FIELD_DECL(AVCodecContext,me_cmp), 
  STRUCT_FIELD_DECL(AVCodecContext,me_sub_cmp), 
  STRUCT_FIELD_DECL(AVCodecContext,mb_cmp), 
  STRUCT_FIELD_DECL(AVCodecContext,ildct_cmp), 
  STRUCT_FIELD_DECL(AVCodecContext,dia_size), 
  STRUCT_FIELD_DECL(AVCodecContext,last_predictor_count), 
  STRUCT_FIELD_DECL(AVCodecContext,me_pre_cmp), 
  STRUCT_FIELD_DECL(AVCodecContext,pre_dia_size), 
  STRUCT_FIELD_DECL(AVCodecContext,me_subpel_quality), 
  STRUCT_FIELD_DECL(AVCodecContext,me_range), 
  STRUCT_FIELD_DECL(AVCodecContext,slice_flags), 
  STRUCT_FIELD_DECL(AVCodecContext,mb_decision), 
  STRUCT_FIELD_DECL(AVCodecContext,intra_matrix), 
  STRUCT_FIELD_DECL(AVCodecContext,inter_matrix), 
  STRUCT_FIELD_DECL(AVCodecContext,intra_dc_precision), 
  STRUCT_FIELD_DECL(AVCodecContext,skip_top), 
  STRUCT_FIELD_DECL(AVCodecContext,skip_bottom), 
  STRUCT_FIELD_DECL(AVCodecContext,mb_lmin), 
  STRUCT_FIELD_DECL(AVCodecContext,mb_lmax), 
  STRUCT_FIELD_DECL(AVCodecContext,bidir_refine), 
  STRUCT_FIELD_DECL(AVCodecContext,keyint_min), 
  STRUCT_FIELD_DECL(AVCodecContext,refs), 
  STRUCT_FIELD_DECL(AVCodecContext,mv0_threshold), 
  STRUCT_FIELD_DECL(AVCodecContext,color_primaries), 
  STRUCT_FIELD_DECL(AVCodecContext,color_trc), 
  STRUCT_FIELD_DECL(AVCodecContext,colorspace), 
  STRUCT_FIELD_DECL(AVCodecContext,color_range), 
  STRUCT_FIELD_DECL(AVCodecContext,chroma_sample_location), 
  STRUCT_FIELD_DECL(AVCodecContext,slices), 
  STRUCT_FIELD_DECL(AVCodecContext,field_order), 
  STRUCT_FIELD_DECL(AVCodecContext,sample_rate), 
  STRUCT_FIELD_DECL(AVCodecContext,channels), 
  STRUCT_FIELD_DECL(AVCodecContext,sample_fmt), 
  STRUCT_FIELD_DECL(AVCodecContext,frame_size), 
  STRUCT_FIELD_DECL(AVCodecContext,frame_number), 
  STRUCT_FIELD_DECL(AVCodecContext,block_align), 
  STRUCT_FIELD_DECL(AVCodecContext,cutoff), 
  STRUCT_FIELD_DECL(AVCodecContext,channel_layout), 
  STRUCT_FIELD_DECL(AVCodecContext,request_channel_layout), 
  STRUCT_FIELD_DECL(AVCodecContext,audio_service_type), 
  STRUCT_FIELD_DECL(AVCodecContext,request_sample_fmt), 
  STRUCT_FIELD_DECL(AVCodecContext,get_buffer2), 
  STRUCT_FIELD_DECL(AVCodecContext,qcompress), 
  STRUCT_FIELD_DECL(AVCodecContext,qblur), 
  STRUCT_FIELD_DECL(AVCodecContext,qmin), 
  STRUCT_FIELD_DECL(AVCodecContext,qmax), 
  STRUCT_FIELD_DECL(AVCodecContext,max_qdiff), 
  STRUCT_FIELD_DECL(AVCodecContext,rc_buffer_size), 
  STRUCT_FIELD_DECL(AVCodecContext,rc_override_count), 
  STRUCT_FIELD_DECL(AVCodecContext,rc_override), 
  STRUCT_FIELD_DECL(AVCodecContext,rc_max_rate), 
  STRUCT_FIELD_DECL(AVCodecContext,rc_min_rate), 
  STRUCT_FIELD_DECL(AVCodecContext,rc_max_available_vbv_use), 
  STRUCT_FIELD_DECL(AVCodecContext,rc_min_vbv_overflow_use), 
  STRUCT_FIELD_DECL(AVCodecContext,rc_initial_buffer_occupancy), 
  STRUCT_FIELD_DECL(AVCodecContext,trellis), 
  STRUCT_FIELD_DECL(AVCodecContext,stats_out), 
  STRUCT_FIELD_DECL(AVCodecContext,stats_in), 
  STRUCT_FIELD_DECL(AVCodecContext,workaround_bugs), 
  STRUCT_FIELD_DECL(AVCodecContext,strict_std_compliance), 
  STRUCT_FIELD_DECL(AVCodecContext,error_concealment), 
  STRUCT_FIELD_DECL(AVCodecContext,debug), 
  STRUCT_FIELD_DECL(AVCodecContext,err_recognition), 
  STRUCT_FIELD_DECL(AVCodecContext,reordered_opaque), 
  STRUCT_FIELD_DECL(AVCodecContext,hwaccel), 
  STRUCT_FIELD_DECL(AVCodecContext,hwaccel_context), 
  STRUCT_FIELD_DECL(AVCodecContext,error), 
  STRUCT_FIELD_DECL(AVCodecContext,dct_algo), 
  STRUCT_FIELD_DECL(AVCodecContext,idct_algo), 
  STRUCT_FIELD_DECL(AVCodecContext,bits_per_coded_sample), 
  STRUCT_FIELD_DECL(AVCodecContext,bits_per_raw_sample), 
  STRUCT_FIELD_DECL(AVCodecContext,lowres), 
  STRUCT_FIELD_DECL(AVCodecContext,thread_count), 
  STRUCT_FIELD_DECL(AVCodecContext,thread_type), 
  STRUCT_FIELD_DECL(AVCodecContext,active_thread_type), 
  STRUCT_FIELD_DECL(AVCodecContext,execute), 
  STRUCT_FIELD_DECL(AVCodecContext,execute2), 
  STRUCT_FIELD_DECL(AVCodecContext,nsse_weight), 
  STRUCT_FIELD_DECL(AVCodecContext,profile), 
  STRUCT_FIELD_DECL(AVCodecContext,level), 
  STRUCT_FIELD_DECL(AVCodecContext,skip_loop_filter), 
  STRUCT_FIELD_DECL(AVCodecContext,skip_idct), 
  STRUCT_FIELD_DECL(AVCodecContext,skip_frame), 
  STRUCT_FIELD_DECL(AVCodecContext,subtitle_header), 
  STRUCT_FIELD_DECL(AVCodecContext,subtitle_header_size), 
  STRUCT_FIELD_DECL(AVCodecContext,initial_padding), 
  STRUCT_FIELD_DECL(AVCodecContext,framerate), 
  STRUCT_FIELD_DECL(AVCodecContext,sw_pix_fmt), 
  STRUCT_FIELD_DECL(AVCodecContext,pkt_timebase), 
  STRUCT_FIELD_DECL(AVCodecContext,codec_descriptor), 
  STRUCT_FIELD_DECL(AVCodecContext,pts_correction_num_faulty_pts), 
  STRUCT_FIELD_DECL(AVCodecContext,pts_correction_num_faulty_dts), 
  STRUCT_FIELD_DECL(AVCodecContext,pts_correction_last_pts), 
  STRUCT_FIELD_DECL(AVCodecContext,pts_correction_last_dts), 
  STRUCT_FIELD_DECL(AVCodecContext,sub_charenc), 
  STRUCT_FIELD_DECL(AVCodecContext,sub_charenc_mode), 
  STRUCT_FIELD_DECL(AVCodecContext,skip_alpha), 
  STRUCT_FIELD_DECL(AVCodecContext,seek_preroll), 
  STRUCT_FIELD_DECL(AVCodecContext,chroma_intra_matrix), 
  STRUCT_FIELD_DECL(AVCodecContext,dump_separator), 
  STRUCT_FIELD_DECL(AVCodecContext,codec_whitelist), 
  STRUCT_FIELD_DECL(AVCodecContext,properties), 
  STRUCT_FIELD_DECL(AVCodecContext,coded_side_data), 
  STRUCT_FIELD_DECL(AVCodecContext,nb_coded_side_data), 
  STRUCT_FIELD_DECL(AVCodecContext,hw_frames_ctx), 
  STRUCT_FIELD_DECL(AVCodecContext,trailing_padding), 
  STRUCT_FIELD_DECL(AVCodecContext,max_pixels), 
  STRUCT_FIELD_DECL(AVCodecContext,hw_device_ctx), 
  STRUCT_FIELD_DECL(AVCodecContext,hwaccel_flags), 
  STRUCT_FIELD_DECL(AVCodecContext,apply_cropping), 
  STRUCT_FIELD_DECL(AVCodecContext,extra_hw_frames), 
  STRUCT_FIELD_DECL(AVCodecContext,discard_damaged_percentage), 
  STRUCT_FIELD_DECL(AVCodecContext,max_samples), 
  STRUCT_FIELD_DECL(AVCodecContext,export_side_data), 
  STRUCT_FIELD_DECL(AVCodecContext,get_encode_buffer), 
  STRUCT_FIELD_DECL(AVCodecContext,ch_layout), 
  STRUCT_FIELD_DECL(AVCodecContext,frame_num), 
  { NULL } 
};

static const avstruct_field_descriptor AVHWAccel_field_list[] = {
  STRUCT_FIELD_DECL(AVHWAccel,name), 
  STRUCT_FIELD_DECL(AVHWAccel,type), 
  STRUCT_FIELD_DECL(AVHWAccel,id), 
  STRUCT_FIELD_DECL(AVHWAccel,pix_fmt), 
  STRUCT_FIELD_DECL(AVHWAccel,capabilities), 
  { NULL } 
};

static const avstruct_field_descriptor AVSubtitleRect_field_list[] = {
  STRUCT_FIELD_DECL(AVSubtitleRect,x), 
  STRUCT_FIELD_DECL(AVSubtitleRect,y), 
  STRUCT_FIELD_DECL(AVSubtitleRect,w), 
  STRUCT_FIELD_DECL(AVSubtitleRect,h), 
  STRUCT_FIELD_DECL(AVSubtitleRect,nb_colors), 
  STRUCT_FIELD_DECL(AVSubtitleRect,data), 
  STRUCT_FIELD_DECL(AVSubtitleRect,linesize), 
  STRUCT_FIELD_DECL(AVSubtitleRect,type), 
  STRUCT_FIELD_DECL(AVSubtitleRect,text), 
  STRUCT_FIELD_DECL(AVSubtitleRect,ass), 
  STRUCT_FIELD_DECL(AVSubtitleRect,flags), 
  { NULL } 
};

static const avstruct_field_descriptor AVSubtitle_field_list[] = {
  STRUCT_FIELD_DECL(AVSubtitle,format), 
  STRUCT_FIELD_DECL(AVSubtitle,start_display_time), 
  STRUCT_FIELD_DECL(AVSubtitle,end_display_time), 
  STRUCT_FIELD_DECL(AVSubtitle,num_rects), 
  STRUCT_FIELD_DECL(AVSubtitle,rects), 
  STRUCT_FIELD_DECL(AVSubtitle,pts), 
  { NULL } 
};

static const avstruct_field_descriptor AVCodecParserContext_field_list[] = {
  STRUCT_FIELD_DECL(AVCodecParserContext,priv_data), 
  STRUCT_FIELD_DECL(AVCodecParserContext,parser), 
  STRUCT_FIELD_DECL(AVCodecParserContext,frame_offset), 
  STRUCT_FIELD_DECL(AVCodecParserContext,cur_offset), 
  STRUCT_FIELD_DECL(AVCodecParserContext,next_frame_offset), 
  STRUCT_FIELD_DECL(AVCodecParserContext,pict_type), 
  STRUCT_FIELD_DECL(AVCodecParserContext,repeat_pict), 
  STRUCT_FIELD_DECL(AVCodecParserContext,pts), 
  STRUCT_FIELD_DECL(AVCodecParserContext,dts), 
  STRUCT_FIELD_DECL(AVCodecParserContext,last_pts), 
  STRUCT_FIELD_DECL(AVCodecParserContext,last_dts), 
  STRUCT_FIELD_DECL(AVCodecParserContext,fetch_timestamp), 
  STRUCT_FIELD_DECL(AVCodecParserContext,cur_frame_start_index), 
  STRUCT_FIELD_DECL(AVCodecParserContext,cur_frame_offset), 
  STRUCT_FIELD_DECL(AVCodecParserContext,cur_frame_pts), 
  STRUCT_FIELD_DECL(AVCodecParserContext,cur_frame_dts), 
  STRUCT_FIELD_DECL(AVCodecParserContext,flags), 
  STRUCT_FIELD_DECL(AVCodecParserContext,offset), 
  STRUCT_FIELD_DECL(AVCodecParserContext,cur_frame_end), 
  STRUCT_FIELD_DECL(AVCodecParserContext,key_frame), 
  STRUCT_FIELD_DECL(AVCodecParserContext,dts_sync_point), 
  STRUCT_FIELD_DECL(AVCodecParserContext,dts_ref_dts_delta), 
  STRUCT_FIELD_DECL(AVCodecParserContext,pts_dts_delta), 
  STRUCT_FIELD_DECL(AVCodecParserContext,cur_frame_pos), 
  STRUCT_FIELD_DECL(AVCodecParserContext,pos), 
  STRUCT_FIELD_DECL(AVCodecParserContext,last_pos), 
  STRUCT_FIELD_DECL(AVCodecParserContext,duration), 
  STRUCT_FIELD_DECL(AVCodecParserContext,field_order), 
  STRUCT_FIELD_DECL(AVCodecParserContext,picture_structure), 
  STRUCT_FIELD_DECL(AVCodecParserContext,output_picture_number), 
  STRUCT_FIELD_DECL(AVCodecParserContext,width), 
  STRUCT_FIELD_DECL(AVCodecParserContext,height), 
  STRUCT_FIELD_DECL(AVCodecParserContext,coded_width), 
  STRUCT_FIELD_DECL(AVCodecParserContext,coded_height), 
  STRUCT_FIELD_DECL(AVCodecParserContext,format), 
  { NULL } 
};

static const avstruct_field_descriptor AVCodecParser_field_list[] = {
  STRUCT_FIELD_DECL(AVCodecParser,codec_ids), 
  STRUCT_FIELD_DECL(AVCodecParser,priv_data_size), 
  STRUCT_FIELD_DECL(AVCodecParser,parser_init), 
  STRUCT_FIELD_DECL(AVCodecParser,parser_parse), 
  STRUCT_FIELD_DECL(AVCodecParser,parser_close), 
  STRUCT_FIELD_DECL(AVCodecParser,split), 
  { NULL } 
};

static const avstruct_field_descriptor AVProfile_field_list[] = {
  STRUCT_FIELD_DECL(AVProfile,profile), 
  STRUCT_FIELD_DECL(AVProfile,name), 
  { NULL } 
};

static const avstruct_field_descriptor AVCodec_field_list[] = {
  STRUCT_FIELD_DECL(AVCodec,name), 
  STRUCT_FIELD_DECL(AVCodec,long_name), 
  STRUCT_FIELD_DECL(AVCodec,type), 
  STRUCT_FIELD_DECL(AVCodec,id), 
  STRUCT_FIELD_DECL(AVCodec,capabilities), 
  STRUCT_FIELD_DECL(AVCodec,max_lowres), 
  STRUCT_FIELD_DECL(AVCodec,supported_framerates), 
  STRUCT_FIELD_DECL(AVCodec,pix_fmts), 
  STRUCT_FIELD_DECL(AVCodec,supported_samplerates), 
  STRUCT_FIELD_DECL(AVCodec,sample_fmts), 
  STRUCT_FIELD_DECL(AVCodec,channel_layouts), 
  STRUCT_FIELD_DECL(AVCodec,priv_class), 
  STRUCT_FIELD_DECL(AVCodec,profiles), 
  STRUCT_FIELD_DECL(AVCodec,wrapper_name), 
  STRUCT_FIELD_DECL(AVCodec,ch_layouts), 
  { NULL } 
};

static const avstruct_field_descriptor AVCodecHWConfig_field_list[] = {
  STRUCT_FIELD_DECL(AVCodecHWConfig,pix_fmt), 
  STRUCT_FIELD_DECL(AVCodecHWConfig,methods), 
  STRUCT_FIELD_DECL(AVCodecHWConfig,device_type), 
  { NULL } 
};

static const avstruct_field_descriptor AVCodecHWConfigInternal_field_list[] = {
  STRUCT_FIELD_DECL(AVCodecHWConfigInternal,public), 
  STRUCT_FIELD_DECL(AVCodecHWConfigInternal,hwaccel), 
  { NULL } 
};

static const avstruct_field_descriptor FFHWAccel_field_list[] = {
  STRUCT_FIELD_DECL(FFHWAccel,p), 
  STRUCT_FIELD_DECL(FFHWAccel,alloc_frame), 
  STRUCT_FIELD_DECL(FFHWAccel,start_frame), 
  STRUCT_FIELD_DECL(FFHWAccel,decode_params), 
  STRUCT_FIELD_DECL(FFHWAccel,decode_slice), 
  STRUCT_FIELD_DECL(FFHWAccel,end_frame), 
  STRUCT_FIELD_DECL(FFHWAccel,frame_priv_data_size), 
  STRUCT_FIELD_DECL(FFHWAccel,priv_data_size), 
  STRUCT_FIELD_DECL(FFHWAccel,caps_internal), 
  STRUCT_FIELD_DECL(FFHWAccel,init), 
  STRUCT_FIELD_DECL(FFHWAccel,uninit), 
  STRUCT_FIELD_DECL(FFHWAccel,frame_params), 
  STRUCT_FIELD_DECL(FFHWAccel,update_thread_context), 
  STRUCT_FIELD_DECL(FFHWAccel,free_frame_priv), 
  STRUCT_FIELD_DECL(FFHWAccel,flush), 
  { NULL } 
};

static const avstruct_field_descriptor AVIOInterruptCB_field_list[] = {
  STRUCT_FIELD_DECL(AVIOInterruptCB,callback), 
  STRUCT_FIELD_DECL(AVIOInterruptCB,opaque), 
  { NULL } 
};

static const avstruct_field_descriptor AVIODirEntry_field_list[] = {
  STRUCT_FIELD_DECL(AVIODirEntry,name), 
  STRUCT_FIELD_DECL(AVIODirEntry,type), 
  STRUCT_FIELD_DECL(AVIODirEntry,utf8), 
  STRUCT_FIELD_DECL(AVIODirEntry,size), 
  STRUCT_FIELD_DECL(AVIODirEntry,modification_timestamp), 
  STRUCT_FIELD_DECL(AVIODirEntry,access_timestamp), 
  STRUCT_FIELD_DECL(AVIODirEntry,status_change_timestamp), 
  STRUCT_FIELD_DECL(AVIODirEntry,user_id), 
  STRUCT_FIELD_DECL(AVIODirEntry,group_id), 
  STRUCT_FIELD_DECL(AVIODirEntry,filemode), 
  { NULL } 
};

static const avstruct_field_descriptor AVIODirContext_field_list[] = {
  STRUCT_FIELD_DECL(AVIODirContext,url_context), 
  { NULL } 
};

static const avstruct_field_descriptor AVIOContext_field_list[] = {
  STRUCT_FIELD_DECL(AVIOContext,av_class), 
  STRUCT_FIELD_DECL(AVIOContext,buffer), 
  STRUCT_FIELD_DECL(AVIOContext,buffer_size), 
  STRUCT_FIELD_DECL(AVIOContext,buf_ptr), 
  STRUCT_FIELD_DECL(AVIOContext,buf_end), 
  STRUCT_FIELD_DECL(AVIOContext,opaque), 
  STRUCT_FIELD_DECL(AVIOContext,read_packet), 
  STRUCT_FIELD_DECL(AVIOContext,write_packet), 
  STRUCT_FIELD_DECL(AVIOContext,seek), 
  STRUCT_FIELD_DECL(AVIOContext,pos), 
  STRUCT_FIELD_DECL(AVIOContext,eof_reached), 
  STRUCT_FIELD_DECL(AVIOContext,error), 
  STRUCT_FIELD_DECL(AVIOContext,write_flag), 
  STRUCT_FIELD_DECL(AVIOContext,max_packet_size), 
  STRUCT_FIELD_DECL(AVIOContext,min_packet_size), 
  STRUCT_FIELD_DECL(AVIOContext,checksum), 
  STRUCT_FIELD_DECL(AVIOContext,checksum_ptr), 
  STRUCT_FIELD_DECL(AVIOContext,update_checksum), 
  STRUCT_FIELD_DECL(AVIOContext,read_pause), 
  STRUCT_FIELD_DECL(AVIOContext,read_seek), 
  STRUCT_FIELD_DECL(AVIOContext,seekable), 
  STRUCT_FIELD_DECL(AVIOContext,direct), 
  STRUCT_FIELD_DECL(AVIOContext,protocol_whitelist), 
  STRUCT_FIELD_DECL(AVIOContext,protocol_blacklist), 
  STRUCT_FIELD_DECL(AVIOContext,write_data_type), 
  STRUCT_FIELD_DECL(AVIOContext,ignore_boundary_point), 
  STRUCT_FIELD_DECL(AVIOContext,buf_ptr_max), 
  STRUCT_FIELD_DECL(AVIOContext,bytes_read), 
  STRUCT_FIELD_DECL(AVIOContext,bytes_written), 
  { NULL } 
};

static const avstruct_field_descriptor AVProbeData_field_list[] = {
  STRUCT_FIELD_DECL(AVProbeData,filename), 
  STRUCT_FIELD_DECL(AVProbeData,buf), 
  STRUCT_FIELD_DECL(AVProbeData,buf_size), 
  STRUCT_FIELD_DECL(AVProbeData,mime_type), 
  { NULL } 
};

static const avstruct_field_descriptor AVOutputFormat_field_list[] = {
  STRUCT_FIELD_DECL(AVOutputFormat,name), 
  STRUCT_FIELD_DECL(AVOutputFormat,long_name), 
  STRUCT_FIELD_DECL(AVOutputFormat,mime_type), 
  STRUCT_FIELD_DECL(AVOutputFormat,extensions), 
  STRUCT_FIELD_DECL(AVOutputFormat,audio_codec), 
  STRUCT_FIELD_DECL(AVOutputFormat,video_codec), 
  STRUCT_FIELD_DECL(AVOutputFormat,subtitle_codec), 
  STRUCT_FIELD_DECL(AVOutputFormat,flags), 
  STRUCT_FIELD_DECL(AVOutputFormat,codec_tag), 
  STRUCT_FIELD_DECL(AVOutputFormat,priv_class), 
  { NULL } 
};

static const avstruct_field_descriptor AVInputFormat_field_list[] = {
  STRUCT_FIELD_DECL(AVInputFormat,name), 
  STRUCT_FIELD_DECL(AVInputFormat,long_name), 
  STRUCT_FIELD_DECL(AVInputFormat,flags), 
  STRUCT_FIELD_DECL(AVInputFormat,extensions), 
  STRUCT_FIELD_DECL(AVInputFormat,codec_tag), 
  STRUCT_FIELD_DECL(AVInputFormat,priv_class), 
  STRUCT_FIELD_DECL(AVInputFormat,mime_type), 
  STRUCT_FIELD_DECL(AVInputFormat,raw_codec_id), 
  STRUCT_FIELD_DECL(AVInputFormat,priv_data_size), 
  STRUCT_FIELD_DECL(AVInputFormat,flags_internal), 
  STRUCT_FIELD_DECL(AVInputFormat,read_probe), 
  STRUCT_FIELD_DECL(AVInputFormat,read_header), 
  STRUCT_FIELD_DECL(AVInputFormat,read_packet), 
  STRUCT_FIELD_DECL(AVInputFormat,read_close), 
  STRUCT_FIELD_DECL(AVInputFormat,read_seek), 
  STRUCT_FIELD_DECL(AVInputFormat,read_timestamp), 
  STRUCT_FIELD_DECL(AVInputFormat,read_play), 
  STRUCT_FIELD_DECL(AVInputFormat,read_pause), 
  STRUCT_FIELD_DECL(AVInputFormat,read_seek2), 
  STRUCT_FIELD_DECL(AVInputFormat,get_device_list), 
  { NULL } 
};

static const avstruct_field_descriptor AVIndexEntry_field_list[] = {
  STRUCT_FIELD_DECL(AVIndexEntry,pos), 
  STRUCT_FIELD_DECL(AVIndexEntry,timestamp), 
  STRUCT_FIELD_DECL(AVIndexEntry,min_distance), 
  { NULL } 
};

static const avstruct_field_descriptor AVStream_field_list[] = {
  STRUCT_FIELD_DECL(AVStream,av_class), 
  STRUCT_FIELD_DECL(AVStream,index), 
  STRUCT_FIELD_DECL(AVStream,id), 
  STRUCT_FIELD_DECL(AVStream,codecpar), 
  STRUCT_FIELD_DECL(AVStream,priv_data), 
  STRUCT_FIELD_DECL(AVStream,time_base), 
  STRUCT_FIELD_DECL(AVStream,start_time), 
  STRUCT_FIELD_DECL(AVStream,duration), 
  STRUCT_FIELD_DECL(AVStream,nb_frames), 
  STRUCT_FIELD_DECL(AVStream,disposition), 
  STRUCT_FIELD_DECL(AVStream,discard), 
  STRUCT_FIELD_DECL(AVStream,sample_aspect_ratio), 
  STRUCT_FIELD_DECL(AVStream,metadata), 
  STRUCT_FIELD_DECL(AVStream,avg_frame_rate), 
  STRUCT_FIELD_DECL(AVStream,attached_pic), 
  STRUCT_FIELD_DECL(AVStream,side_data), 
  STRUCT_FIELD_DECL(AVStream,nb_side_data), 
  STRUCT_FIELD_DECL(AVStream,event_flags), 
  STRUCT_FIELD_DECL(AVStream,r_frame_rate), 
  STRUCT_FIELD_DECL(AVStream,pts_wrap_bits), 
  { NULL } 
};

static const avstruct_field_descriptor AVStreamGroup_field_list[] = {
  STRUCT_FIELD_DECL(AVStreamGroup,av_class), 
  STRUCT_FIELD_DECL(AVStreamGroup,priv_data), 
  STRUCT_FIELD_DECL(AVStreamGroup,index), 
  STRUCT_FIELD_DECL(AVStreamGroup,id), 
  STRUCT_FIELD_DECL(AVStreamGroup,type), 
  STRUCT_FIELD_DECL(AVStreamGroup,params), 
  STRUCT_FIELD_DECL(AVStreamGroup,metadata), 
  STRUCT_FIELD_DECL(AVStreamGroup,nb_streams), 
  STRUCT_FIELD_DECL(AVStreamGroup,streams), 
  { NULL } 
};

static const avstruct_field_descriptor AVProgram_field_list[] = {
  STRUCT_FIELD_DECL(AVProgram,id), 
  STRUCT_FIELD_DECL(AVProgram,flags), 
  STRUCT_FIELD_DECL(AVProgram,discard), 
  STRUCT_FIELD_DECL(AVProgram,stream_index), 
  STRUCT_FIELD_DECL(AVProgram,nb_stream_indexes), 
  STRUCT_FIELD_DECL(AVProgram,metadata), 
  STRUCT_FIELD_DECL(AVProgram,program_num), 
  STRUCT_FIELD_DECL(AVProgram,pmt_pid), 
  STRUCT_FIELD_DECL(AVProgram,pcr_pid), 
  STRUCT_FIELD_DECL(AVProgram,pmt_version), 
  STRUCT_FIELD_DECL(AVProgram,start_time), 
  STRUCT_FIELD_DECL(AVProgram,end_time), 
  STRUCT_FIELD_DECL(AVProgram,pts_wrap_reference), 
  STRUCT_FIELD_DECL(AVProgram,pts_wrap_behavior), 
  { NULL } 
};

static const avstruct_field_descriptor AVChapter_field_list[] = {
  STRUCT_FIELD_DECL(AVChapter,id), 
  STRUCT_FIELD_DECL(AVChapter,time_base), 
  STRUCT_FIELD_DECL(AVChapter,start), 
  STRUCT_FIELD_DECL(AVChapter,end), 
  STRUCT_FIELD_DECL(AVChapter,metadata), 
  { NULL } 
};

static const avstruct_field_descriptor AVFormatContext_field_list[] = {
  STRUCT_FIELD_DECL(AVFormatContext,av_class), 
  STRUCT_FIELD_DECL(AVFormatContext,iformat), 
  STRUCT_FIELD_DECL(AVFormatContext,oformat), 
  STRUCT_FIELD_DECL(AVFormatContext,priv_data), 
  STRUCT_FIELD_DECL(AVFormatContext,pb), 
  STRUCT_FIELD_DECL(AVFormatContext,ctx_flags), 
  STRUCT_FIELD_DECL(AVFormatContext,nb_streams), 
  STRUCT_FIELD_DECL(AVFormatContext,streams), 
  STRUCT_FIELD_DECL(AVFormatContext,url), 
  STRUCT_FIELD_DECL(AVFormatContext,start_time), 
  STRUCT_FIELD_DECL(AVFormatContext,duration), 
  STRUCT_FIELD_DECL(AVFormatContext,bit_rate), 
  STRUCT_FIELD_DECL(AVFormatContext,packet_size), 
  STRUCT_FIELD_DECL(AVFormatContext,max_delay), 
  STRUCT_FIELD_DECL(AVFormatContext,flags), 
  STRUCT_FIELD_DECL(AVFormatContext,probesize), 
  STRUCT_FIELD_DECL(AVFormatContext,max_analyze_duration), 
  STRUCT_FIELD_DECL(AVFormatContext,key), 
  STRUCT_FIELD_DECL(AVFormatContext,keylen), 
  STRUCT_FIELD_DECL(AVFormatContext,nb_programs), 
  STRUCT_FIELD_DECL(AVFormatContext,programs), 
  STRUCT_FIELD_DECL(AVFormatContext,video_codec_id), 
  STRUCT_FIELD_DECL(AVFormatContext,audio_codec_id), 
  STRUCT_FIELD_DECL(AVFormatContext,subtitle_codec_id), 
  STRUCT_FIELD_DECL(AVFormatContext,max_index_size), 
  STRUCT_FIELD_DECL(AVFormatContext,max_picture_buffer), 
  STRUCT_FIELD_DECL(AVFormatContext,nb_chapters), 
  STRUCT_FIELD_DECL(AVFormatContext,chapters), 
  STRUCT_FIELD_DECL(AVFormatContext,metadata), 
  STRUCT_FIELD_DECL(AVFormatContext,start_time_realtime), 
  STRUCT_FIELD_DECL(AVFormatContext,fps_probe_size), 
  STRUCT_FIELD_DECL(AVFormatContext,error_recognition), 
  STRUCT_FIELD_DECL(AVFormatContext,interrupt_callback), 
  STRUCT_FIELD_DECL(AVFormatContext,debug), 
  STRUCT_FIELD_DECL(AVFormatContext,max_interleave_delta), 
  STRUCT_FIELD_DECL(AVFormatContext,strict_std_compliance), 
  STRUCT_FIELD_DECL(AVFormatContext,event_flags), 
  STRUCT_FIELD_DECL(AVFormatContext,max_ts_probe), 
  STRUCT_FIELD_DECL(AVFormatContext,avoid_negative_ts), 
  STRUCT_FIELD_DECL(AVFormatContext,ts_id), 
  STRUCT_FIELD_DECL(AVFormatContext,audio_preload), 
  STRUCT_FIELD_DECL(AVFormatContext,max_chunk_duration), 
  STRUCT_FIELD_DECL(AVFormatContext,max_chunk_size), 
  STRUCT_FIELD_DECL(AVFormatContext,use_wallclock_as_timestamps), 
  STRUCT_FIELD_DECL(AVFormatContext,avio_flags), 
  STRUCT_FIELD_DECL(AVFormatContext,duration_estimation_method), 
  STRUCT_FIELD_DECL(AVFormatContext,skip_initial_bytes), 
  STRUCT_FIELD_DECL(AVFormatContext,correct_ts_overflow), 
  STRUCT_FIELD_DECL(AVFormatContext,seek2any), 
  STRUCT_FIELD_DECL(AVFormatContext,flush_packets), 
  STRUCT_FIELD_DECL(AVFormatContext,probe_score), 
  STRUCT_FIELD_DECL(AVFormatContext,format_probesize), 
  STRUCT_FIELD_DECL(AVFormatContext,codec_whitelist), 
  STRUCT_FIELD_DECL(AVFormatContext,format_whitelist), 
  STRUCT_FIELD_DECL(AVFormatContext,io_repositioned), 
  STRUCT_FIELD_DECL(AVFormatContext,video_codec), 
  STRUCT_FIELD_DECL(AVFormatContext,audio_codec), 
  STRUCT_FIELD_DECL(AVFormatContext,subtitle_codec), 
  STRUCT_FIELD_DECL(AVFormatContext,data_codec), 
  STRUCT_FIELD_DECL(AVFormatContext,metadata_header_padding), 
  STRUCT_FIELD_DECL(AVFormatContext,opaque), 
  STRUCT_FIELD_DECL(AVFormatContext,control_message_cb), 
  STRUCT_FIELD_DECL(AVFormatContext,output_ts_offset), 
  STRUCT_FIELD_DECL(AVFormatContext,dump_separator), 
  STRUCT_FIELD_DECL(AVFormatContext,data_codec_id), 
  STRUCT_FIELD_DECL(AVFormatContext,protocol_whitelist), 
  STRUCT_FIELD_DECL(AVFormatContext,io_open), 
  STRUCT_FIELD_DECL(AVFormatContext,io_close), 
  STRUCT_FIELD_DECL(AVFormatContext,protocol_blacklist), 
  STRUCT_FIELD_DECL(AVFormatContext,max_streams), 
  STRUCT_FIELD_DECL(AVFormatContext,skip_estimate_duration_from_pts), 
  STRUCT_FIELD_DECL(AVFormatContext,max_probe_packets), 
  STRUCT_FIELD_DECL(AVFormatContext,io_close2), 
  STRUCT_FIELD_DECL(AVFormatContext,nb_stream_groups), 
  STRUCT_FIELD_DECL(AVFormatContext,stream_groups), 
  { NULL } 
};

static const avstruct_field_descriptor FFOutputFormat_field_list[] = {
  STRUCT_FIELD_DECL(FFOutputFormat,p), 
  STRUCT_FIELD_DECL(FFOutputFormat,priv_data_size), 
  STRUCT_FIELD_DECL(FFOutputFormat,flags_internal), 
  STRUCT_FIELD_DECL(FFOutputFormat,write_header), 
  STRUCT_FIELD_DECL(FFOutputFormat,write_packet), 
  STRUCT_FIELD_DECL(FFOutputFormat,write_trailer), 
  STRUCT_FIELD_DECL(FFOutputFormat,interleave_packet), 
  STRUCT_FIELD_DECL(FFOutputFormat,query_codec), 
  STRUCT_FIELD_DECL(FFOutputFormat,get_output_timestamp), 
  STRUCT_FIELD_DECL(FFOutputFormat,control_message), 
  STRUCT_FIELD_DECL(FFOutputFormat,write_uncoded_frame), 
  STRUCT_FIELD_DECL(FFOutputFormat,get_device_list), 
  STRUCT_FIELD_DECL(FFOutputFormat,init), 
  STRUCT_FIELD_DECL(FFOutputFormat,deinit), 
  STRUCT_FIELD_DECL(FFOutputFormat,check_bitstream), 
  { NULL } 
};

static const avstruct_field_descriptor AVCodecTag_field_list[] = {
  STRUCT_FIELD_DECL(AVCodecTag,id), 
  STRUCT_FIELD_DECL(AVCodecTag,tag), 
  { NULL } 
};

static const avstruct_field_descriptor CodecMime_field_list[] = {
  STRUCT_FIELD_DECL(CodecMime,str), 
  STRUCT_FIELD_DECL(CodecMime,id), 
  { NULL } 
};

static const avstruct_field_descriptor FFFrac_field_list[] = {
  STRUCT_FIELD_DECL(FFFrac,val), 
  STRUCT_FIELD_DECL(FFFrac,num), 
  STRUCT_FIELD_DECL(FFFrac,den), 
  { NULL } 
};

static const avstruct_field_descriptor FFFormatContext_field_list[] = {
  STRUCT_FIELD_DECL(FFFormatContext,pub), 
  STRUCT_FIELD_DECL(FFFormatContext,nb_interleaved_streams), 
  STRUCT_FIELD_DECL(FFFormatContext,avoid_negative_ts_status), 
  STRUCT_FIELD_DECL(FFFormatContext,interleave_packet), 
  STRUCT_FIELD_DECL(FFFormatContext,packet_buffer), 
  STRUCT_FIELD_DECL(FFFormatContext,data_offset), 
  STRUCT_FIELD_DECL(FFFormatContext,raw_packet_buffer), 
  STRUCT_FIELD_DECL(FFFormatContext,parse_queue), 
  STRUCT_FIELD_DECL(FFFormatContext,parse_pkt), 
  STRUCT_FIELD_DECL(FFFormatContext,pkt), 
  STRUCT_FIELD_DECL(FFFormatContext,raw_packet_buffer_size), 
  STRUCT_FIELD_DECL(FFFormatContext,missing_ts_warning), 
  STRUCT_FIELD_DECL(FFFormatContext,inject_global_side_data), 
  STRUCT_FIELD_DECL(FFFormatContext,avoid_negative_ts_use_pts), 
  STRUCT_FIELD_DECL(FFFormatContext,shortest_end), 
  STRUCT_FIELD_DECL(FFFormatContext,initialized), 
  STRUCT_FIELD_DECL(FFFormatContext,streams_initialized), 
  STRUCT_FIELD_DECL(FFFormatContext,id3v2_meta), 
  STRUCT_FIELD_DECL(FFFormatContext,prefer_codec_framerate), 
  STRUCT_FIELD_DECL(FFFormatContext,chapter_ids_monotonic), 
  STRUCT_FIELD_DECL(FFFormatContext,metafree), 
  { NULL } 
};

static const avstruct_field_descriptor FFStream_field_list[] = {
  STRUCT_FIELD_DECL(FFStream,pub), 
  STRUCT_FIELD_DECL(FFStream,fmtctx), 
  STRUCT_FIELD_DECL(FFStream,reorder), 
  STRUCT_FIELD_DECL(FFStream,bsfc), 
  STRUCT_FIELD_DECL(FFStream,bitstream_checked), 
  STRUCT_FIELD_DECL(FFStream,avctx), 
  STRUCT_FIELD_DECL(FFStream,avctx_inited), 
  STRUCT_FIELD_DECL(FFStream,extract_extradata), 
  STRUCT_FIELD_DECL(FFStream,need_context_update), 
  STRUCT_FIELD_DECL(FFStream,is_intra_only), 
  STRUCT_FIELD_DECL(FFStream,priv_pts), 
  STRUCT_FIELD_DECL(FFStream,info), 
  STRUCT_FIELD_DECL(FFStream,index_entries), 
  STRUCT_FIELD_DECL(FFStream,nb_index_entries), 
  STRUCT_FIELD_DECL(FFStream,index_entries_allocated_size), 
  STRUCT_FIELD_DECL(FFStream,interleaver_chunk_size), 
  STRUCT_FIELD_DECL(FFStream,interleaver_chunk_duration), 
  STRUCT_FIELD_DECL(FFStream,request_probe), 
  STRUCT_FIELD_DECL(FFStream,skip_to_keyframe), 
  STRUCT_FIELD_DECL(FFStream,skip_samples), 
  STRUCT_FIELD_DECL(FFStream,start_skip_samples), 
  STRUCT_FIELD_DECL(FFStream,first_discard_sample), 
  STRUCT_FIELD_DECL(FFStream,last_discard_sample), 
  STRUCT_FIELD_DECL(FFStream,nb_decoded_frames), 
  STRUCT_FIELD_DECL(FFStream,mux_ts_offset), 
  STRUCT_FIELD_DECL(FFStream,lowest_ts_allowed), 
  STRUCT_FIELD_DECL(FFStream,pts_wrap_reference), 
  STRUCT_FIELD_DECL(FFStream,pts_wrap_behavior), 
  STRUCT_FIELD_DECL(FFStream,update_initial_durations_done), 
  STRUCT_FIELD_DECL(FFStream,pts_reorder_error), 
  STRUCT_FIELD_DECL(FFStream,pts_reorder_error_count), 
  STRUCT_FIELD_DECL(FFStream,pts_buffer), 
  STRUCT_FIELD_DECL(FFStream,last_dts_for_order_check), 
  STRUCT_FIELD_DECL(FFStream,dts_ordered), 
  STRUCT_FIELD_DECL(FFStream,dts_misordered), 
  STRUCT_FIELD_DECL(FFStream,inject_global_side_data), 
  STRUCT_FIELD_DECL(FFStream,display_aspect_ratio), 
  STRUCT_FIELD_DECL(FFStream,probe_data), 
  STRUCT_FIELD_DECL(FFStream,last_in_packet_buffer), 
  STRUCT_FIELD_DECL(FFStream,last_IP_pts), 
  STRUCT_FIELD_DECL(FFStream,last_IP_duration), 
  STRUCT_FIELD_DECL(FFStream,probe_packets), 
  STRUCT_FIELD_DECL(FFStream,need_parsing), 
  STRUCT_FIELD_DECL(FFStream,parser), 
  STRUCT_FIELD_DECL(FFStream,codec_info_nb_frames), 
  STRUCT_FIELD_DECL(FFStream,stream_identifier), 
  STRUCT_FIELD_DECL(FFStream,first_dts), 
  STRUCT_FIELD_DECL(FFStream,cur_dts), 
  STRUCT_FIELD_DECL(FFStream,codec_desc), 
  { NULL } 
};

static const avstruct_field_descriptor FFStreamGroup_field_list[] = {
  STRUCT_FIELD_DECL(FFStreamGroup,pub), 
  STRUCT_FIELD_DECL(FFStreamGroup,fmtctx), 
  { NULL } 
};

static const avstruct_field_descriptor URLContext_field_list[] = {
  STRUCT_FIELD_DECL(URLContext,av_class), 
  STRUCT_FIELD_DECL(URLContext,prot), 
  STRUCT_FIELD_DECL(URLContext,priv_data), 
  STRUCT_FIELD_DECL(URLContext,filename), 
  STRUCT_FIELD_DECL(URLContext,flags), 
  STRUCT_FIELD_DECL(URLContext,max_packet_size), 
  STRUCT_FIELD_DECL(URLContext,is_streamed), 
  STRUCT_FIELD_DECL(URLContext,is_connected), 
  STRUCT_FIELD_DECL(URLContext,interrupt_callback), 
  STRUCT_FIELD_DECL(URLContext,rw_timeout), 
  STRUCT_FIELD_DECL(URLContext,protocol_whitelist), 
  STRUCT_FIELD_DECL(URLContext,protocol_blacklist), 
  STRUCT_FIELD_DECL(URLContext,min_packet_size), 
  { NULL } 
};

static const avstruct_field_descriptor URLProtocol_field_list[] = {
  STRUCT_FIELD_DECL(URLProtocol,name), 
  STRUCT_FIELD_DECL(URLProtocol,url_open), 
  STRUCT_FIELD_DECL(URLProtocol,url_open2), 
  STRUCT_FIELD_DECL(URLProtocol,url_accept), 
  STRUCT_FIELD_DECL(URLProtocol,url_handshake), 
  STRUCT_FIELD_DECL(URLProtocol,url_read), 
  STRUCT_FIELD_DECL(URLProtocol,url_write), 
  STRUCT_FIELD_DECL(URLProtocol,url_seek), 
  STRUCT_FIELD_DECL(URLProtocol,url_close), 
  STRUCT_FIELD_DECL(URLProtocol,url_read_pause), 
  STRUCT_FIELD_DECL(URLProtocol,url_read_seek), 
  STRUCT_FIELD_DECL(URLProtocol,url_get_file_handle), 
  STRUCT_FIELD_DECL(URLProtocol,url_get_multi_file_handle), 
  STRUCT_FIELD_DECL(URLProtocol,url_get_short_seek), 
  STRUCT_FIELD_DECL(URLProtocol,url_shutdown), 
  STRUCT_FIELD_DECL(URLProtocol,priv_data_class), 
  STRUCT_FIELD_DECL(URLProtocol,priv_data_size), 
  STRUCT_FIELD_DECL(URLProtocol,flags), 
  STRUCT_FIELD_DECL(URLProtocol,url_check), 
  STRUCT_FIELD_DECL(URLProtocol,url_open_dir), 
  STRUCT_FIELD_DECL(URLProtocol,url_read_dir), 
  STRUCT_FIELD_DECL(URLProtocol,url_close_dir), 
  STRUCT_FIELD_DECL(URLProtocol,url_delete), 
  STRUCT_FIELD_DECL(URLProtocol,url_move), 
  STRUCT_FIELD_DECL(URLProtocol,default_whitelist), 
  { NULL } 
};

static const avstruct_field_descriptor URLComponents_field_list[] = {
  STRUCT_FIELD_DECL(URLComponents,url), 
  STRUCT_FIELD_DECL(URLComponents,scheme), 
  STRUCT_FIELD_DECL(URLComponents,authority), 
  STRUCT_FIELD_DECL(URLComponents,userinfo), 
  STRUCT_FIELD_DECL(URLComponents,host), 
  STRUCT_FIELD_DECL(URLComponents,port), 
  STRUCT_FIELD_DECL(URLComponents,path), 
  STRUCT_FIELD_DECL(URLComponents,query), 
  STRUCT_FIELD_DECL(URLComponents,fragment), 
  STRUCT_FIELD_DECL(URLComponents,end), 
  { NULL } 
};

static const avstruct_field_descriptor FFIOContext_field_list[] = {
  STRUCT_FIELD_DECL(FFIOContext,pub), 
  STRUCT_FIELD_DECL(FFIOContext,short_seek_get), 
  STRUCT_FIELD_DECL(FFIOContext,short_seek_threshold), 
  STRUCT_FIELD_DECL(FFIOContext,current_type), 
  STRUCT_FIELD_DECL(FFIOContext,last_time), 
  STRUCT_FIELD_DECL(FFIOContext,maxsize), 
  STRUCT_FIELD_DECL(FFIOContext,bytes_read), 
  STRUCT_FIELD_DECL(FFIOContext,bytes_written), 
  STRUCT_FIELD_DECL(FFIOContext,seek_count), 
  STRUCT_FIELD_DECL(FFIOContext,writeout_count), 
  STRUCT_FIELD_DECL(FFIOContext,orig_buffer_size), 
  STRUCT_FIELD_DECL(FFIOContext,written_output_size), 
  { NULL } 
};

FF_ENABLE_DEPRECATION_WARNINGS

