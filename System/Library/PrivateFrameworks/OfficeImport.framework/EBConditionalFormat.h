/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:24 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <OfficeImport/OfficeImport-Structs.h>
@interface EBConditionalFormat : NSObject
+(int)convertXlConditionalFmtTypeEnumToED:(int)arg1 ;
+(int)convertXlConditionalFmtOperatorEnumToED:(int)arg1 ;
+(BOOL)validXlCf:(XlCf*)arg1 ;
+(int)convertEDConditionalFmtTypeEnumToXl:(int)arg1 ;
+(int)convertEDConditionalFmtOperatorEnumToXl:(int)arg1 ;
+(void)readXlConditionalFormat:(XlConditionalFormat*)arg1 toEDConditionalFormatting:(id)arg2 state:(id)arg3 ;
@end

