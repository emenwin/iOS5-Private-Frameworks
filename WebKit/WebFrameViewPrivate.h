/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class WAKScrollView, WebFrame;

@interface WebFrameViewPrivate : NSObject
{
    WebFrame *webFrame;
    WAKScrollView *frameScrollView;
    BOOL includedInWebKitStatistics;
}

- (void)dealloc;

@end

