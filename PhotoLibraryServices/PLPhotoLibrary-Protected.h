/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <PhotoLibraryServices/PLPhotoLibrary.h>

@interface PLPhotoLibrary (Protected)
+ (id)pathToAssetsToAlbumsMapping;
+ (id)allIndicatorFilePaths;
+ (id)migrationIndicatorFilePath;
+ (id)sqliteErrorIndicatorFilePath;
+ (id)imageWriterIndicatorFilePath;
+ (id)takingVideoIndicatorFilePath;
+ (void)_presentSqliteCorruptionErrorDialog;
@property(readonly, nonatomic) unsigned int concurrencyType;
- (void)loadDatabase;
- (void)cleanupModelAfterRestoreFromiTunesBackup;
- (void)prepareDatabaseForOTAAssetsPhase;
- (id)_allAssetsForDeletion:(id)arg1;
- (void)_batchDeleteAssets:(id)arg1 inManagedObjectContext:(id)arg2;
- (void)_safeSave:(id)arg1;
- (void)_calculatePendingItemCountsAfterOTARestoreWithMangedObjectContext:(id)arg1;
- (void)_removeSyncedAlbumsInTransactionWithManagedObjectContext:(id)arg1;
- (int)_orientationOfFileAtPath:(id)arg1;
- (int)_orientationAfterRotatingOrientation:(int)arg1 clockwiseByDegrees:(int)arg2 transposeCoordinatesOut:(char *)arg3;
- (BOOL)_hasAtLeastOneItem:(BOOL)arg1;
- (void)_migrationDidFinish;
- (void)_deleteObsoleteMetadataFiles;
- (void)_notifyProgress:(float)arg1;
- (void)prepareToMigrateDcimToDatabase;
- (id)_init;
@end
