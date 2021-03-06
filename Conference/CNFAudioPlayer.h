/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@interface CNFAudioPlayer : NSObject
{
    id <CNFSoundPlayerDelegateProtocol> _delegate;
}

- (void)dealloc;
- (void)playSelectedSound;
- (void)playSound:(int)arg1 numOfLoops:(int)arg2 pauseDuration:(float)arg3;
- (void)stop;
@property(readonly) BOOL playingSound;
@property id <CNFSoundPlayerDelegateProtocol> delegate; // @synthesize delegate=_delegate;

@end

