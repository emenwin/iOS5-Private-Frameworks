/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <OfficeImport/EXPivotTable.h>

@interface EXPivotTable (Private)
+ (void)readStyleInfoFrom:(struct _xmlNode *)arg1 toPivotTable:(id)arg2;
+ (void)readLocationFrom:(struct _xmlNode *)arg1 toPivotTable:(id)arg2;
+ (void)readFieldsFrom:(struct _xmlNode *)arg1 toCollection:(id)arg2;
+ (void)readItemsFrom:(struct _xmlNode *)arg1 toCollection:(id)arg2;
+ (void)readPivotFieldsFrom:(struct _xmlNode *)arg1 toCollection:(id)arg2;
+ (void)readFieldItemsFrom:(struct _xmlNode *)arg1 toCollection:(id)arg2;
+ (void)readDataFieldsFrom:(struct _xmlNode *)arg1 toCollection:(id)arg2;
+ (void)readConditionalFormatsFrom:(struct _xmlNode *)arg1 toCollection:(id)arg2;
+ (void)readPivotAreasFrom:(struct _xmlNode *)arg1 toCollection:(id)arg2;
+ (void)readPivotAreaReferencesFrom:(struct _xmlNode *)arg1 toCollection:(id)arg2;
+ (void)readPageFieldsFrom:(struct _xmlNode *)arg1 toCollection:(id)arg2;
+ (int)edPivotItemTypeFrom:(id)arg1;
+ (int)edPivotFieldAxisFrom:(id)arg1;
+ (int)edPivotDatFieldFormatFrom:(id)arg1;
+ (int)edPivotConditionalFormatTypeFrom:(id)arg1;
+ (int)edPivotConditionalFormatScopeFrom:(id)arg1;
+ (int)edPivotAreaTypeFrom:(id)arg1;
@end

