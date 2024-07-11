#include "config.h"

#include <string.h>
#include "vso_addons.h"
#include "internal.h"
#include "hwcontext_internal.h"

#include "libavcodec/hwconfig.h"
#include "libavcodec/hwaccels.h"
#include "libavcodec/hwaccel_internal.h"
#include "libavcodec/packet.h"

#include "libavformat/avio_internal.h"
#include "libavformat/avformat.h"
#include "libavformat/internal.h"
#include "libavformat/mux.h"
#include "libavformat/url.h"
 
#define STRUCT_SIZE(name) if (strncmp(struct_name, AV_STRINGIFY(name),sizeof(AV_STRINGIFY(name))) == 0) { \
        return sizeof(name); \
    }

#define STRUCT_ITEM_DECL(sname, fname) { .typename = AV_STRINGIFY(sname) , \
  .filename = fname , \
  .size = sizeof(sname) , \
  .fields = (const avstruct_field_descriptor *)&sname ##_field_list \
  }

#define STRUCT_ITEM_DECL_NF(sname, fname) { .typename = AV_STRINGIFY(sname) , \
  .filename = fname , \
  .size = sizeof(sname) , \
  .fields = NULL \
  }

#define STRUCT_FIELD_DECL(sname, fname) { .struct_typename = AV_STRINGIFY(sname), \
    .field_name = AV_STRINGIFY(fname), \
    .field_size = sizeof(((sname*)(0))->fname), \
    .field_offset = offsetof(sname, fname) \
    }

#include "vso_struct_rtti.c"

static const avstruct_descriptor struct_list[] = {

    /* libavutil/hwcontext.h */
    STRUCT_ITEM_DECL(AVHWDeviceContext,"libavutil/hwcontext.h"),
    STRUCT_ITEM_DECL(AVHWFramesContext,"libavutil/hwcontext.h"),
    STRUCT_ITEM_DECL(AVHWFramesConstraints,"libavutil/hwcontext.h"),

    STRUCT_ITEM_DECL(HWContextType,"libavutil/hwcontext_internal.h"),
    STRUCT_ITEM_DECL(AVHWDeviceInternal,"libavutil/hwcontext_internal.h"),
    STRUCT_ITEM_DECL(AVHWFramesInternal,"libavutil/hwcontext_internal.h"),
    STRUCT_ITEM_DECL(HWMapDescriptor,"libavutil/hwcontext_internal.h"),
    
    /* libavutil/frame.h */
    STRUCT_ITEM_DECL(AVFrameSideData,"libavutil/frame.h"),
    STRUCT_ITEM_DECL(AVRegionOfInterest,"libavutil/frame.h"),
    STRUCT_ITEM_DECL(AVFrame,"libavutil/frame.h"),
    
    /* libavutil/channel_layout.h */
    STRUCT_ITEM_DECL(AVChannelLayout,"libavutil/channel_layout.h"),
    STRUCT_ITEM_DECL(AVChannelCustom,"libavutil/channel_layout.h"),


    /* libavcodec/packet.h */
    STRUCT_ITEM_DECL(AVPacket,"libavcodec/packet.h"),
    STRUCT_ITEM_DECL(AVPacketSideData,"libavcodec/packet.h"),
    
    /* libavcodec/avcodec.h */
    STRUCT_ITEM_DECL(RcOverride,"libavcodec/avcodec.h"),
    STRUCT_ITEM_DECL(AVCodecContext,"libavcodec/avcodec.h"),
    STRUCT_ITEM_DECL(AVHWAccel,"libavcodec/avcodec.h"),
    STRUCT_ITEM_DECL(AVSubtitleRect,"libavcodec/avcodec.h"),
    STRUCT_ITEM_DECL(AVSubtitle,"libavcodec/avcodec.h"),
    STRUCT_ITEM_DECL(AVCodecParserContext,"libavcodec/avcodec.h"),
    STRUCT_ITEM_DECL(AVCodecParser,"libavcodec/avcodec.h"),
    
    /* libavcodec/codec.h */
    STRUCT_ITEM_DECL(AVProfile,"libavcodec/codec.h"),
    STRUCT_ITEM_DECL(AVCodec,"libavcodec/codec.h"),
    STRUCT_ITEM_DECL(AVCodecHWConfig,"libavcodec/codec.h"),
    
    /* libavcodec/hwconfig.h */
    STRUCT_ITEM_DECL(AVCodecHWConfigInternal,"libavcodec/hwconfig.h"),
    
    /* libavcodec/hwaccel_internal.h */
    STRUCT_ITEM_DECL(FFHWAccel,"libavcodec/hwaccel_internal.h"),


    /* libavformat/avio.h */
    STRUCT_ITEM_DECL(AVIOInterruptCB,"libavformat/avio.h"),
    STRUCT_ITEM_DECL(AVIODirEntry,"libavformat/avio.h"),
    STRUCT_ITEM_DECL(AVIODirContext,"libavformat/avio.h"),
    STRUCT_ITEM_DECL(AVIOContext,"libavformat/avio.h"),

    /* libavformat/avformat.h */
    STRUCT_ITEM_DECL(AVProbeData,"libavformat/avformat.h"),
    STRUCT_ITEM_DECL(AVOutputFormat,"libavformat/avformat.h"),
    STRUCT_ITEM_DECL(AVInputFormat,"libavformat/avformat.h"),
    STRUCT_ITEM_DECL(AVIndexEntry,"libavformat/avformat.h"),
    STRUCT_ITEM_DECL(AVStream,"libavformat/avformat.h"),
    STRUCT_ITEM_DECL(AVStreamGroup,"libavformat/avformat.h"),
    STRUCT_ITEM_DECL(AVProgram,"libavformat/avformat.h"),
    STRUCT_ITEM_DECL(AVChapter,"libavformat/avformat.h"),
    STRUCT_ITEM_DECL(AVFormatContext,"libavformat/avformat.h"),
    
    /* libavformat/mux.h */
    STRUCT_ITEM_DECL(FFOutputFormat,"libavformat/mux.h"),
    
    /* libavformat/internal.h */
    STRUCT_ITEM_DECL(AVCodecTag,"libavformat/internal.h"),
    STRUCT_ITEM_DECL(CodecMime,"libavformat/internal.h"),
    STRUCT_ITEM_DECL(FFFrac,"libavformat/internal.h"),
    STRUCT_ITEM_DECL(FFFormatContext,"libavformat/internal.h"),
    STRUCT_ITEM_DECL(FFStream,"libavformat/internal.h"),
    STRUCT_ITEM_DECL(FFStreamGroup,"libavformat/internal.h"),
    
    /* libavformat/url.h */
    STRUCT_ITEM_DECL(URLContext,"libavformat/url.h"),
    STRUCT_ITEM_DECL(URLProtocol,"libavformat/url.h"),
    STRUCT_ITEM_DECL(URLComponents,"libavformat/url.h"),
    
    /* libavformat/avio_internal.h */
    STRUCT_ITEM_DECL(FFIOContext,"libavformat/avio_internal.h"),


   { NULL }
};

const avstruct_descriptor * av_get_struct_list(void) {
    return (const avstruct_descriptor *)&struct_list;
}


const avstruct_descriptor * av_get_struct_descriptor(const char * type_name) {
    const avstruct_descriptor * litem;
    int nlen; 
    if (!type_name) return 0;
    litem = (const avstruct_descriptor *)&struct_list;
    nlen = strlen(type_name);
    for ( ;litem->typename; litem++) {
        int ilen = strlen(litem->typename);
        if (strncmp(litem->typename,type_name, (nlen > ilen ? ilen:nlen) + 1 ) == 0) {
            return litem;
        }
    }
    return 0;
}

int av_get_struct_size(const char * type_name) {
    const avstruct_descriptor * litem = av_get_struct_descriptor(type_name);
    if (litem) 
        return litem->size;
    return 0;
}