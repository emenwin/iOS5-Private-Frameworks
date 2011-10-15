/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSMutableArray, NSString, SSXPCServer;

@interface SSDistributedNotificationCenter : NSObject
{
    struct dispatch_queue_s *_dispatchQueue;
    NSMutableArray *_observers;
    NSString *_portName;
    SSXPCServer *_server;
}

- (void)_sendRegistrationMessage:(long long)arg1 name:(id)arg2;
- (void)_distributedNotificationMessage:(void *)arg1 connection:(struct _xpc_connection_s *)arg2;
- (void)removeObserver:(id)arg1;
@property(readonly) NSString *namedPort;
- (id)addObserverForName:(id)arg1 queue:(struct dispatch_queue_s *)arg2 usingBlock:(id)arg3;
- (void)dealloc;
- (id)initWithNamedPort:(id)arg1;
- (id)init;

@end

