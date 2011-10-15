/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSArray, NSDate, NSMutableArray;

@interface WorldClockManager : NSObject
{
    BOOL _dirty;
    NSMutableArray *_cities;
    NSDate *lastModified;
}

+ (id)sharedManager;
- (void)dealloc;
- (void)loadCities;
- (void)saveCities;
- (BOOL)checkIfCitiesModified;
- (id)cityWithIdUrl:(id)arg1;
- (BOOL)canAddCity;
- (BOOL)addCity:(id)arg1;
- (void)removeCity:(id)arg1;
- (void)removeCityAtIndex:(unsigned int)arg1;
- (void)removeAllCities;
- (void)moveCityFromIndex:(unsigned int)arg1 toIndex:(unsigned int)arg2;
@property(retain, nonatomic) NSDate *lastModified; // @synthesize lastModified;
@property(readonly, retain, nonatomic) NSArray *cities; // @synthesize cities=_cities;

@end

