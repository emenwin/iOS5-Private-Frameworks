/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <VoiceServices/VSRecognitionAction.h>

@class NSURL;

@interface VSRecognitionURLAction : VSRecognitionAction
{
    NSURL *_url;
}

- (void)dealloc;
- (int)completionType;
- (void)setURL:(id)arg1;
- (id)URL;
- (id)perform;

@end

