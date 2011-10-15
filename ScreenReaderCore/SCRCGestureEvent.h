/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class SCRCGestureFinger;

@interface SCRCGestureEvent : NSObject
{
    unsigned int _deviceIdentifier;
    SCRCGestureFinger *_finger[5];
    unsigned int _fingerCount;
    double _time;
    struct CGPoint _averageLocation;
}

- (id)initWithDeviceIdentifier:(unsigned int)arg1;
- (void)dealloc;
- (id)description;
- (unsigned int)deviceIdentifier;
- (double)time;
- (void)addFingerWithIdentifier:(unsigned int)arg1 location:(struct CGPoint)arg2;
- (void)removeFingerWithIdentifier:(unsigned int)arg1;
- (unsigned int)fingerCount;
- (id)fingerAtIndex:(unsigned int)arg1;
- (id)fingerWithIdentifier:(unsigned int)arg1;
- (id)fingerWithoutIdentifier:(unsigned int)arg1;
- (id)fingers;
- (struct CGRect)fingerFrame;
- (struct CGPoint)averageLocation;
- (struct CGPoint)balancedLocation;
- (BOOL)isCancelEvent;
- (struct CGPoint)magneticLocation;

@end

