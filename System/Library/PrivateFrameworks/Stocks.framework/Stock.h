/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:02 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/Stocks.framework/Stocks
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class StockChartData, NSString, Exchange, NSURL, StockDataSource;

@interface Stock : NSObject {

	StockChartData* _chartDataArray[9];
	BOOL _transient;
	unsigned _pricePrecision;
	NSString* _symbol;
	NSString* _companyName;
	NSString* _shortCompanyName;
	Exchange* _exchange;
	NSString* _price;
	NSString* _change;
	NSString* _currency;
	NSString* _symbolType;
	NSString* _open;
	NSString* _high;
	NSString* _low;
	NSString* _yearHigh;
	NSString* _yearLow;
	NSString* _volume;
	NSString* _averageVolume;
	NSString* _marketcap;
	NSString* _peRatio;
	NSString* _dividendYield;
	NSURL* _infoURL;
	StockDataSource* _dataSource;
	double _timeQuoteLastUpdated;
	double _timeMetadataLastUpdated;

}

@property (nonatomic,retain) NSString * symbol;                                 //@synthesize symbol=_symbol - In the implementation block
@property (nonatomic,retain) NSString * companyName;                            //@synthesize companyName=_companyName - In the implementation block
@property (nonatomic,retain) NSString * shortCompanyName;                       //@synthesize shortCompanyName=_shortCompanyName - In the implementation block
@property (nonatomic,retain) Exchange * exchange;                               //@synthesize exchange=_exchange - In the implementation block
@property (nonatomic,retain) NSString * price;                                  //@synthesize price=_price - In the implementation block
@property (nonatomic,retain) NSString * change;                                 //@synthesize change=_change - In the implementation block
@property (nonatomic,retain) NSString * currency;                               //@synthesize currency=_currency - In the implementation block
@property (nonatomic,retain) NSString * symbolType;                             //@synthesize symbolType=_symbolType - In the implementation block
@property (nonatomic,retain) NSString * open;                                   //@synthesize open=_open - In the implementation block
@property (nonatomic,retain) NSString * high;                                   //@synthesize high=_high - In the implementation block
@property (nonatomic,retain) NSString * low;                                    //@synthesize low=_low - In the implementation block
@property (nonatomic,retain) NSString * yearHigh;                               //@synthesize yearHigh=_yearHigh - In the implementation block
@property (nonatomic,retain) NSString * yearLow;                                //@synthesize yearLow=_yearLow - In the implementation block
@property (nonatomic,retain) NSString * volume;                                 //@synthesize volume=_volume - In the implementation block
@property (nonatomic,retain) NSString * averageVolume;                          //@synthesize averageVolume=_averageVolume - In the implementation block
@property (nonatomic,retain) NSString * marketcap;                              //@synthesize marketcap=_marketcap - In the implementation block
@property (nonatomic,retain) NSString * peRatio;                                //@synthesize peRatio=_peRatio - In the implementation block
@property (nonatomic,retain) NSString * dividendYield;                          //@synthesize dividendYield=_dividendYield - In the implementation block
@property (nonatomic,readonly) unsigned pricePrecision;                         //@synthesize pricePrecision=_pricePrecision - In the implementation block
@property (nonatomic,retain) NSURL * infoURL;                                   //@synthesize infoURL=_infoURL - In the implementation block
@property (nonatomic,retain) StockDataSource * dataSource;                      //@synthesize dataSource=_dataSource - In the implementation block
@property (assign,nonatomic) double timeQuoteLastUpdated;                       //@synthesize timeQuoteLastUpdated=_timeQuoteLastUpdated - In the implementation block
@property (assign,nonatomic) double timeMetadataLastUpdated;                    //@synthesize timeMetadataLastUpdated=_timeMetadataLastUpdated - In the implementation block
@property (assign,getter=isTransient,nonatomic) BOOL transient;                 //@synthesize transient=_transient - In the implementation block
@property (nonatomic,readonly) NSString * marketStatusDescription; 
+(void)resetLocale;
+(id)formattedStringForNumber:(id)arg1 fractionDigits:(unsigned)arg2 percentStyle:(BOOL)arg3 groupingSeparators:(BOOL)arg4 ;
+(id)urlForStockSymbol:(id)arg1 ;
+(id)PercentFormatter;
+(id)_formattedStringForNumber:(id)arg1 fractionDigits:(unsigned)arg2 percentStyle:(BOOL)arg3 groupingSeparators:(BOOL)arg4 ;
+(id)formattedStringForNumber:(id)arg1 fractionDigits:(unsigned)arg2 percentStyle:(BOOL)arg3 groupingSeparators:(BOOL)arg4 droppingFractionDigitsIfLengthExceeds:(unsigned)arg5 ;
+(id)BlankValueString;
+(id)formattedStringForString:(id)arg1 fractionDigits:(unsigned)arg2 percentStyle:(BOOL)arg3 droppingFractionDigitsIfLengthExceeds:(unsigned)arg4 ;
+(id)postfixCharacterForMagnitude:(unsigned)arg1 unitMagnitude:(unsigned*)arg2 ;
+(id)formattedStringForNumber:(id)arg1 fractionDigits:(unsigned)arg2 percentStyle:(BOOL)arg3 ;
+(id)localizedMagnitudeAbbreviatedStringWithString:(id)arg1 fractionDigits:(unsigned)arg2 ;
+(id)listNameOverridesBySymbol;
+(id)_potentiallyAbsentKeys;
+(id)urlForStock:(id)arg1 ;
+(id)symbolForURL:(id)arg1 ;
+(id)formattedStringForString:(id)arg1 fractionDigits:(unsigned)arg2 percentStyle:(BOOL)arg3 ;
+(BOOL)localeUsesASCIIDigits;
+(id)localizedMagnitudeAbbreviatedStringWithString:(id)arg1 ;
+(id)percentSymbol;
-(id)initWithSiriStockObject:(id)arg1 ;
-(void)setDataSource:(StockDataSource *)arg1 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(StockDataSource *)dataSource;
-(id)initWithDictionary:(id)arg1 ;
-(NSString *)volume;
-(void)setVolume:(NSString *)arg1 ;
-(id)archiveDictionary;
-(BOOL)isTransient;
-(NSString *)symbol;
-(void)setSymbol:(NSString *)arg1 ;
-(NSString *)price;
-(void)setPrice:(NSString *)arg1 ;
-(NSString *)open;
-(void)setChange:(NSString *)arg1 ;
-(NSString *)dividendYield;
-(void)setDividendYield:(NSString *)arg1 ;
-(Exchange *)exchange;
-(void)setExchange:(Exchange *)arg1 ;
-(NSString *)high;
-(void)setHigh:(NSString *)arg1 ;
-(NSString *)low;
-(void)setLow:(NSString *)arg1 ;
-(void)setOpen:(NSString *)arg1 ;
-(NSString *)peRatio;
-(void)setPeRatio:(NSString *)arg1 ;
-(NSString *)companyName;
-(void)setCompanyName:(NSString *)arg1 ;
-(id)listName;
-(void)resetLocale;
-(void)setTransient:(BOOL)arg1 ;
-(NSURL *)infoURL;
-(void)setInfoURL:(NSURL *)arg1 ;
-(id)formattedPrice;
-(NSString *)change;
-(double)_updateInterval;
-(unsigned)pricePrecision;
-(void)setShortCompanyName:(NSString *)arg1 ;
-(void)setYearHigh:(NSString *)arg1 ;
-(void)setYearLow:(NSString *)arg1 ;
-(void)setAverageVolume:(NSString *)arg1 ;
-(void)setMarketcap:(NSString *)arg1 ;
-(void)setSymbolType:(NSString *)arg1 ;
-(void)_updatePricePrecision;
-(void)populateFromDictionary:(id)arg1 ;
-(void)setChartData:(id)arg1 forInterval:(long long)arg2 ;
-(id)formattedChangePercent:(BOOL)arg1 ;
-(BOOL)marketIsOpen;
-(id)listNameWithMaxIndexNameLength:(unsigned long long)arg1 ;
-(id)listNameOverride;
-(BOOL)shouldUseCompanyNameAsListName:(unsigned long long)arg1 ;
-(BOOL)isIndex;
-(BOOL)changeIsNegative;
-(BOOL)changeIsZero;
-(id)formattedChangePercent:(BOOL)arg1 includePercentSign:(BOOL)arg2 ;
-(BOOL)isQuoteStale;
-(BOOL)isMetadataStale;
-(BOOL)doesQuoteNeedUpdate;
-(BOOL)doesMetadataNeedUpdate;
-(id)chartDataForInterval:(long long)arg1 ;
-(void)updateQuoteWithDictionary:(id)arg1 forTime:(double)arg2 ;
-(void)updateMetadataWithDictionary:(id)arg1 forTime:(double)arg2 ;
-(NSString *)marketStatusDescription;
-(NSString *)shortCompanyName;
-(NSString *)symbolType;
-(NSString *)yearHigh;
-(NSString *)yearLow;
-(NSString *)averageVolume;
-(NSString *)marketcap;
-(double)timeQuoteLastUpdated;
-(void)setTimeQuoteLastUpdated:(double)arg1 ;
-(double)timeMetadataLastUpdated;
-(void)setTimeMetadataLastUpdated:(double)arg1 ;
-(void)setCurrency:(NSString *)arg1 ;
-(NSString *)currency;
@end

