/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:07 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSOperation.h>

@protocol OS_dispatch_queue;
@class NSObject, SSURLBag;

@interface SKUIReloadConfigurationOperation : NSOperation {

	NSObject*<OS_dispatch_queue> _dispatchQueue;
	/*^block*/id _outputBlock;
	SSURLBag* _urlBag;

}

@property (retain) SSURLBag * URLBag; 
@property (copy) id outputBlock; 
-(id)init;
-(void)main;
-(void)setOutputBlock:(id)arg1 ;
-(SSURLBag *)URLBag;
-(void)setURLBag:(SSURLBag *)arg1 ;
-(id)outputBlock;
@end

