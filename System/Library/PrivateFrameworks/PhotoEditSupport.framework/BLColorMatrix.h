/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:32 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/PhotoEditSupport.framework/PhotoEditSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <PhotoEditSupport/PhotoEditSupport-Structs.h>
@interface BLColorMatrix : NSObject
+(SCD_Struct_BL12)warmCoolMatrix:(float)arg1 ;
+(SCD_Struct_BL11)mix:(float)arg1 channelMix1:(SCD_Struct_BL11)arg2 channelMix2:(SCD_Struct_BL11)arg3 ;
+(SCD_Struct_BL12)mix:(float)arg1 matrix1:(SCD_Struct_BL12)arg2 matrix2:(SCD_Struct_BL12)arg3 ;
+(SCD_Struct_BL12)matrix:(float)arg1 numBlocks:(int)arg2 matrices:(SCD_Struct_BL12*)arg3 ;
@end
