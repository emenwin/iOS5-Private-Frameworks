/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@interface AirPlayImage : NSObject
{
    struct CGSize _unadjustedSize;
    struct CGImage *_image;
    void *_ioSurface;
    int _imageOrientation;
}

- (id)initWithContentsOfFile:(id)arg1;
- (id)initWithContentsOfFile:(id)arg1 decode:(BOOL)arg2;
- (id)initWithData:(id)arg1;
- (id)initWithData:(id)arg1 decode:(BOOL)arg2;
- (void)dealloc;
@property(readonly, nonatomic) id layerContents;
- (struct CGAffineTransform)contentsTransformForLayer:(id)arg1;
- (void)_setImageOrientation:(int)arg1;
@property(readonly, nonatomic) int imageOrientation;
- (void)_setIOSurface:(void *)arg1;
@property(readonly, nonatomic) void *ioSurface;
- (void)_setCGImage:(struct CGImage *)arg1;
@property(readonly, nonatomic) struct CGImage *CGImage;
@property(readonly, nonatomic) struct CGSize size;
- (struct CGSize)_unadjustedContentSize;

@end

