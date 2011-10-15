/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSCopying-Protocol.h"

@interface SCRCIndexMap : NSObject <NSCopying>
{
    struct __CFDictionary *_map;
}

- (id)initWithObjects:(id *)arg1 andIndexes:(unsigned int *)arg2 count:(unsigned long)arg3;
- (id)init;
- (id)_initWithIndexMap:(id)arg1;
- (id)_initAndDeepCopyIndexMap:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)deepCopyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (void)setObject:(id)arg1 forIndex:(unsigned long)arg2;
- (void)removeObjectForIndex:(unsigned long)arg1;
- (void)removeAllObjects;
- (id)objectForIndex:(unsigned long)arg1;
- (unsigned long)count;
- (unsigned int *)_createIndexesWithSize:(unsigned int *)arg1;
- (id)indexes;
- (void)addObjectsFromIndexMap:(id)arg1;
- (id)description;

@end

