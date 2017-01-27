/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:54:19 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/AccessoryUpdaterBundles/FUDGenericKextUpdater.bundle/FUDGenericKextUpdater
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppleEAAccessoryUpdater/FudPlugin.h>

@protocol FudPluginDelegate;
@class NSString, NSMutableDictionary, NSNumber;

@interface FGKUPlugin : NSObject <FudPlugin> {

	NSString* _deviceClass;
	NSMutableDictionary* _pluginInfo;
	id<FudPluginDelegate> _delegate;
	NSNumber* _registryEntryID;
	NSString* _fwAssetFile;
	NSString* _fwAssetSignatureType;
	NSNumber* _fwAssetVersion;
	NSNumber* _fwAssetSize;
	NSNumber* _img4Tag;

}

@property (nonatomic,readonly) NSString * deviceClass;                           //@synthesize deviceClass=_deviceClass - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * pluginInfo;                 //@synthesize pluginInfo=_pluginInfo - In the implementation block
@property (assign,nonatomic,__weak) id<FudPluginDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * registryEntryID;                  //@synthesize registryEntryID=_registryEntryID - In the implementation block
@property (nonatomic,retain) NSString * fwAssetFile;                             //@synthesize fwAssetFile=_fwAssetFile - In the implementation block
@property (nonatomic,retain) NSString * fwAssetSignatureType;                    //@synthesize fwAssetSignatureType=_fwAssetSignatureType - In the implementation block
@property (nonatomic,retain) NSNumber * fwAssetVersion;                          //@synthesize fwAssetVersion=_fwAssetVersion - In the implementation block
@property (nonatomic,retain) NSNumber * fwAssetSize;                             //@synthesize fwAssetSize=_fwAssetSize - In the implementation block
@property (nonatomic,retain) NSNumber * img4Tag;                                 //@synthesize img4Tag=_img4Tag - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)getEarlyBootList:(id)arg1 delegate:(id)arg2 ;
-(id)findFWAssetFromTag:(id)arg1 tag:(unsigned)arg2 size:(unsigned long long*)arg3 ;
-(void)prepareFirmwareWithOptions:(id)arg1 ;
-(void)setFwAssetVersion:(NSNumber *)arg1 ;
-(unsigned)getServiceForRegistryID:(long long*)arg1 ;
-(void)setFwAssetSignatureType:(NSString *)arg1 ;
-(void)applyFirmwareWithOptions:(id)arg1 ;
-(void)finishWithOptions:(id)arg1 ;
-(unsigned)getConnectionForRegistryID:(long long*)arg1 ;
-(NSString *)fwAssetSignatureType;
-(void)downloadFirmwareWithOptions:(id)arg1 ;
-(void)setFwAssetSize:(NSNumber *)arg1 ;
-(void)findFirmwareWithOptions:(id)arg1 remote:(BOOL)arg2 ;
-(void)setFwAssetFile:(NSString *)arg1 ;
-(id)initWithDeviceClass:(id)arg1 delegate:(id)arg2 info:(id*)arg3 options:(id)arg4 ;
-(NSNumber *)registryEntryID;
-(NSString *)fwAssetFile;
-(NSNumber *)fwAssetVersion;
-(void)setImg4Tag:(NSNumber *)arg1 ;
-(NSNumber *)img4Tag;
-(void)bootstrapWithOptions:(id)arg1 ;
-(NSNumber *)fwAssetSize;
-(void)getFWAssetInfo:(id)arg1 ;
-(NSMutableDictionary *)pluginInfo;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setDelegate:(id<FudPluginDelegate>)arg1 ;
-(void)dealloc;
-(id<FudPluginDelegate>)delegate;
-(NSString *)deviceClass;
@end

