/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject-Protocol.h"

@protocol SUManagerDelegate <NSObject>

@optional
- (void)installDidFinish:(id)arg1;
- (void)installDidFail:(id)arg1 withError:(id)arg2;
- (void)installDidStart:(id)arg1;
- (void)downloadWasInvalidatedForNewUpdateAvailable:(id)arg1;
- (void)downloadDidFinish:(id)arg1;
- (void)downloadDidFail:(id)arg1 withError:(id)arg2;
- (void)downloadProgressDidChange:(id)arg1;
- (void)downloadDidStart:(id)arg1;
- (void)automaticDownloadDidFailToStartForNewUpdateAvailable:(id)arg1 withError:(id)arg2;
- (void)scanDidCompleteWithNewUpdateAvailable:(id)arg1 error:(id)arg2;
- (void)scanRequestDidFinishForOptions:(id)arg1 update:(id)arg2 error:(id)arg3;
- (void)scanRequestDidStartForOptions:(id)arg1;
@end

