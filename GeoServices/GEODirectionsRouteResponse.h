/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <GeoServices/GEODirectionsResponse.h>

@class NSMutableArray;

@interface GEODirectionsRouteResponse : GEODirectionsResponse
{
    int _type;
    int _requestTimestampType;
    double _requestTimestamp;
    int _requestTimezoneOffset;
    int _iconVersion;
    NSMutableArray *_icons;
}

@property(retain, nonatomic) NSMutableArray *icons; // @synthesize icons=_icons;
@property(nonatomic) int iconVersion; // @synthesize iconVersion=_iconVersion;
@property(nonatomic) int requestTimezoneOffset; // @synthesize requestTimezoneOffset=_requestTimezoneOffset;
@property(nonatomic) double requestTimestamp; // @synthesize requestTimestamp=_requestTimestamp;
@property(nonatomic) int requestTimestampType; // @synthesize requestTimestampType=_requestTimestampType;
@property(nonatomic) int type; // @synthesize type=_type;
- (id)description;
- (id)dictionaryRepresentation;
- (id)initWithDictionaryRepresentation:(id)arg1;
- (void)dealloc;

@end

