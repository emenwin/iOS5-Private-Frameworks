/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class SSXPCConnection;

@interface SSEventMonitor : NSObject
{
    id <SSEventMonitorDelegate> _delegate;
    struct dispatch_queue_s *_delegateQueue;
    struct dispatch_queue_s *_dispatchQueue;
    SSXPCConnection *_eventConnection;
}

- (void)_handleMessage:(void *)arg1 fromServerConnection:(struct _xpc_connection_s *)arg2;
- (void)_connectEventConnection;
@property id <SSEventMonitorDelegate> delegate;
- (void)dealloc;
- (id)init;

@end

