/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSUserDefaults.h"

@interface NSUserDefaults (ConferenceRegistrationAdditions)
+ (void)setCNFObject:(id)arg1 forKey:(id)arg2;
+ (id)CNFObjectForKey:(id)arg1;
+ (void)setShouldShowCNFRegistrationSettingsUI:(BOOL)arg1;
+ (BOOL)shouldShowCNFRegistrationSettingsUI;
+ (unsigned int)CNFRegEmailValidationTimeout;
+ (void)setCNFRegEmailValidationTimeout:(unsigned int)arg1;
+ (id)CNFRegSavedAccountName;
+ (void)setCNFRegSavedAccountName:(id)arg1;
+ (void)setCNFRegServerURLOverride:(id)arg1;
+ (id)CNFRegServerURLOverride;
+ (id)CNFRegCallerIDMap;
+ (void)setCNFRegCallerIDMap:(id)arg1;
+ (void)setShouldShowCNFRegistrationServerLogs:(BOOL)arg1;
+ (BOOL)shouldShowCNFRegistrationServerLogs;
@end

