/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "PBRequest.h"

@class NSMutableArray;

@interface GEOMapQueryCollectionRequest : PBRequest
{
    NSMutableArray *_requestElements;
}

@property(retain, nonatomic) NSMutableArray *requestElements; // @synthesize requestElements=_requestElements;
- (Class)responseClass;
- (unsigned int)requestTypeCode;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (id)requestElementsAtIndex:(unsigned int)arg1;
- (unsigned int)requestElementsCount;
- (void)addRequestElements:(id)arg1;
- (void)dealloc;

@end

