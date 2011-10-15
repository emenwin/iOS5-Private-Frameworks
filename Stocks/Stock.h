/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSString, NSURL, StockChartData, UIView;

@interface Stock : NSObject
{
    NSString *symbol;
    NSString *companyName;
    NSString *shortCompanyName;
    NSString *exchange;
    NSString *realtimeTimestamp;
    NSString *realtimePrice;
    NSString *realtimeChange;
    NSString *nonRealtimePrice;
    NSString *nonRealtimeChange;
    NSString *open;
    NSString *high;
    NSString *low;
    NSString *yearHigh;
    NSString *yearLow;
    NSString *volume;
    NSString *averageVolume;
    NSString *marketcap;
    NSString *peRatio;
    NSString *dividendYield;
    NSURL *infoURL;
    BOOL _marketIsOpen;
    unsigned int pricePrecision;
    BOOL usesAlternativeDataSource;
    double timeQuoteLastUpdated;
    double timeMetadataLastUpdated;
    StockChartData *_chartDataArray[7];
    UIView *_rowView;
    int _rowViewDataType;
}

+ (void)initialize;
+ (id)urlForStock:(id)arg1;
+ (id)stockForURL:(id)arg1;
+ (id)formattedStringForNumber:(id)arg1 fractionDigits:(unsigned int)arg2 percentStyle:(BOOL)arg3 groupingSeparators:(BOOL)arg4;
+ (id)formattedStringForNumber:(id)arg1 fractionDigits:(unsigned int)arg2 percentStyle:(BOOL)arg3;
+ (id)formattedStringForString:(id)arg1 fractionDigits:(unsigned int)arg2 percentStyle:(BOOL)arg3;
+ (BOOL)localeUsesASCIIDigits;
+ (void)resetLocale;
+ (id)BlankValueString;
+ (id)postfixCharacterForEngineeringMagnitude:(unsigned int)arg1;
+ (id)localizedMagnitudeAbbreviatedStringWithString:(id)arg1 fractionDigits:(unsigned int)arg2;
+ (id)localizedMagnitudeAbbreviatedStringWithString:(id)arg1;
+ (id)_localeStocks;
+ (id)_defaultStockDictionaries;
+ (void)startObservers;
+ (void)stopObservers;
+ (void)_loadStocksFromDefaults;
+ (void)handleSyncedDataChanged:(id)arg1;
+ (id)makeSyncableStockListFromList:(id)arg1;
+ (BOOL)setLocalStockListFromSyncableStockList:(id)arg1;
+ (id)listStocks;
+ (void)setListStocks:(id)arg1;
+ (void)flushStocks;
+ (void)_createGTStocksArrays;
+ (id)gtDataSourceStocks;
+ (id)nonGTDataSourceStocks;
+ (id)stockWithSymbol:(id)arg1;
+ (void)addStock:(id)arg1;
+ (void)removeStock:(id)arg1;
+ (void)moveStockFromIndex:(int)arg1 toIndex:(int)arg2;
+ (void)RemoveChartDataFromLRU:(id)arg1;
+ (void)DeleteChartData:(id)arg1;
+ (void)UpdateChartDataInLRU:(id)arg1;
+ (void)clearCachedChartData;
+ (void)clearCachedChartDataImageSets;
+ (BOOL)anyPriceIsRealtime;
+ (BOOL)anyMarketOpenWithRealtimePrice;
+ (BOOL)anyMarketOpen;
+ (void)clearCachedRowViews;
+ (id)_potentiallyAbsentKeys;
+ (void)saveChanges;
+ (void)_checkForAddedStocks;
- (void)resetLocale;
- (id)description;
- (id)initWithDictionary:(id)arg1;
- (void)dealloc;
- (id)archiveDictionary;
@property(readonly, nonatomic) NSString *price;
@property(readonly, nonatomic) NSString *change;
- (id)formattedPrice;
- (BOOL)priceIsRealtime;
- (BOOL)changeIsNegative;
- (BOOL)changeIsZero;
- (BOOL)isIndex;
- (id)formattedChangePercent:(BOOL)arg1;
- (float)changeFloatPercent:(BOOL)arg1;
- (BOOL)marketIsOpen;
- (id)listName;
- (id)chartDataForInterval:(int)arg1;
- (void)setChartData:(id)arg1 forInterval:(int)arg2;
- (void)clearCachedGraphImageSets;
- (void)setRowView:(id)arg1 withDataType:(int)arg2;
- (void)clearRowView;
- (id)rowView;
- (void)updateQuoteWithDictionary:(id)arg1 forTime:(double)arg2;
- (void)updateMetadataWithDictionary:(id)arg1 forTime:(double)arg2;
- (void)_updatePricePrecision;
@property(nonatomic) double timeMetadataLastUpdated; // @synthesize timeMetadataLastUpdated;
@property(nonatomic) double timeQuoteLastUpdated; // @synthesize timeQuoteLastUpdated;
@property(nonatomic) int rowViewDataType; // @synthesize rowViewDataType=_rowViewDataType;
@property(nonatomic) BOOL usesAlternativeDataSource; // @synthesize usesAlternativeDataSource;
@property(readonly) unsigned int pricePrecision; // @synthesize pricePrecision;
@property(retain, nonatomic) NSURL *infoURL; // @synthesize infoURL;
@property(retain, nonatomic) NSString *dividendYield; // @synthesize dividendYield;
@property(retain, nonatomic) NSString *peRatio; // @synthesize peRatio;
@property(retain, nonatomic) NSString *marketcap; // @synthesize marketcap;
@property(retain, nonatomic) NSString *averageVolume; // @synthesize averageVolume;
@property(retain, nonatomic) NSString *volume; // @synthesize volume;
@property(retain, nonatomic) NSString *yearLow; // @synthesize yearLow;
@property(retain, nonatomic) NSString *yearHigh; // @synthesize yearHigh;
@property(retain, nonatomic) NSString *low; // @synthesize low;
@property(retain, nonatomic) NSString *high; // @synthesize high;
@property(retain, nonatomic) NSString *open; // @synthesize open;
@property(retain, nonatomic) NSString *nonRealtimeChange; // @synthesize nonRealtimeChange;
@property(retain, nonatomic) NSString *nonRealtimePrice; // @synthesize nonRealtimePrice;
@property(retain, nonatomic) NSString *realtimeChange; // @synthesize realtimeChange;
@property(retain, nonatomic) NSString *realtimePrice; // @synthesize realtimePrice;
@property(retain, nonatomic) NSString *realtimeTimestamp; // @synthesize realtimeTimestamp;
@property(retain, nonatomic) NSString *exchange; // @synthesize exchange;
@property(retain, nonatomic) NSString *shortCompanyName; // @synthesize shortCompanyName;
@property(retain, nonatomic) NSString *companyName; // @synthesize companyName;
@property(retain, nonatomic) NSString *symbol; // @synthesize symbol;

@end

