/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "GQDNameMappable-Protocol.h"

@interface GQDWPPageMaster : NSObject <GQDNameMappable>
{
    struct __CFString *mHeaderIdentifier;
    struct __CFString *mFooterIdentifier;
}

+ (const struct StateSpec *)stateForReading;
- (void)dealloc;
- (struct __CFString *)headerIdentifier;
- (struct __CFString *)footerIdentifier;

@end

