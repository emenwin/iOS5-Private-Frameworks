/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSOperation.h"

@class IUSearchDataSource, NSString;

@interface SearchPerformOperation : NSOperation
{
    IUSearchDataSource *_searchDataSource;
    NSString *_searchString;
    int _searchScope;
    unsigned int _countOfFoundResults;
    NSString *_searchIdentifier;
}

- (void)main;
- (void)enumerateEntitiesForQuery:(id)arg1;
- (void)_reportResultsWithQuery:(id)arg1 searchIdentifier:(id)arg2;
- (void)dealloc;
- (id)initWithSearchDataSource:(id)arg1 searchString:(id)arg2 searchScope:(int)arg3 searchIdentifier:(id)arg4;

@end

