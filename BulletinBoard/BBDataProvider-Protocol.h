/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject-Protocol.h"

@protocol BBDataProvider <NSObject>
- (id)sectionIdentifier;
- (id)sortDescriptors;
- (id)bulletinsFilteredBy:(unsigned int)arg1 count:(unsigned int)arg2 lastCleared:(id)arg3;

@optional
- (id)sectionDisplayName;
- (void)dataProviderDidLoad;
- (float)attachmentAspectRatioForRecordID:(id)arg1;
- (id)attachmentPNGDataForRecordID:(id)arg1 sizeConstraints:(id)arg2;
- (id)defaultSectionInfo;
- (id)sectionParameters;
- (id)clearedInfoForBulletins:(id)arg1;
- (id)clearedInfoForBulletins:(id)arg1 lastClearedInfo:(id)arg2;
@end

