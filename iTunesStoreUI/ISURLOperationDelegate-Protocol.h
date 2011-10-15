/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "ISOperationDelegate-Protocol.h"

@protocol ISURLOperationDelegate <ISOperationDelegate>

@optional
- (id)operation:(id)arg1 sanitizedStringForString:(id)arg2;
- (BOOL)operation:(id)arg1 willSendRequestForAuthenticationChallenge:(id)arg2;
- (void)operation:(id)arg1 willSendRequest:(id)arg2;
- (void)operation:(id)arg1 finishedWithOutput:(id)arg2;
- (void)operation:(id)arg1 didReceiveResponse:(id)arg2;
- (void)operation:(id)arg1 didDiscoverContentLength:(id)arg2;
@end

