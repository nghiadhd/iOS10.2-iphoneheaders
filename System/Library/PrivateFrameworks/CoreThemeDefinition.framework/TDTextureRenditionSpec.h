/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:23 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/CoreThemeDefinition.framework/CoreThemeDefinition
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreThemeDefinition/TDRenditionSpec.h>

@class NSSet, TDThemeCompressionType, TDTexturePixelFormat;

@interface TDTextureRenditionSpec : TDRenditionSpec

@property (assign,nonatomic) BOOL cubeMap; 
@property (nonatomic,retain) NSSet * mipLevels; 
@property (nonatomic,retain) TDThemeCompressionType * compressionType; 
@property (nonatomic,retain) TDTexturePixelFormat * pixelFormat; 
-(id)createCSIRepresentationWithCompression:(BOOL)arg1 colorSpaceID:(unsigned long long)arg2 document:(id)arg3 ;
-(BOOL)canBePackedWithDocument:(id)arg1 ;
@end

