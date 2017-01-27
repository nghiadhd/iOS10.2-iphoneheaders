/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:54:50 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/CoreSpotlight.framework/CoreSpotlight
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSDictionary;

@interface _MDIndexExtensionLoader : NSObject {

	id _matchingContext;
	NSObject*<OS_dispatch_queue> _queue;
	NSDictionary* _extensionsByBundleId;

}

@property (nonatomic,retain) id matchingContext;                               //@synthesize matchingContext=_matchingContext - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;               //@synthesize queue=_queue - In the implementation block
@property (nonatomic,retain) NSDictionary * extensionsByBundleId;              //@synthesize extensionsByBundleId=_extensionsByBundleId - In the implementation block
+(id)_matchDictionary;
-(id)init;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSDictionary *)extensionsByBundleId;
-(id)_filterIndexExtensions:(id)arg1 ;
-(void)setExtensionsByBundleId:(NSDictionary *)arg1 ;
-(void)startLookingForExtensionsWithMatchUpdateHandler:(/*^block*/id)arg1 ;
-(void)stopLookingForExtensions;
-(void)findExtensionsWithCompletionBlock:(/*^block*/id)arg1 ;
-(id)_loadExtensionsSynchronously;
-(id)matchingContext;
-(void)setMatchingContext:(id)arg1 ;
@end

