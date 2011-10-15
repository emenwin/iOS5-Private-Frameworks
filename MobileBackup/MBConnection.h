/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSObject<MBConnectionHandler>;

@interface MBConnection : NSObject
{
    struct _xpc_connection_s *_conn;
    struct dispatch_queue_s *_eventQueue;
    NSObject<MBConnectionHandler> *_handler;
}

- (id)initWithXPCConnection:(struct _xpc_connection_s *)arg1 eventQueue:(struct dispatch_queue_s *)arg2;
- (id)initWithServiceName:(id)arg1 eventQueue:(struct dispatch_queue_s *)arg2;
- (void)_setEventHandlerForXPCConnection;
- (void)_handleXPCEvent:(void *)arg1;
- (void)_handleXPCError:(void *)arg1;
- (void)dealloc;
- (void)sendMessage:(id)arg1;
- (id)sendMessageWithReplyAndSync:(id)arg1;
- (void)suspend;
- (void)resume;
- (struct dispatch_queue_s *)eventQueue;
@property(nonatomic) NSObject<MBConnectionHandler> *messageHandler; // @synthesize messageHandler=_handler;

@end

