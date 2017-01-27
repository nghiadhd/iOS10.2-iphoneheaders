/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:25 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <libobjc.A.dylib/OAVReadClient.h>

@interface WXVmlReadClient : NSObject <OAVReadClient>
+(void)initialize;
+(void)readClientDataFromShape:(xmlNode*)arg1 toGraphic:(id)arg2 state:(id)arg3 ;
+(void)readClientDataFromGroup:(xmlNode*)arg1 toGroup:(id)arg2 state:(id)arg3 ;
+(int)vmlSupportLevel;
+(int)horizontalPosition:(id)arg1 ;
+(int)relativeHorizontalPosition:(id)arg1 ;
+(int)verticalPosition:(id)arg1 ;
+(int)relativeVerticalPosition:(id)arg1 ;
+(double)wrapDistanceLeft:(id)arg1 ;
+(double)wrapDistanceTop:(id)arg1 ;
+(double)wrapDistanceRight:(id)arg1 ;
+(double)wrapDistanceBottom:(id)arg1 ;
+(BOOL)floating:(id)arg1 ;
+(int)zIndex:(id)arg1 ;
+(void)readTextWrappingFromParent:(xmlNode*)arg1 toAnchor:(id)arg2 ;
+(void)readFromDrawable:(xmlNode*)arg1 toContent:(id)arg2 ;
+(void)copyFromDrawable:(id)arg1 toContent:(id)arg2 ;
@end

