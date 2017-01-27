/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:49 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol WBSSiteMetadataProvider <NSObject>
@property (assign,nonatomic,__weak) id<WBSSiteMetadataProviderDelegate> providerDelegate; 
@optional
-(void)stopWatchingUpdatesForRequest:(id)arg1;
-(id)operationForRequest:(id)arg1;

@required
-(void)setProviderDelegate:(id)arg1;
-(id)responseForRequest:(id)arg1 willProvideUpdates:(BOOL*)arg2;
-(void)prepareResponseForRequest:(id)arg1 allowDelayedResponse:(BOOL)arg2;
-(BOOL)canHandleRequest:(id)arg1;
-(id<WBSSiteMetadataProviderDelegate>)providerDelegate;

@end

