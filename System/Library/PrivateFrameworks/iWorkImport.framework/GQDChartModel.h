/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:30 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <iWorkImport/iWorkImport-Structs.h>
@interface GQDChartModel : NSObject {

	CFArrayRef mChartData;
	CFArrayRef mColumnNames;
	CFArrayRef mRowNames;
	CFDictionaryRef mPropertyBag;
	long long mDirection;
	CFStringRef mTitle;
	CFStringRef mCatagoryTitle;
	CFStringRef mValueTitle;
	CFStringRef mValue2Title;
	CFBundleRef mProcessorBundle;
	BOOL mIsFormulaChart;

}
-(void)setProcessorBundle:(CFBundleRef)arg1 ;
-(void)transpose;
-(CFArrayRef)seriesArray;
-(CFDictionaryRef)propertiesForSeriesAtIndex:(long long)arg1 ;
-(BOOL)hasValueForProperty:(CFStringRef)arg1 forSeriesAtIndex:(long long)arg2 value:(const void*)arg3 ;
-(CFArrayRef)rowNames;
-(CFDictionaryRef)propertyBag;
-(BOOL)hasStringValueForProperty:(CFStringRef)arg1 forSeriesAtIndex:(long long)arg2 value:(const _CFString*)arg3 ;
-(BOOL)hasIntValueForProperty:(CFStringRef)arg1 forSeriesAtIndex:(long long)arg2 value:(int*)arg3 ;
-(BOOL)hasFloatValueForProperty:(CFStringRef)arg1 forSeriesAtIndex:(long long)arg2 value:(float*)arg3 ;
-(CFStringRef)catagoryTitle;
-(CFStringRef)valueTitle;
-(CFStringRef)value2Title;
-(BOOL)isFormulaChart;
-(void)dealloc;
-(CFStringRef)title;
-(long long)direction;
-(CFArrayRef)columnNames;
-(CFArrayRef)chartData;
@end

