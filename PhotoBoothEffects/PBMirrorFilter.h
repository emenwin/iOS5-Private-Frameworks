/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <PhotoBoothEffects/PBFilter.h>

@interface PBMirrorFilter : PBFilter
{
    struct CGPoint inputPoint;
    float inputOrientation;
}

- (void)setDefaults;
- (const char *)_fragmentShaderSource;
- (id)_glesUniforms;
- (void)renderWithContext:(id)arg1 inputSize:(struct CGSize)arg2 outputRect:(struct CGRect)arg3 mirrored:(BOOL)arg4;
@property float inputOrientation; // @synthesize inputOrientation;
@property struct CGPoint inputPoint; // @synthesize inputPoint;

@end

