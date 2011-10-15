/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <iTunesStoreUI/SUTableDataSource.h>

@class NSArray;

@interface SUSimpleTableDataSource : SUTableDataSource
{
    Class _cellConfigurationClass;
    NSArray *_objects;
}

@property(retain, nonatomic) NSArray *objects; // @synthesize objects=_objects;
@property(retain, nonatomic) Class cellConfigurationClass; // @synthesize cellConfigurationClass=_cellConfigurationClass;
- (void)reloadCellContexts;
- (int)numberOfRowsInSection:(int)arg1;
- (int)numberOfSections;
- (void)configureCell:(id)arg1 forIndexPath:(id)arg2;
- (float)cellHeightForIndexPath:(id)arg1;
- (id)cellForIndexPath:(id)arg1;
- (id)objectForIndexPath:(id)arg1;
- (void)dealloc;

@end

