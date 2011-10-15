/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"

@class MCAudioPlaylist, MCMontage, MCPlug, MPPlaylistInternal, NSMutableArray, NSMutableDictionary, NSObject<MPAudioSupport>;

@interface MPAudioPlaylist : NSObject <NSCopying, NSCoding>
{
    NSMutableArray *_songs;
    MCAudioPlaylist *_audioPlaylist;
    MCPlug *_plug;
    NSObject<MPAudioSupport> *_parentObject;
    MCMontage *_montage;
    NSMutableDictionary *_attributes;
    MPPlaylistInternal *_internal;
}

+ (BOOL)automaticallyNotifiesObserversForKey:(id)arg1;
+ (id)audioPlaylist;
- (id)init;
- (void)finalize;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)songs;
- (void)addSong:(id)arg1;
- (void)addSongs:(id)arg1;
- (void)insertSongs:(id)arg1 atIndex:(int)arg2;
- (void)removeSongsAtIndices:(id)arg1;
- (void)removeAllSongs;
- (void)moveSongsFromIndices:(id)arg1 toIndex:(int)arg2;
- (id)parentObject;
- (double)duration;
- (double)fadeInDuration;
- (void)setFadeInDuration:(double)arg1;
- (double)fadeOutDuration;
- (void)setFadeOutDuration:(double)arg1;
- (double)duckInDuration;
- (void)setDuckInDuration:(double)arg1;
- (double)duckOutDuration;
- (void)setDuckOutDuration:(double)arg1;
- (float)duckLevel;
- (void)setDuckLevel:(float)arg1;

@end

