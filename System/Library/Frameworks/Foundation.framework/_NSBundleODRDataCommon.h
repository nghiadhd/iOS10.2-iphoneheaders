/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:54:54 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary, NSLock, NSBundle;

@interface _NSBundleODRDataCommon : NSObject {

	NSMutableDictionary* _assetPackToURL;
	NSLock* _lock;
	NSBundle* _bundle;
	long long _sandboxToken;

}
-(void)assetPacksBecameAvailable:(id)arg1 ;
-(void)assetPacksBecameUnavailable:(id)arg1 ;
-(id)URLForAssetPack:(id)arg1 ;
-(void)dealloc;
-(id)initWithBundle:(id)arg1 ;
@end

