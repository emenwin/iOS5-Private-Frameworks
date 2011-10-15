/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <MusicLibrary/MLChapterTOC.h>

@interface MLITChapterTOC : MLChapterTOC
{
    unsigned int _totalTimeInMS;
    struct ChapterData *_chapterDataRef;
    unsigned int *_picCookieIndexMap;
    unsigned int *_urlCookieIndexMap;
    unsigned int *_nameCookieIndexMap;
}

+ (void)enumerateArtworkCacheIDsInFlattenedChapterData:(id)arg1 usingBlock:(id)arg2;
+ (id)imageCacheKeyForTrackWithPID:(long long)arg1 startTimeMS:(unsigned int)arg2;
+ (unsigned int **)_chapterDataCookieIndexMapForProperty:(int)arg1 ofChapterTOC:(id)arg2;
- (id)bestImageDataForSize:(struct CGSize)arg1 chapterIndex:(unsigned int)arg2 artworkInstanceInfo:(struct MLArtworkInstanceInfo *)arg3;
- (id)imageDataForArtworkFormatID:(unsigned int)arg1 chapterIndex:(unsigned int)arg2 artworkInstanceInfo:(struct MLArtworkInstanceInfo *)arg3;
- (id)getImageWithArtworkFormatID:(unsigned int)arg1 size:(struct CGSize)arg2 chapterIndex:(unsigned int)arg3 artworkInstanceInfo:(struct MLArtworkInstanceInfo *)arg4;
- (id)imageDataForArtworkFormatID:(unsigned int)arg1 size:(struct CGSize)arg2 artworkChapterIndex:(unsigned int)arg3 artworkInstanceInfo:(struct MLArtworkInstanceInfo *)arg4;
- (id)urlPropertyOfChapterAtIndex:(unsigned int)arg1;
- (id)urlTitlePropertyOfChapterAtIndex:(unsigned int)arg1;
- (id)urlTitleTrimmingCharacterSet;
- (id)titlePropertyOfChapterAtIndex:(unsigned int)arg1;
- (unsigned int)timeLocationInMSOfChapterAtIndex:(unsigned int)arg1;
- (unsigned int)timeLocationInMSOfGroupAtIndex:(unsigned int)arg1 groupingProperty:(int)arg2;
- (unsigned int)groupIndexAtTimeLocationInMS:(unsigned int)arg1 groupingProperty:(int)arg2;
- (unsigned int)durationInMSOfGroupAtIndex:(unsigned int)arg1 groupingProperty:(int)arg2;
- (unsigned int)totalTimeInMS;
- (unsigned int)groupIndexForChapterIndex:(unsigned int)arg1 groupingProperty:(int)arg2;
- (unsigned int)chapterIndexForGroupIndex:(unsigned int)arg1 groupingProperty:(int)arg2;
- (unsigned int)countOfGroupsForProperty:(int)arg1;
- (unsigned int *)_cachedCookieIndexMapForProperty:(int)arg1 createIfNecessary:(BOOL)arg2;
- (unsigned int)countOfChapters;
- (void)dealloc;
- (struct ChapterData *)chapterDataRef;
- (id)initWithChapterDataRef:(struct ChapterData *)arg1 totalTimeInMS:(unsigned int)arg2;

@end

