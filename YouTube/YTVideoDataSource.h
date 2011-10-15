/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSError, NSMutableArray, YTSearchRequest;

@interface YTVideoDataSource : NSObject
{
    BOOL _hasLoaded;
    NSMutableArray *_videos;
    YTSearchRequest *_searchRequest;
    unsigned int _startIndex;
    unsigned int _videosRemaining;
    NSError *_lastError;
}

+ (void)saveDataSources;
+ (id)sharedDataSource;
+ (void)setShouldRemoveOldDefaults;
+ (BOOL)shouldRemoveOldDefaults;
- (id)init;
- (void)dealloc;
- (id)videos;
- (void)reloadData;
- (BOOL)isLoading;
- (BOOL)hasLoaded;
- (void)loadFromDefaults;
- (id)lastError;
- (unsigned int)videosRemaining;
- (void)loadMore;
- (unsigned int)maxVideosToSave;
- (void)searchRequest:(id)arg1 receivedVideos:(id)arg2 startIndex:(unsigned int)arg3 videosRemaining:(unsigned int)arg4;
- (void)searchRequest:(id)arg1 didFailWithError:(id)arg2;
- (void)removeVideoAtIndex:(int)arg1;
- (void)removeAllVideos;
- (id)_deprecatedVideosDefaultsKey;
- (void)_saveToDefaults;
- (void)_searchRequestLoadingStatusDidChange;
- (void)_didChange;
- (void)_setLastError:(id)arg1;
- (void)_setVideos:(id)arg1;
- (void)addVideos:(id)arg1 toTop:(BOOL)arg2;
- (void)_clearVideos;

@end

