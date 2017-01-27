/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:11 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary, NSMutableSet;

@interface NTKLabelCache : NSObject {

	NSMutableDictionary* _atlases;
	NSMutableSet* _preloadSet;

}
+(void)prime;
+(id)labelForText:(id)arg1 font:(long long)arg2 fontSize:(double)arg3 padWithZeroes:(BOOL)arg4 filter:(BOOL)arg5 ;
+(id)labelForFaceStyle:(long long)arg1 number:(unsigned long long)arg2 fontSize:(double)arg3 paddedWithZeros:(BOOL)arg4 ;
+(void)_purgeCache;
+(id)versionFilePath;
+(id)numeralsSetFromCurrentLocale;
+(BOOL)setNumeralsSet:(id)arg1 ;
+(void)wipe;
+(BOOL)localeChanged;
-(id)init;
-(void)dealloc;
-(BOOL)_localeChanged;
-(void)checkVersion;
-(void)exportTextureAtlas:(long long)arg1 ;
-(void)primeFontSize:(double)arg1 font:(long long)arg2 values:(id)arg3 ;
-(void)loadAtlases;
-(id)labelForText:(id)arg1 font:(long long)arg2 fontSize:(double)arg3 padWithZeroes:(BOOL)arg4 filter:(BOOL)arg5 ;
-(id)labelForFaceStyle:(long long)arg1 number:(unsigned long long)arg2 fontSize:(double)arg3 paddedWithZeros:(BOOL)arg4 ;
-(void)primeFontSize:(double)arg1 font:(long long)arg2 values:(id)arg3 padWithZeroes:(BOOL)arg4 preload:(BOOL)arg5 ;
-(id)keyForLabelWithFont:(long long)arg1 fontSize:(double)arg2 padWithZeroes:(BOOL)arg3 ;
-(void)exportTextureAtlas:(double)arg1 font:(long long)arg2 values:(id)arg3 padWithZeroes:(BOOL)arg4 preload:(BOOL)arg5 ;
-(id)textureFor:(id)arg1 font:(long long)arg2 fontSize:(double)arg3 padWithZeroes:(BOOL)arg4 ;
-(id)nameForFaceStyle:(long long)arg1 ;
-(void)primeFontSize:(double)arg1 font:(long long)arg2 from:(unsigned long long)arg3 to:(unsigned long long)arg4 step:(unsigned long long)arg5 ;
-(void)primeFontSize:(double)arg1 font:(long long)arg2 values:(id)arg3 preload:(BOOL)arg4 ;
-(void)primeFontSize:(double)arg1 font:(long long)arg2 values:(id)arg3 padWithZeroes:(BOOL)arg4 ;
@end

