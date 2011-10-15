/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class CertUITrustManager, NSString;

@interface CertUIConnectionDelegate : NSObject
{
    CertUITrustManager *_trustManager;
    id _forwardingDelegate;
    NSString *_connectionDisplayName;
    struct {
        unsigned int canAuthenticateAgainstProtectionSpace:1;
        unsigned int didReceiveAuthenticationChallenge:1;
    } _delegateRespondsTo;
}

+ (id)defaultServiceForProtocol:(id)arg1;
@property(copy, nonatomic) NSString *connectionDisplayName; // @synthesize connectionDisplayName=_connectionDisplayName;
@property(nonatomic) id forwardingDelegate; // @synthesize forwardingDelegate=_forwardingDelegate;
- (void)connection:(id)arg1 didReceiveAuthenticationChallenge:(id)arg2;
- (void)_continueConnectionWithResponse:(int)arg1 challenge:(id)arg2 service:(id)arg3;
- (BOOL)connection:(id)arg1 canAuthenticateAgainstProtectionSpace:(id)arg2;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (BOOL)respondsToSelector:(SEL)arg1;
- (void)dealloc;

@end

