/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "ICSWriting-Protocol.h"
#import "NSCoding-Protocol.h"

@class NSMutableDictionary;

@interface ICSProperty : NSObject <NSCoding, ICSWriting>
{
    NSMutableDictionary *_parameters;
    unsigned int _type;
    id _value;
}

- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)ICSStringWithOptions:(unsigned int)arg1 appendingToString:(id)arg2;
- (id)ICSStringWithOptions:(unsigned int)arg1;
- (void)removeParameterValueForName:(id)arg1;
- (void)setParameterValue:(id)arg1 forName:(id)arg2;
- (void)setParameters:(id)arg1;
- (void)addParametersFromDictionary:(id)arg1;
- (id)parameterValueForName:(id)arg1;
- (id)value;
- (unsigned int)type;
- (BOOL)isMultiValued;
- (void)dealloc;

@end

