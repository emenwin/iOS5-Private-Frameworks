/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSMutableArray, NSMutableDictionary;

@interface WebHistoryPrivate : NSObject
{
    NSMutableDictionary *_entriesByURL;
    struct HashMap<long long int, WTF::RetainPtr<NSMutableArray>, WTF::IntHash<long long unsigned int>, WTF::HashTraits<long long int>, WTF::HashTraits<WTF::RetainPtr<NSMutableArray>>> *_entriesByDate;
    NSMutableArray *_orderedLastVisitedDays;
    BOOL itemLimitSet;
    int itemLimit;
    BOOL ageInDaysLimitSet;
    int ageInDaysLimit;
}

+ (void)initialize;
- (id)init;
- (void)dealloc;
- (void)finalize;
- (BOOL)findKey:(long long *)arg1 forDay:(double)arg2;
- (void)insertItem:(id)arg1 forDateKey:(long long)arg2;
- (BOOL)removeItemFromDateCaches:(id)arg1;
- (BOOL)removeItemForURLString:(id)arg1;
- (void)addItemToDateCaches:(id)arg1;
- (id)visitedURL:(id)arg1 withTitle:(id)arg2 increaseVisitCount:(BOOL)arg3;
- (BOOL)addItem:(id)arg1 discardDuplicate:(BOOL)arg2;
- (BOOL)removeItem:(id)arg1;
- (BOOL)removeItems:(id)arg1;
- (BOOL)removeAllItems;
- (void)addItems:(id)arg1;
- (id)orderedLastVisitedDays;
- (id)orderedItemsLastVisitedOnDay:(id)arg1;
- (id)itemForURLString:(id)arg1;
- (BOOL)containsURL:(id)arg1;
- (id)itemForURL:(id)arg1;
- (id)allItems;
- (void)setHistoryAgeInDaysLimit:(int)arg1;
- (int)historyAgeInDaysLimit;
- (void)setHistoryItemLimit:(int)arg1;
- (int)historyItemLimit;
- (id)ageLimitDate;
- (BOOL)loadHistoryGutsFromURL:(id)arg1 savedItemsCount:(int *)arg2 collectDiscardedItemsInto:(id)arg3 error:(id *)arg4;
- (BOOL)loadFromURL:(id)arg1 collectDiscardedItemsInto:(id)arg2 error:(id *)arg3;
- (id)data;
- (BOOL)saveToURL:(id)arg1 error:(id *)arg2;
- (void)addVisitedLinksToPageGroup:(struct PageGroup *)arg1;

@end

