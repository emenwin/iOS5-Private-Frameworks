/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@interface MRUtilities : NSObject
{
}

+ (void)setImage:(const CDStruct_911c9307 *)arg1 onTextureUnit:(unsigned int)arg2 withReferenceAspectRatio:(float)arg3;
+ (void)setImage:(const CDStruct_911c9307 *)arg1 onTextureUnit:(unsigned int)arg2 withReferenceAspectRatio:(float)arg3 state:(float [16])arg4;
+ (void)unsetImage:(const CDStruct_911c9307 *)arg1 onTextureUnit:(unsigned int)arg2;
+ (void)unsetImage:(const CDStruct_911c9307 *)arg1 onTextureUnit:(unsigned int)arg2 state:(float [16])arg3;
+ (double)transformTime:(double)arg1 forAnimationPath:(id)arg2;
+ (float)valueForScalarAnimationPath:(id)arg1 atTime:(double)arg2 defaultsTo:(float)arg3 previousKeyValue:(float *)arg4 nextKeyValue:(float *)arg5;
+ (struct CGPoint)valueForPointAnimationPath:(id)arg1 atTime:(double)arg2 defaultsTo:(struct CGPoint)arg3 previousKeyPoint:(struct CGPoint *)arg4 nextKeyPoint:(struct CGPoint *)arg5;

@end
