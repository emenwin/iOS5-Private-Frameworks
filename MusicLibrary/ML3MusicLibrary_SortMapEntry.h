/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSData, NSString;

@interface ML3MusicLibrary_SortMapEntry : NSObject
{
    long long _nameOrder;
    NSString *_name;
    NSData *_sortKey;
    int _nameSection;
}

- (void)dealloc;
- (id)description;
- (id)initWithStatement:(struct sqlite3_stmt *)arg1;
- (id)initWithName:(id)arg1 nameSection:(int)arg2 sortKey:(id)arg3;

@end

