/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSMutableArray;

@interface EventSystemManager : NSObject
{
    struct __IOHIDEventSystemClient *eventSystemClient;
    NSMutableArray *clientList;
    struct __CFRunLoop *runLoop;
    BOOL manageAccel;
    int accelEventIndex;
    int accelUpdateInternalUS;
}

+ (id)sharedEventSystem;
- (id)init;
- (void)dealloc;
- (struct __IOHIDEventSystemClient *)eventSystemClient;
- (void)updateClientState;
- (id)clientList;
- (BOOL)managingAccel;
- (void)setAccelUpdateInterval:(double)arg1;
- (void)refreshEventSystem;
- (void)addClient:(id)arg1;
- (void)removeClient:(id)arg1;

@end

