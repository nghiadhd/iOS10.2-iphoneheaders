/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:09 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSURL;

@interface TVStoreApplicationSetupHelper : NSObject {

	NSURL* _defaultBootURL;

}

@property (nonatomic,copy) NSURL * defaultBootURL;              //@synthesize defaultBootURL=_defaultBootURL - In the implementation block
+(id)launchContextWithLaunchOptions:(id)arg1 bootURL:(id)arg2 appLocalBootURL:(id)arg3 ;
+(id)_parsedQueryParametersForURL:(id)arg1 ;
+(id)launchContextWithLaunchOptions:(id)arg1 bootURL:(id)arg2 ;
-(id)init;
-(void)dealloc;
-(id)initWithDefaultBootURL:(id)arg1 ;
-(id)_bootURLWithBagBootURL:(id)arg1 ;
-(NSURL *)defaultBootURL;
-(void)obtainBootURLWithCompletion:(/*^block*/id)arg1 ;
-(void)setDefaultBootURL:(NSURL *)arg1 ;
@end

