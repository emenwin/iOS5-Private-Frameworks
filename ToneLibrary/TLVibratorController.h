/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@interface TLVibratorController : NSObject
{
    id _avController;
    BOOL _customAVController;
    BOOL _startedInterruption;
}

- (void)turnOff;
- (void)turnOnWithVibrationPattern:(id)arg1;
- (void)_turnOff;
- (void)_turnOnWithVibrationPattern:(id)arg1;
- (void)uninterruptAVControllerIfAppropriate;
- (void)_uninterruptAVControllerIfAppropriate;
- (id)_interruptedAVController;
@property(retain, nonatomic, setter=setAVController:) id avController;
- (void)_setAVController:(id)arg1;
- (id)_avController;
- (void)dealloc;
- (id)initWithAVController:(id)arg1;
- (id)init;

@end

