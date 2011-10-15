/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "OABPropertiesManager-Protocol.h"

@interface OABDefaultsManager : NSObject <OABPropertiesManager>
{
}

- (BOOL)isFilled;
- (struct EshColor)fillFgColor;
- (struct EshColor)fillBgColor;
- (BOOL)isStroked;
- (struct EshColor)strokeFgColor;
- (struct EshColor)strokeBgColor;
- (struct EshColor)shadowColor;
- (int)fillType;
- (long)fillFgAlpha;
- (long)fillBgAlpha;
- (long)fillAngle;
- (long)fillFocus;
- (long)fillFocusLeft;
- (long)fillFocusTop;
- (long)fillFocusRight;
- (long)fillFocusBottom;
- (const EshTablePropVal_c5e6088d *)fillGradientColors;
- (unsigned long)fillBlipID;
- (struct EshBlip *)fillBlipDataReference;
- (id)fillBlipName;
- (int)strokeFillType;
- (unsigned long)strokeFillBlipID;
- (id)strokeFillBlipName;
- (long)strokeFgAlpha;
- (long)strokeWidth;
- (long)strokeMiterLimit;
- (int)strokeCompoundType;
- (int)strokePresetDash;
- (const EshTablePropVal_0be01c99 *)strokeCustomDash;
- (int)strokeCapStyle;
- (int)strokeJoinStyle;
- (int)strokeStartArrowType;
- (int)strokeStartArrowWidth;
- (int)strokeStartArrowLength;
- (int)strokeEndArrowType;
- (int)strokeEndArrowWidth;
- (int)strokeEndArrowLength;
- (BOOL)isShadowed;
- (int)shadowType;
- (long)shadowAlpha;
- (long)shadowOffsetX;
- (long)shadowOffsetY;
- (long)shadowSoftness;
- (BOOL)isFillOK;
- (BOOL)isStrokeOK;
- (BOOL)isShadowOK;
- (BOOL)isTextPath;
- (id)textPathUnicodeString;
- (int)textPathTextAlignment;
- (long)textPathFontSize;
- (id)textPathFontFamily;
- (BOOL)textPathBold;
- (BOOL)textPathItalic;
- (BOOL)textPathUnderline;
- (BOOL)textPathSmallcaps;
- (BOOL)textPathStrikethrough;
- (BOOL)hidden;

@end

