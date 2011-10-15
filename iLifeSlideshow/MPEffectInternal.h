/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSString;

@interface MPEffectInternal : NSObject
{
    float opacity;
    struct CGPoint position;
    float zPosition;
    struct CGSize size;
    float rotationAngle;
    float xRotationAngle;
    float yRotationAngle;
    double timeIn;
    double phaseInDuration;
    double phaseOutDuration;
    double mainDuration;
    NSString *effectID;
    NSString *presetID;
    int audioPriority;
    int randomSeed;
}

- (void)dealloc;
@property(nonatomic) int randomSeed; // @synthesize randomSeed;
@property(nonatomic) int audioPriority; // @synthesize audioPriority;
@property(retain, nonatomic) NSString *presetID; // @synthesize presetID;
@property(retain, nonatomic) NSString *effectID; // @synthesize effectID;
@property(nonatomic) double mainDuration; // @synthesize mainDuration;
@property(nonatomic) double phaseOutDuration; // @synthesize phaseOutDuration;
@property(nonatomic) double phaseInDuration; // @synthesize phaseInDuration;
@property(nonatomic) double timeIn; // @synthesize timeIn;
@property(nonatomic) float yRotationAngle; // @synthesize yRotationAngle;
@property(nonatomic) float xRotationAngle; // @synthesize xRotationAngle;
@property(nonatomic) float rotationAngle; // @synthesize rotationAngle;
@property(nonatomic) struct CGSize size; // @synthesize size;
@property(nonatomic) float zPosition; // @synthesize zPosition;
@property(nonatomic) struct CGPoint position; // @synthesize position;
@property(nonatomic) float opacity; // @synthesize opacity;

@end

