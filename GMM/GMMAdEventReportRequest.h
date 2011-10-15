/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "PBRequest.h"

@class GMMDateTime, NSString;

@interface GMMAdEventReportRequest : PBRequest
{
    NSString *_uniqueId;
    BOOL _hasEventType;
    int _eventType;
    GMMDateTime *_eventTime;
}

@property(retain, nonatomic) GMMDateTime *eventTime; // @synthesize eventTime=_eventTime;
@property(nonatomic) int eventType; // @synthesize eventType=_eventType;
@property(nonatomic) BOOL hasEventType; // @synthesize hasEventType=_hasEventType;
@property(retain, nonatomic) NSString *uniqueId; // @synthesize uniqueId=_uniqueId;
- (Class)responseClass;
- (unsigned int)requestTypeCode;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) BOOL hasEventTime;
@property(readonly, nonatomic) BOOL hasUniqueId;
- (void)dealloc;

@end

