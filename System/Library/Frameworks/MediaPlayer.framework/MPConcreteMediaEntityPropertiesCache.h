/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:03 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue, MPMediaLibraryDataProvider;
@class NSMutableDictionary, NSObject;

@interface MPConcreteMediaEntityPropertiesCache : NSObject {

	Class _dataProviderEntityClass;
	long long _identifier;
	NSMutableDictionary* _properties;
	NSMutableDictionary* _valuePersistenceBlocks;
	NSObject*<OS_dispatch_queue> _propertiesQueue;
	id<MPMediaLibraryDataProvider> _dataProvider;

}

@property (nonatomic,__weak,readonly) id<MPMediaLibraryDataProvider> dataProvider;              //@synthesize dataProvider=_dataProvider - In the implementation block
@property (nonatomic,readonly) Class dataProviderEntityClass;                                   //@synthesize dataProviderEntityClass=_dataProviderEntityClass - In the implementation block
@property (nonatomic,readonly) long long identifier;                                            //@synthesize identifier=_identifier - In the implementation block
-(void)dealloc;
-(void)invalidate;
-(long long)identifier;
-(id<MPMediaLibraryDataProvider>)dataProvider;
-(void)delete;
-(Class)dataProviderEntityClass;
-(id)valueForProperty:(id)arg1 isCached:(BOOL*)arg2 ;
-(void)cacheValue:(id)arg1 forProperty:(id)arg2 persistValueInBackgroundBlock:(/*^block*/id)arg3 ;
-(void)cachePropertyValues:(id)arg1 forProperties:(id)arg2 persistValueInBackgroundBlock:(/*^block*/id)arg3 ;
-(void)_onBarrierCacheValues:(id)arg1 persistValueInBackgroundBlock:(/*^block*/id)arg2 ;
-(id)initWithLibraryDataProvider:(id)arg1 dataProviderEntityClass:(Class)arg2 identifier:(long long)arg3 ;
@end

