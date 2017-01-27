/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:21 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/WatchListKit.framework/WatchListKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSOperation.h>

@class NSError, NSDictionary;

@interface WLKSettingsRequestOperation : NSOperation {

	NSError* _error;
	NSDictionary* _response;
	/*^block*/id _requestCompletionBlock;

}

@property (nonatomic,readonly) NSError * error;                      //@synthesize error=_error - In the implementation block
@property (nonatomic,readonly) NSDictionary * response;              //@synthesize response=_response - In the implementation block
@property (nonatomic,copy) id requestCompletionBlock;                //@synthesize requestCompletionBlock=_requestCompletionBlock - In the implementation block
+(id)URLBagKey;
-(id)requestCompletionBlock;
-(NSDictionary *)response;
-(void)main;
-(void)setRequestCompletionBlock:(id)arg1 ;
-(id)requestProperties;
-(NSError *)error;
-(id)_runNetworkOperationAndReturnError:(id*)arg1 ;
@end

