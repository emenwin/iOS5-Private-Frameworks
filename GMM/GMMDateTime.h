/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "PBCodable.h"

@interface GMMDateTime : PBCodable
{
    long long _secsSinceEpoch;
    BOOL _hasTimeZoneOffsetMin;
    int _timeZoneOffsetMin;
}

@property(nonatomic) int timeZoneOffsetMin; // @synthesize timeZoneOffsetMin=_timeZoneOffsetMin;
@property(nonatomic) BOOL hasTimeZoneOffsetMin; // @synthesize hasTimeZoneOffsetMin=_hasTimeZoneOffsetMin;
@property(nonatomic) long long secsSinceEpoch; // @synthesize secsSinceEpoch=_secsSinceEpoch;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (void)dealloc;

@end

