/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <PhotoLibraryServices/PLKeepDaemonAliveAssertion.h>

@interface PLKeepDaemonAliveAssertion (Private)
- (void)_setupHeartBeatForConnection:(struct _xpc_connection_s *)arg1;
- (void)_tearDownConnection;
- (void)_setupConnection;
- (void)_applicationWillResignActive:(id)arg1;
- (void)_applicationDidBecomeActive:(id)arg1;
- (void)_unregisterForAppActiveNotifications;
- (void)_registerForAppActiveNotifications;
@end

