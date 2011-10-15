/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class GKSessionInternal, GKVoiceChatSessionInternal, NSMutableArray, NSMutableDictionary, NSString;

@interface VoiceChatSessionRoster : NSObject
{
    GKSessionInternal *_gkSession;
    NSString *_peerID;
    GKVoiceChatSessionInternal *_gkvs;
    struct dispatch_queue_s *_sendQueue;
    NSMutableArray *_connectedPeers;
    NSMutableDictionary *_peerStateTable;
    struct _opaque_pthread_mutex_t resMutex;
    BOOL _needsUpdateBeaconList;
    BOOL _waitingToCalculateFocus;
    unsigned int _deviceRating;
    unsigned int _focusRating;
    unsigned int _chosenFocusRating;
    unsigned int _focusID;
    BOOL _isBeaconUp;
    BOOL _hasFocus;
}

- (id)initWithGKSession:(id)arg1 peerID:(id)arg2 voiceChatSession:(id)arg3 sendQueue:(struct dispatch_queue_s *)arg4;
- (void)dealloc;
- (void)cleanup;
- (unsigned int)focusID;
- (void)configureDeviceRating;
- (BOOL)recalculateFocusRating;
- (void)startBeaconWrapper:(id)arg1;
- (void)startBeacon;
- (void)updateBeacon;
- (void)stopBeacon;
- (void)sendBeacon:(struct tagVoiceChatBeacon *)arg1 ToPeer:(id)arg2;
- (void)sendBeacons;
- (void)calculateFocus:(id)arg1;
- (void)peer:(id)arg1 didChangeState:(int)arg2;
- (void)receivedBeacon:(id)arg1 fromPeer:(id)arg2;
- (void)processUnsubscribeBeacon:(struct tagVoiceChatBeacon *)arg1 beaconState:(id)arg2 fromPeer:(id)arg3;
- (void)processSubscribeBeacon:(struct tagVoiceChatBeacon *)arg1 beaconState:(id)arg2 fromPeer:(id)arg3;
- (id)subscribedPeers;
- (BOOL)hasFocus;

@end

