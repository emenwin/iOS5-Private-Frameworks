/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject-Protocol.h"

@protocol ADStoryboardControllerDelegate <NSObject>
- (void)reportContentErrorForAd:(id)arg1 withInfo:(id)arg2;
- (id)storyboardHumanReadableContentName:(id)arg1;
- (void)storyboardContentSignalsReady:(id)arg1;
- (void)storyboardContentRequestsGeolocation:(id)arg1 approval:(id)arg2;
- (void)storyboard:(id)arg1 didReportContentEventWithMessage:(id)arg2;
- (void)storyboard:(id)arg1 didReportSystemEventWithType:(int)arg2;
- (void)storyboardRequestsOpenURL:(id)arg1;
- (void)storyboardDidFinishFirstSignificantDraw:(id)arg1;
- (void)storyboard:(id)arg1 didFailLoadWithError:(id)arg2;
- (void)storyboardDidChangeSupportedOrientations:(id)arg1;
- (void)storyboardShouldDismiss:(id)arg1;
@end

