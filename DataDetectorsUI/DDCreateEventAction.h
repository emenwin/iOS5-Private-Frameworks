/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <DataDetectorsUI/DDAction.h>

#import "EKEventEditViewDelegate-Protocol.h"

@interface DDCreateEventAction : DDAction <EKEventEditViewDelegate>
{
}

- (id)viewController;
- (void)eventEditViewController:(id)arg1 didCompleteWithAction:(int)arg2;
- (int)interactionType;
- (id)localizedName;

@end

