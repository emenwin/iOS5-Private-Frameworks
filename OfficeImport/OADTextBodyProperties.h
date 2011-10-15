/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <OfficeImport/OADProperties.h>

@class OADTextBodyAutoFit, OADTextWarp;

@interface OADTextBodyProperties : OADProperties
{
    OADTextBodyAutoFit *mAutoFit;
    OADTextWarp *mTextWarp;
    double mTopInset;
    double mLeftInset;
    double mBottomInset;
    double mRightInset;
    double mRotation;
    double mColumnSpacing;
    unsigned short mColumnCount;
    unsigned short mTextBodyId;
    unsigned char mTextAnchorType;
    unsigned char mVerticalType;
    unsigned char mWrapType;
    unsigned char mVerticalOverflowType;
    unsigned char mHorizontalOverflowType;
    unsigned int mRepectFirstLastParagraphSpacing:1;
    unsigned int mIsUpright:1;
    unsigned int mIsAnchorCenter:1;
    unsigned int mIsLeftToRightColumns:1;
    unsigned int mHasVerticalOverflowType:1;
    unsigned int mHasHorizontalOverflowType:1;
    unsigned int mHasTextBodyId:1;
    unsigned int mHasVerticalType:1;
    unsigned int mHasWrapType:1;
    unsigned int mHasTextAnchorType:1;
    unsigned int mHasIsAnchorCenter:1;
    unsigned int mHasIsUpright:1;
    unsigned int mHasRotation:1;
    unsigned int mHasColumnCount:1;
    unsigned int mHasColumnSpacing:1;
    unsigned int mHasIsLeftToRightColumns:1;
    unsigned int mHasRepectFirstLastParagraphSpacing:1;
    unsigned int mHasTopInset:1;
    unsigned int mHasLeftInset:1;
    unsigned int mHasRightInset:1;
    unsigned int mHasBottomInset:1;
}

+ (id)defaultProperties;
+ (id)defaultEscherWordArtProperties;
- (id)init;
- (id)initWithDefaults;
- (void)dealloc;
- (BOOL)hasRespectLastFirstLineSpacing;
- (BOOL)respectLastFirstLineSpacing;
- (void)setRespectLastFirstLineSpacing:(BOOL)arg1;
- (BOOL)hasTopInset;
- (BOOL)hasLeftInset;
- (BOOL)hasRightInset;
- (BOOL)hasBottomInset;
- (double)topInset;
- (void)setTopInset:(double)arg1;
- (double)leftInset;
- (void)setLeftInset:(double)arg1;
- (double)bottomInset;
- (void)setBottomInset:(double)arg1;
- (double)rightInset;
- (void)setRightInset:(double)arg1;
- (BOOL)hasColumnCount;
- (int)columnCount;
- (void)setColumnCount:(int)arg1;
- (BOOL)hasColumnSpacing;
- (double)columnSpacing;
- (void)setColumnSpacing:(double)arg1;
- (BOOL)hasIsLeftToRightColumns;
- (BOOL)isLeftToRightColumns;
- (void)setIsLeftToRightColumns:(BOOL)arg1;
- (BOOL)hasAutoFit;
- (id)autoFit;
- (void)setAutoFit:(id)arg1;
- (BOOL)hasVerticalType;
- (int)verticalType;
- (void)setVerticalType:(int)arg1;
- (BOOL)hasWrapType;
- (int)wrapType;
- (void)setWrapType:(int)arg1;
- (BOOL)hasVerticalOverflowType;
- (int)verticalOverflowType;
- (void)setVerticalOverflowType:(int)arg1;
- (BOOL)hasHorizontalOverflowType;
- (int)horizontalOverflowType;
- (void)setHorizontalOverflowType:(int)arg1;
- (BOOL)hasTextBodyId;
- (int)textBodyId;
- (void)setTextBodyId:(int)arg1;
- (BOOL)hasTextWarp;
- (id)textWarp;
- (void)setTextWarp:(id)arg1;
- (BOOL)hasIsAnchorCenter;
- (BOOL)isAnchorCenter;
- (void)setIsAnchorCenter:(BOOL)arg1;
- (BOOL)hasTextAnchorType;
- (int)textAnchorType;
- (void)setTextAnchorType:(int)arg1;
- (BOOL)hasIsUpright;
- (BOOL)isUpright;
- (void)setIsUpright:(BOOL)arg1;
- (BOOL)hasRotation;
- (double)rotation;
- (void)setRotation:(double)arg1;
- (void)removeUnnecessaryOverrides;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;

@end

