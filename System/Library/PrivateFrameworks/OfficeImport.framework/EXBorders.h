/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:24 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <OfficeImport/OfficeImport-Structs.h>
@interface EXBorders : NSObject
+(void)initialize;
+(id)edBorderFromXmlElement:(xmlNode*)arg1 diagonalType:(int)arg2 state:(id)arg3 ;
+(int)edDiagStyleFromXmlElement:(xmlNode*)arg1 ;
+(int)edBorderStyleFromXmlBorderStyleString:(id)arg1 ;
+(id)edBordersFromXmlBordersElement:(xmlNode*)arg1 state:(id)arg2 ;
@end

