/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:20 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface CMNumberFormatter : NSObject {

	int _format;
	int _language;
	void* _numberFormatter;

}
+(id)formatterForNumberFormat:(int)arg1 language:(int)arg2 ;
-(void)dealloc;
-(id)stringForNumber:(unsigned long long)arg1 ;
-(id)initWithNumberFormat:(int)arg1 language:(int)arg2 ;
@end

