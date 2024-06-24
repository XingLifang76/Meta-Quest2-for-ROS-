//
// Created by ksohe on 5/23/2024.
//

#ifndef HELLO_XR_STATIC_GSTREAMER_H
#define HELLO_XR_STATIC_GSTREAMER_H

#ifdef __cplusplus
extern "C" {
#endif
    
#include <gst/gst.h>
#include <gio/gio.h>

#define GST_G_IO_MODULE_DECLARE(name) \
extern void G_PASTE(g_io_, G_PASTE(name, _load)) (gpointer data)

#define GST_G_IO_MODULE_LOAD(name) \
G_PASTE(g_io_, G_PASTE(name, _load)) (NULL)

/* Declaration of static plugins */
GST_PLUGIN_STATIC_DECLARE(coreelements);  GST_PLUGIN_STATIC_DECLARE(coretracers);  GST_PLUGIN_STATIC_DECLARE(adder);  GST_PLUGIN_STATIC_DECLARE(app);  GST_PLUGIN_STATIC_DECLARE(audioconvert);  GST_PLUGIN_STATIC_DECLARE(audiomixer);  GST_PLUGIN_STATIC_DECLARE(audiorate);  GST_PLUGIN_STATIC_DECLARE(audioresample);  GST_PLUGIN_STATIC_DECLARE(audiotestsrc);  GST_PLUGIN_STATIC_DECLARE(compositor);  GST_PLUGIN_STATIC_DECLARE(gio);  GST_PLUGIN_STATIC_DECLARE(overlaycomposition);  GST_PLUGIN_STATIC_DECLARE(pango);  GST_PLUGIN_STATIC_DECLARE(rawparse);  GST_PLUGIN_STATIC_DECLARE(typefindfunctions);  GST_PLUGIN_STATIC_DECLARE(videoconvertscale);  GST_PLUGIN_STATIC_DECLARE(videorate);  GST_PLUGIN_STATIC_DECLARE(videotestsrc);  GST_PLUGIN_STATIC_DECLARE(volume);  GST_PLUGIN_STATIC_DECLARE(autodetect);  GST_PLUGIN_STATIC_DECLARE(videofilter);  GST_PLUGIN_STATIC_DECLARE(insertbin);  GST_PLUGIN_STATIC_DECLARE(switchbin);  GST_PLUGIN_STATIC_DECLARE(fallbackswitch);  GST_PLUGIN_STATIC_DECLARE(livesync);  GST_PLUGIN_STATIC_DECLARE(rsinter);  GST_PLUGIN_STATIC_DECLARE(rstracers);  GST_PLUGIN_STATIC_DECLARE(threadshare);  GST_PLUGIN_STATIC_DECLARE(togglerecord);  GST_PLUGIN_STATIC_DECLARE(playback);  GST_PLUGIN_STATIC_DECLARE(uriplaylistbin);  GST_PLUGIN_STATIC_DECLARE(subparse);  GST_PLUGIN_STATIC_DECLARE(ogg);  GST_PLUGIN_STATIC_DECLARE(theora);  GST_PLUGIN_STATIC_DECLARE(vorbis);  GST_PLUGIN_STATIC_DECLARE(opus);  GST_PLUGIN_STATIC_DECLARE(adaptivedemux2);  GST_PLUGIN_STATIC_DECLARE(alaw);  GST_PLUGIN_STATIC_DECLARE(amrnb);  GST_PLUGIN_STATIC_DECLARE(amrwbdec);  GST_PLUGIN_STATIC_DECLARE(apetag);  GST_PLUGIN_STATIC_DECLARE(audioparsers);  GST_PLUGIN_STATIC_DECLARE(auparse);  GST_PLUGIN_STATIC_DECLARE(avi);  GST_PLUGIN_STATIC_DECLARE(dv);  GST_PLUGIN_STATIC_DECLARE(flac);  GST_PLUGIN_STATIC_DECLARE(flv);  GST_PLUGIN_STATIC_DECLARE(flxdec);  GST_PLUGIN_STATIC_DECLARE(icydemux);  GST_PLUGIN_STATIC_DECLARE(id3demux);  GST_PLUGIN_STATIC_DECLARE(isomp4);  GST_PLUGIN_STATIC_DECLARE(jpeg);  GST_PLUGIN_STATIC_DECLARE(lame);  GST_PLUGIN_STATIC_DECLARE(matroska);  GST_PLUGIN_STATIC_DECLARE(mpg123);  GST_PLUGIN_STATIC_DECLARE(mulaw);  GST_PLUGIN_STATIC_DECLARE(multipart);  GST_PLUGIN_STATIC_DECLARE(png);  GST_PLUGIN_STATIC_DECLARE(speex);  GST_PLUGIN_STATIC_DECLARE(taglib);  GST_PLUGIN_STATIC_DECLARE(vpx);  GST_PLUGIN_STATIC_DECLARE(wavenc);  GST_PLUGIN_STATIC_DECLARE(wavpack);  GST_PLUGIN_STATIC_DECLARE(wavparse);  GST_PLUGIN_STATIC_DECLARE(xingmux);  GST_PLUGIN_STATIC_DECLARE(y4menc);  GST_PLUGIN_STATIC_DECLARE(adpcmdec);  GST_PLUGIN_STATIC_DECLARE(adpcmenc);  GST_PLUGIN_STATIC_DECLARE(assrender);  GST_PLUGIN_STATIC_DECLARE(bz2);  GST_PLUGIN_STATIC_DECLARE(codecalpha);  GST_PLUGIN_STATIC_DECLARE(codectimestamper);  GST_PLUGIN_STATIC_DECLARE(dash);  GST_PLUGIN_STATIC_DECLARE(dvbsubenc);  GST_PLUGIN_STATIC_DECLARE(dvbsuboverlay);  GST_PLUGIN_STATIC_DECLARE(dvdspu);  GST_PLUGIN_STATIC_DECLARE(hls);  GST_PLUGIN_STATIC_DECLARE(id3tag);  GST_PLUGIN_STATIC_DECLARE(ivfparse);  GST_PLUGIN_STATIC_DECLARE(midi);  GST_PLUGIN_STATIC_DECLARE(mxf);  GST_PLUGIN_STATIC_DECLARE(openh264);  GST_PLUGIN_STATIC_DECLARE(opusparse);  GST_PLUGIN_STATIC_DECLARE(pcapparse);  GST_PLUGIN_STATIC_DECLARE(pnm);  GST_PLUGIN_STATIC_DECLARE(rfbsrc);  GST_PLUGIN_STATIC_DECLARE(siren);  GST_PLUGIN_STATIC_DECLARE(smoothstreaming);  GST_PLUGIN_STATIC_DECLARE(subenc);  GST_PLUGIN_STATIC_DECLARE(videoparsersbad);  GST_PLUGIN_STATIC_DECLARE(y4mdec);  GST_PLUGIN_STATIC_DECLARE(jpegformat);  GST_PLUGIN_STATIC_DECLARE(gdp);  GST_PLUGIN_STATIC_DECLARE(rsvg);  GST_PLUGIN_STATIC_DECLARE(openjpeg);  GST_PLUGIN_STATIC_DECLARE(spandsp);  GST_PLUGIN_STATIC_DECLARE(sbc);  GST_PLUGIN_STATIC_DECLARE(zbar);  GST_PLUGIN_STATIC_DECLARE(androidmedia);  GST_PLUGIN_STATIC_DECLARE(cdg);  GST_PLUGIN_STATIC_DECLARE(claxon);  GST_PLUGIN_STATIC_DECLARE(dav1d);  GST_PLUGIN_STATIC_DECLARE(rsclosedcaption);  GST_PLUGIN_STATIC_DECLARE(ffv1);  GST_PLUGIN_STATIC_DECLARE(fmp4);  GST_PLUGIN_STATIC_DECLARE(mp4);  GST_PLUGIN_STATIC_DECLARE(gif);  GST_PLUGIN_STATIC_DECLARE(hsv);  GST_PLUGIN_STATIC_DECLARE(lewton);  GST_PLUGIN_STATIC_DECLARE(rav1e);  GST_PLUGIN_STATIC_DECLARE(json);  GST_PLUGIN_STATIC_DECLARE(rspng);  GST_PLUGIN_STATIC_DECLARE(regex);  GST_PLUGIN_STATIC_DECLARE(textwrap);  GST_PLUGIN_STATIC_DECLARE(textahead);  GST_PLUGIN_STATIC_DECLARE(tcp);  GST_PLUGIN_STATIC_DECLARE(rtsp);  GST_PLUGIN_STATIC_DECLARE(rtp);  GST_PLUGIN_STATIC_DECLARE(rtpmanager);  GST_PLUGIN_STATIC_DECLARE(soup);  GST_PLUGIN_STATIC_DECLARE(udp);  GST_PLUGIN_STATIC_DECLARE(dtls);  GST_PLUGIN_STATIC_DECLARE(netsim);  GST_PLUGIN_STATIC_DECLARE(rist);  GST_PLUGIN_STATIC_DECLARE(rtmp2);  GST_PLUGIN_STATIC_DECLARE(rtpmanagerbad);  GST_PLUGIN_STATIC_DECLARE(rtponvif);  GST_PLUGIN_STATIC_DECLARE(sctp);  GST_PLUGIN_STATIC_DECLARE(sdpelem);  GST_PLUGIN_STATIC_DECLARE(srtp);  GST_PLUGIN_STATIC_DECLARE(srt);  GST_PLUGIN_STATIC_DECLARE(webrtc);  GST_PLUGIN_STATIC_DECLARE(nice);  GST_PLUGIN_STATIC_DECLARE(rtspclientsink);  GST_PLUGIN_STATIC_DECLARE(aws);  GST_PLUGIN_STATIC_DECLARE(hlssink3);  GST_PLUGIN_STATIC_DECLARE(ndi);  GST_PLUGIN_STATIC_DECLARE(rsonvif);  GST_PLUGIN_STATIC_DECLARE(raptorq);  GST_PLUGIN_STATIC_DECLARE(reqwest);  GST_PLUGIN_STATIC_DECLARE(rsrtp);  GST_PLUGIN_STATIC_DECLARE(rsrtsp);  GST_PLUGIN_STATIC_DECLARE(webrtchttp);  GST_PLUGIN_STATIC_DECLARE(rswebrtc);  GST_PLUGIN_STATIC_DECLARE(opengl);  GST_PLUGIN_STATIC_DECLARE(ipcpipeline);  GST_PLUGIN_STATIC_DECLARE(opensles);
/* Declaration of static gio modules */
GST_G_IO_MODULE_DECLARE(openssl);

/* Call this function to load GIO modules */
static void
gst_android_load_gio_modules (void);

/* This is called by gst_init() */

void gst_init_static_plugins (void);
#ifdef __cplusplus
}
#endif
#endif //HELLO_XR_STATIC_GSTREAMER_H
