/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class OADColorScheme, OADFontScheme, OADStyleMatrix;

@interface OADBaseStylesBase : NSObject
{
    OADColorScheme *mColorScheme;
    OADStyleMatrix *mStyleMatrix;
    OADFontScheme *mFontScheme;
}

- (void)dealloc;
- (id)colorScheme;
- (id)styleMatrix;
@property(retain, nonatomic) OADFontScheme *fontScheme; // @synthesize fontScheme=mFontScheme;

@end

