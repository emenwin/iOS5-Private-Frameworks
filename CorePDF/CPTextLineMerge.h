/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSMutableArray;

@interface CPTextLineMerge : NSObject
{
    NSMutableArray *avail;
}

- (BOOL)fits:(id)arg1 into:(id)arg2;
- (void)addInterval:(id)arg1 to:(id)arg2;
- (void)mergeColumn:(id)arg1;
- (void)mergeLinesInInterval:(id)arg1 from:(id)arg2;
- (void)mergeByColumn:(id)arg1;
- (void)eliminate:(id)arg1;
- (BOOL)hasOverlappingLines;
- (void)makeOverlappingLinesTo:(id)arg1;
- (void)removeOverlapping:(id)arg1;
- (unsigned int)countOverlapsOfLineAtIndex:(unsigned int)arg1 in:(id)arg2;
- (void)detachDropCaps:(id)arg1 to:(id)arg2;
- (id)findLineFor:(id)arg1 in:(id)arg2;
- (float)averageHeight:(id)arg1;
- (void)dropCaps:(id)arg1 to:(id)arg2;
- (void)mergeLinesIn:(id)arg1;

@end

