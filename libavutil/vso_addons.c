#include "config.h"

#include <string.h>
#include "vso_addons.h"
#include "internal.h"

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
  .fields = (const avstruct_field_item *)&sname ##_field_list \
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

static const avstruct_size_item struct_list[] = {

    /* libavutil/hwcontext.h */
    STRUCT_ITEM_DECL_NF(AVHWDeviceContext,"libavutil/hwcontext.h"),
    STRUCT_ITEM_DECL_NF(AVHWFramesContext,"libavutil/hwcontext.h"),
    STRUCT_ITEM_DECL_NF(AVHWFramesConstraints,"libavutil/hwcontext.h"),
    /* libavutil/frame.h */
    STRUCT_ITEM_DECL(AVFrameSideData,"libavutil/frame.h"),
    STRUCT_ITEM_DECL_NF(AVRegionOfInterest,"libavutil/frame.h"),
    STRUCT_ITEM_DECL(AVFrame,"libavutil/frame.h"),
    /* libavutil/avio.h */
    STRUCT_ITEM_DECL(AVIOInterruptCB,"libavutil/avio.h"),
    STRUCT_ITEM_DECL_NF(AVIODirEntry,"libavutil/avio.h"),
    STRUCT_ITEM_DECL_NF(AVIODirContext,"libavutil/avio.h"),
    STRUCT_ITEM_DECL(AVIOContext,"libavutil/avio.h"),
    /* libavutil/channel_layout.h */
    STRUCT_ITEM_DECL_NF(AVChannelLayout,"libavutil/channel_layout.h"),
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
    STRUCT_ITEM_DECL_NF(AVCodecParserContext,"libavcodec/avcodec.h"),
    STRUCT_ITEM_DECL_NF(AVCodecParser,"libavcodec/avcodec.h"),
    STRUCT_ITEM_DECL(AVCodec,"libavcodec/avcodec.h"),
    /* libavcodec/codec.h */
    STRUCT_ITEM_DECL(AVProfile,"libavcodec/codec.h"),
    STRUCT_ITEM_DECL(AVCodec,"libavcodec/codec.h"),
    STRUCT_ITEM_DECL(AVCodecHWConfig,"libavcodec/codec.h"),
    /* libavcodec/hwconfig.h */
    STRUCT_ITEM_DECL_NF(AVCodecHWConfigInternal,"libavcodec/hwconfig.h"),
    /* libavcodec/hwaccel_internal.h */
    STRUCT_ITEM_DECL(FFHWAccel,"libavcodec/hwaccel_internal.h"),


    /* libavformat/avformat.h */
    STRUCT_ITEM_DECL_NF(AVProbeData,"libavformat/avformat.h"),
    STRUCT_ITEM_DECL(AVOutputFormat,"libavformat/avformat.h"),
    STRUCT_ITEM_DECL(AVInputFormat,"libavformat/avformat.h"),
    STRUCT_ITEM_DECL_NF(AVIndexEntry,"libavformat/avformat.h"),
    STRUCT_ITEM_DECL(AVStream,"libavformat/avformat.h"),
    STRUCT_ITEM_DECL(AVStreamGroup,"libavformat/avformat.h"),
    STRUCT_ITEM_DECL(AVProgram,"libavformat/avformat.h"),
    STRUCT_ITEM_DECL(AVChapter,"libavformat/avformat.h"),
    STRUCT_ITEM_DECL(AVFormatContext,"libavformat/avformat.h"),
    /* libavformat/mux.h */
    STRUCT_ITEM_DECL_NF(FFOutputFormat,"libavformat/mux.h"),
    /* libavformat/internal.h */
    STRUCT_ITEM_DECL(AVCodecTag,"libavformat/internal.h"),
    STRUCT_ITEM_DECL_NF(CodecMime,"libavformat/internal.h"),
    STRUCT_ITEM_DECL_NF(FFFrac,"libavformat/internal.h"),
    STRUCT_ITEM_DECL_NF(FFFormatContext,"libavformat/internal.h"),
    STRUCT_ITEM_DECL_NF(FFStream,"libavformat/internal.h"),
    STRUCT_ITEM_DECL_NF(FFStreamGroup,"libavformat/internal.h"),
    /* libavformat/url.h */
    STRUCT_ITEM_DECL_NF(URLContext,"libavformat/url.h"),
    STRUCT_ITEM_DECL_NF(URLProtocol,"libavformat/url.h"),
    STRUCT_ITEM_DECL_NF(URLComponents,"libavformat/url.h"),
    /* libavformat/avio_internal.h */
    STRUCT_ITEM_DECL_NF(FFIOContext,"libavformat/avio_internal.h"),

   { NULL }
};

const avstruct_size_item * av_struct_list(void) {
    return (const avstruct_size_item *)&struct_list;
}

int av_struct_sizeof(const char * struct_name) {
    const avstruct_size_item * litem;
    int nlen; 
    if (!struct_name) return 0;
    litem = (const avstruct_size_item *)&struct_list;
    nlen = strlen(struct_name);
    for ( ;litem->typename; litem++) {
        int ilen = strlen(litem->typename);
        if (strncmp(litem->typename,struct_name, (nlen > ilen ? ilen:nlen) + 1 ) == 0) {
            return litem->size;
        }
    }
    return 0;
}


const avstruct_field_item * av_struct_fields(const char * struct_name) {

    if (strncmp(struct_name,"AVFrame",8) == 0) {        
        return (const avstruct_field_item *)&AVFrame_field_list;
    }
    if (strncmp(struct_name,"AVChannelLayout",8) == 0) {        
        return (const avstruct_field_item *)&AVChannelLayout_field_list;
    }
    return NULL;

}