/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSDate, NSString, NSURL;

@interface StockNewsItem : NSObject
{
    unsigned long long ID;
    NSString *headline;
    NSString *source;
    NSDate *date;
    NSURL *link;
    NSString *localizedDateString;
}

+ (id)localizedStringForDate:(id)arg1;
- (void)resetLocale;
- (id)initWithArchiveDictionary:(id)arg1;
- (id)archiveDictionary;
@property(retain, nonatomic) NSDate *date; // @synthesize date;
- (int)chronologicalComparisonWithNewsItem:(id)arg1;
@property(readonly, nonatomic) NSString *localizedDateString;
- (id)description;
- (void)dealloc;
@property(retain, nonatomic) NSURL *link; // @synthesize link;
@property(retain, nonatomic) NSString *source; // @synthesize source;
@property(retain, nonatomic) NSString *headline; // @synthesize headline;
@property(nonatomic) unsigned long long ID; // @synthesize ID;

@end

