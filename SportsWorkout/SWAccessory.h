/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSString, SWVicFileLogger;

@interface SWAccessory : NSObject
{
    NSString *_transportType;
    NSString *_serialNumber;
    NSString *_linkState;
    NSString *_searchState;
    SWVicFileLogger *_vicFileLogger;
}

@property(retain, nonatomic) SWVicFileLogger *vicFileLogger; // @synthesize vicFileLogger=_vicFileLogger;
@property(readonly, nonatomic) NSString *searchState; // @synthesize searchState=_searchState;
@property(readonly, nonatomic) NSString *linkState; // @synthesize linkState=_linkState;
@property(readonly, nonatomic) NSString *serialNumber; // @synthesize serialNumber=_serialNumber;
@property(readonly, nonatomic) NSString *transportType; // @synthesize transportType=_transportType;
- (void)cancelSearching;
- (void)beginSearching;
- (void)unlink;
- (void)cancelLinking;
- (void)beginLinking;
- (void)deactivate;
- (void)dealloc;
- (id)init;

@end

