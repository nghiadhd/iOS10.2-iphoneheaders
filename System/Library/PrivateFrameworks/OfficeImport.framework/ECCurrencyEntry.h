/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:24 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface ECCurrencyEntry : NSObject {

	NSString* mLassoCurrencyCode;
	NSString* mXlLangId;
	NSString* mXlCurrencySymbol;
	BOOL mAppliesToExport;
	int mXlAccountingFormat;

}
+(id)currencyWithLassoCode:(id)arg1 langId:(int)arg2 xlSymbol:(id)arg3 ;
+(id)currencyWithLassoCode:(id)arg1 langId:(int)arg2 xlSymbol:(id)arg3 accountingFormat:(int)arg4 ;
+(id)currencyWithLassoCode:(id)arg1 langId:(int)arg2 xlSymbol:(id)arg3 isExport:(BOOL)arg4 ;
+(id)currencyWithLassoCode:(id)arg1 langId:(int)arg2 xlSymbol:(id)arg3 isExport:(BOOL)arg4 accountingFormat:(int)arg5 ;
-(void)dealloc;
-(id)initWithLassoCode:(id)arg1 langId:(int)arg2 xlSymbol:(id)arg3 isExport:(BOOL)arg4 accountingFormat:(int)arg5 ;
@end

