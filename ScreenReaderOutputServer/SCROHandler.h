/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "SCROHandlerProtocol-Protocol.h"

@class NSLock;

@interface SCROHandler : NSObject <SCROHandlerProtocol>
{
    id _callbackDelegate;
    NSLock *_lock;
    BOOL isInvalid;
}

- (id)init;
- (void)dealloc;
- (void)setCallbackDelegate:(id)arg1;
- (id)callbackDelegate;
- (void)lock;
- (void)unlock;
- (void)invalidate;
- (int)handleRegisterCallbackForKey:(int)arg1 trusted:(BOOL)arg2;
- (int)handleSetValue:(id)arg1 forKey:(int)arg2 trusted:(BOOL)arg3;
- (int)handleGetValue:(id *)arg1 forKey:(int)arg2 trusted:(BOOL)arg3;
- (int)handleGetValue:(id *)arg1 forKey:(int)arg2 withObject:(id)arg3 trusted:(BOOL)arg4;
- (int)handlePerformActionForKey:(int)arg1 trusted:(BOOL)arg2;

@end

