/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "GQDNameMappable-Protocol.h"

@class GQDWPTextLabel;

@interface GQDWPListLabelTypeInfo : NSObject <GQDNameMappable>
{
    int mType;
    GQDWPTextLabel *mLabel;
}

+ (const struct StateSpec *)stateForReading;
- (int)readAttributesFromReader:(struct _xmlTextReader *)arg1;
- (void)dealloc;
- (int)type;
- (id)label;

@end

