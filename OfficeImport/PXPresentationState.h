/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSMutableDictionary, OAVState, OAXDrawingState, OAXTableStyleCache, PDPresentation;

@interface PXPresentationState : NSObject
{
    NSMutableDictionary *mModelObjects;
    OAXDrawingState *mOfficeArtState;
    OAVState *mOAVState;
    OAXTableStyleCache *mTableStyleCache;
    NSMutableDictionary *mSlideURLToIndexMap;
    PDPresentation *mTgtPresentation;
    id <OCCancelDelegate> mCancel;
}

- (id)init;
- (void)dealloc;
- (id)oavState;
- (id)modelObjectForLocation:(id)arg1;
- (void)setModelObject:(id)arg1 forLocation:(id)arg2;
- (id)officeArtState;
- (void)resetOfficeArtState;
- (id)tableStyleCache;
- (int)slideIndexForSlideURL:(id)arg1;
- (void)setSlideIndex:(int)arg1 forSlideURL:(id)arg2;
- (id)tgtPresentation;
- (void)setTgtPresentation:(id)arg1;
- (BOOL)isCancelled;
@property(retain, nonatomic) id <OCCancelDelegate> cancelDelegate; // @synthesize cancelDelegate=mCancel;

@end

