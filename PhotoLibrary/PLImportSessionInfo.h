/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSIndexSet, NSMutableIndexSet;

@interface PLImportSessionInfo : NSObject
{
    BOOL _importComplete;
    BOOL _importStopped;
    BOOL _importingSelection;
    NSMutableIndexSet *_importIndexes;
    NSMutableIndexSet *_importInProgressIndexes;
    NSMutableIndexSet *_importErrorIndexes;
    NSMutableIndexSet *_importCompleteIndexes;
}

@property(nonatomic) BOOL importingSelection; // @synthesize importingSelection=_importingSelection;
@property(readonly, nonatomic) NSIndexSet *completedIndexes; // @synthesize completedIndexes=_importCompleteIndexes;
@property(readonly, nonatomic) NSIndexSet *errorIndexes; // @synthesize errorIndexes=_importErrorIndexes;
@property(readonly, nonatomic) NSIndexSet *inProgressIndexes; // @synthesize inProgressIndexes=_importInProgressIndexes;
@property(readonly, nonatomic) NSIndexSet *importIndexes; // @synthesize importIndexes=_importIndexes;
@property(nonatomic) BOOL importStopped; // @synthesize importStopped=_importStopped;
@property(nonatomic) BOOL importComplete; // @synthesize importComplete=_importComplete;
- (void)shiftIndexesStartingAtIndex:(unsigned int)arg1 by:(unsigned int)arg2;
- (void)removeIndex:(unsigned int)arg1;
- (void)completeImportForIndex:(unsigned int)arg1 error:(BOOL)arg2;
- (void)beginImportForIndex:(unsigned int)arg1;
- (BOOL)_isImportCompleteForIndex:(unsigned int)arg1;
- (void)addIndexToImport:(unsigned int)arg1;
- (void)dealloc;
- (id)initWithImportIndexes:(id)arg1;

@end

