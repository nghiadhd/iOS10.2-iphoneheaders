/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:24 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <libobjc.A.dylib/OABReaderClient.h>

@interface WBOfficeArtReaderClient : NSObject <OABReaderClient>
+(int)oadSchemeColorValueForEshSchemeColorIndex:(unsigned short)arg1 state:(id)arg2 ;
+(BOOL)tablesAreAllowed;
+(id)readDrawableFromPackagePart:(id)arg1 foundInObject:(id)arg2 state:(id)arg3 ;
+(void)readClientDataFromShape:(id)arg1 toGraphic:(id)arg2 state:(id)arg3 ;
+(BOOL)xmlEquivalentOfDrawableCanBeUsed;
+(void)readClientDataFromGroup:(id)arg1 toGroup:(id)arg2 state:(id)arg3 ;
+(void)readClientDataFromTableCell:(id)arg1 toTableCell:(id)arg2 state:(id)arg3 ;
+(BOOL)escherIsFullySupported;
+(void)readClientDataFromShape:(id)arg1 toGraphic:(id)arg2 includeText:(BOOL)arg3 state:(id)arg4 ;
+(void)readClientDataFromObject:(id)arg1 toDrawable:(id)arg2 state:(id)arg3 ;
+(int)horizontalPosition:(EshContentProperties*)arg1 ;
+(int)relativeHorizontalPosition:(EshContentProperties*)arg1 ;
+(int)verticalPosition:(EshContentProperties*)arg1 ;
+(int)relativeVerticalPosition:(EshContentProperties*)arg1 ;
+(double)wrapDistanceLeft:(EshContentProperties*)arg1 ;
+(double)wrapDistanceTop:(EshContentProperties*)arg1 ;
+(double)wrapDistanceRight:(EshContentProperties*)arg1 ;
+(double)wrapDistanceBottom:(EshContentProperties*)arg1 ;
+(BOOL)allowOverlap:(EshContentProperties*)arg1 ;
+(BOOL)behindText:(EshContentProperties*)arg1 ;
+(void)readFrom:(EshContentProperties*)arg1 to:(id)arg2 ;
@end

