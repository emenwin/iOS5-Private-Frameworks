/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class CHDChart, CHDChartType, CHDSeries, EDResources, EXOfficeArtState, OADParagraphProperties, OCPPackagePart;

@interface CHXState : NSObject
{
    EXOfficeArtState *mDrawingState;
    CHDChart *mChart;
    EDResources *mResources;
    OCPPackagePart *mChartPart;
    CHDChartType *mCurrentChartType;
    CHDSeries *mCurrentSeries;
    OADParagraphProperties *mDefaultTextProperties;
    BOOL mDefaultTextPropertiesHaveExplicitFontSize;
    id <CHAutoStyling> mAutoStyling;
}

- (id)initWithDrawingState:(id)arg1;
- (void)dealloc;
- (id)drawingState;
- (id)chart;
- (void)setChart:(id)arg1;
- (id)resources;
- (void)setResources:(id)arg1;
- (id)chartPart;
- (void)setChartPart:(id)arg1;
- (id)currentChartType;
- (void)setCurrentChartType:(id)arg1;
- (id)currentSeries;
- (void)setCurrentSeries:(id)arg1;
- (id)exState;
- (id)defaultTextProperties;
- (void)setDefaultTextProperties:(id)arg1;
- (void)setDefaultTextPropertiesHaveExplicitFontSize:(BOOL)arg1;
- (void)pushTitleTextProperties:(BOOL)arg1;
- (void)popTitleTextProperties;
- (id)autoStyling;

@end

