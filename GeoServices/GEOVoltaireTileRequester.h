/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <GeoServices/GEOTileRequester.h>

#import "GEOVoltaireTileDownloaderDelegate-Protocol.h"

@class NSMutableArray, NSThread;

@interface GEOVoltaireTileRequester : GEOTileRequester <GEOVoltaireTileDownloaderDelegate>
{
    NSMutableArray *_activeDownloads;
    BOOL _experiencedError;
    NSThread *_startThread;
}

+ (unsigned char)tileProviderIdentifier;
- (void)tileDownload:(id)arg1 didFailWithError:(id)arg2;
- (void)tileDownloadFinished:(id)arg1;
- (void)tileDownload:(id)arg1 didReceiveData:(id)arg2 edition:(unsigned int)arg3 forKey:(struct _GEOTileKey)arg4;
- (void)tryFinish;
- (void)cancel;
- (void)cleanup;
- (void)start;
- (unsigned int)tileSetForKey:(const struct _GEOTileKey *)arg1;
- (void)dealloc;

@end

