/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:13 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface CPLFeatureVersionHistory : NSObject {

	NSMutableDictionary* _anchorToVersion;
	NSMutableDictionary* _versionToAnchor;
	long long _currentFeatureVersion;

}

@property (nonatomic,readonly) long long currentFeatureVersion;              //@synthesize currentFeatureVersion=_currentFeatureVersion - In the implementation block
-(id)description;
-(void)enumerateHistoryWithBlock:(/*^block*/id)arg1 ;
-(long long)currentFeatureVersion;
-(id)initWithCurrentFeatureVersion:(long long)arg1 ;
-(void)addSyncAnchor:(id)arg1 forFeatureVersion:(long long)arg2 ;
-(id)syncAnchorForFeatureVersion:(long long)arg1 ;
-(long long)featureVersionForSyncAnchor:(id)arg1 ;
@end

