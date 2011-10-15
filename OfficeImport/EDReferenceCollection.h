/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <OfficeImport/EDCollection.h>

@interface EDReferenceCollection : EDCollection
{
    _Bool mCoalesce;
}

+ (id)noCoalesceCollection;
+ (id)coalesceCollection;
- (id)init;
- (id)initWihNoCoalesce;
- (unsigned int)addObject:(id)arg1;
- (void)insertObject:(id)arg1 atIndex:(unsigned int)arg2;
- (void)replaceObjectAtIndex:(unsigned int)arg1 withObject:(id)arg2;
- (unsigned int)countOfCellsBeingReferenced;
- (id)referenceToCellWithIndex:(unsigned int)arg1 byRow:(_Bool)arg2;
- (id)reverseReferencesByRow:(_Bool)arg1;

@end

