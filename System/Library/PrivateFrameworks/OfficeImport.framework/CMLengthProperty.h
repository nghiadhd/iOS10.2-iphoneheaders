/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:21 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OfficeImport/CMProperty.h>

@interface CMLengthProperty : CMProperty {

	double value;
	int unitType;

}
+(double)convertToPoints:(double)arg1 unit:(int)arg2 ;
+(id)cssStringValue:(double)arg1 unit:(int)arg2 ;
-(id)description;
-(int)intValue;
-(double)value;
-(id)initWithNumber:(double)arg1 ;
-(id)initWithNumber:(double)arg1 unit:(int)arg2 ;
-(int)unitType;
-(id)cssStringForName:(id)arg1 ;
-(id)cssString;
-(int)compareValue:(id)arg1 ;
-(void)addNumber:(double)arg1 unit:(int)arg2 ;
@end

