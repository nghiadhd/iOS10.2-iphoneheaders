/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:24 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <CoreUI/CoreUI-Structs.h>
@class NSData, NSSet;

@interface CUICommonAssetStorage : NSObject {

	carheader* _header;
	carextendedMetadata* _extendedMetadata;
	renditionkeyfmt* _keyfmt;
	void* _imagedb;
	void* _colordb;
	void* _fontdb;
	void* _fontsizedb;
	void* _zcglyphdb;
	void* _zcbezeldb;
	void* _facetKeysdb;
	void* _bitmapKeydb;
	NSData* _globals;
	unsigned _swap : 1;
	unsigned _isMemoryMapped : 1;
	unsigned _reserved : 30;
	NSSet* _externalTags;
	unsigned short _renditionInfoCacheLookup[10];
	id _renditionInfoCache[10];
	os_unfair_lock_s _lock;
	os_unfair_lock_s _renditionInfoCacheLock;

}
+(BOOL)isValidAssetStorageWithBytes:(const void*)arg1 length:(unsigned long long)arg2 ;
+(void)initialize;
+(BOOL)isValidAssetStorageWithURL:(id)arg1 ;
-(BOOL)assetExistsForKey:(id)arg1 ;
-(const renditionkeyfmt*)keyFormat;
-(id)renditionNameForKeyList:(renditionkeytoken*)arg1 ;
-(unsigned)colorSpaceID;
-(long long)maximumRenditionKeyTokenCount;
-(BOOL)usesCUISystemThemeRenditionKey;
-(id)zeroCodeGlyphList;
-(id)initWithPath:(id)arg1 forWriting:(BOOL)arg2 ;
-(BOOL)_commonInitWithStorage:(BOMStorageRef)arg1 forWritting:(BOOL)arg2 ;
-(void)_initDefaultHeaderVersion:(double)arg1 versionString:(const char*)arg2 ;
-(void)_swapHeader;
-(void)_bringHeaderInfoUpToDate;
-(void)_swapKeyFormat;
-(long long)_storagefileTimestamp;
-(BOOL)assetExistsForKeyData:(const void*)arg1 length:(unsigned long long)arg2 ;
-(id)assetKeysMatchingBlock:(/*^block*/id)arg1 ;
-(BOOL)swapped;
-(void)_swapRenditionKeyArray:(unsigned short*)arg1 ;
-(renditionkeytoken)_swapRenditionKeyToken:(renditionkeytoken)arg1 ;
-(void)_swapZeroCodeInformation:(SCD_Struct_CU17*)arg1 ;
-(id)_zeroCodeListFromTree:(const void*)arg1 ;
-(const FontValue*)_fontValueForFontType:(id)arg1 ;
-(void)_addBitmapIndexForNameIdentifier:(unsigned short)arg1 attribute:(int)arg2 withValue:(unsigned short)arg3 toDictionary:(id)arg4 ;
-(void)_buildBitmapInfoIntoDictionary:(id)arg1 ;
-(BOMStorageRef)_bomStorage;
-(unsigned)storageVersion;
-(unsigned)coreuiVersion;
-(long long)storageTimestamp;
-(int)keySemantics;
-(id)keyFormatData;
-(id)catalogGlobalData;
-(const char*)mainVersionString;
-(unsigned)renditionCount;
-(unsigned)associatedChecksum;
-(id)thinningArguments;
-(id)deploymentPlatform;
-(id)deploymentPlatformVersion;
-(id)authoringTool;
-(id)assetForKey:(id)arg1 ;
-(id)allAssetKeys;
-(id)renditionInfoForIdentifier:(unsigned short)arg1 ;
-(const renditionkeytoken*)renditionKeyForName:(const char*)arg1 hotSpot:(CGPoint*)arg2 ;
-(id)allRenditionNames;
-(id)zeroCodeBezelList;
-(BOOL)getColor:(colordef*)arg1 forName:(const char*)arg2 ;
-(BOOL)hasColorForName:(const char*)arg1 ;
-(BOOL)getFontName:(id*)arg1 baselineOffset:(float*)arg2 forFontType:(id)arg3 ;
-(BOOL)getBaselineOffset:(float*)arg1 forFontType:(id)arg2 ;
-(float)fontSizeForFontSizeType:(id)arg1 ;
-(id)externalTags;
-(void)enumerateBitmapIndexUsingBlock:(/*^block*/id)arg1 ;
-(int)validateBitmapInfo;
-(void)dealloc;
-(id)description;
-(void)enumerateKeysAndObjectsUsingBlock:(/*^block*/id)arg1 ;
-(id)path;
-(id)initWithPath:(id)arg1 ;
-(id)uuid;
-(id)initWithBytes:(const void*)arg1 length:(unsigned long long)arg2 ;
-(const char*)versionString;
-(unsigned)schemaVersion;
@end

