/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:27 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VideoSubscriberAccount/VideoSubscriberAccount-Structs.h>
#import <VideoSubscriberAccount/VSAsyncOperation.h>

@class NSString, VSFailable, SSLookupRequest, NSOperationQueue;

@interface VSAppDescriptionFetchOperation : VSAsyncOperation {

	NSString* _appAdamID;
	VSFailable* _result;
	SSLookupRequest* _lookupRequest;
	NSOperationQueue* _privateQueue;
	CGSize _preferredArtworkSize;

}

@property (nonatomic,copy) NSString * appAdamID;                           //@synthesize appAdamID=_appAdamID - In the implementation block
@property (assign,nonatomic) CGSize preferredArtworkSize;                  //@synthesize preferredArtworkSize=_preferredArtworkSize - In the implementation block
@property (nonatomic,retain) VSFailable * result;                          //@synthesize result=_result - In the implementation block
@property (nonatomic,retain) SSLookupRequest * lookupRequest;              //@synthesize lookupRequest=_lookupRequest - In the implementation block
@property (nonatomic,retain) NSOperationQueue * privateQueue;              //@synthesize privateQueue=_privateQueue - In the implementation block
-(id)init;
-(void)cancel;
-(VSFailable *)result;
-(SSLookupRequest *)lookupRequest;
-(void)setResult:(VSFailable *)arg1 ;
-(NSString *)appAdamID;
-(void)setAppAdamID:(NSString *)arg1 ;
-(void)executionDidBegin;
-(NSOperationQueue *)privateQueue;
-(void)setPrivateQueue:(NSOperationQueue *)arg1 ;
-(CGSize)preferredArtworkSize;
-(id)_appDescriptionFromLookupResponse:(id)arg1 artworkImage:(id)arg2 ;
-(void)_handleLookupResponse:(id)arg1 ;
-(void)setLookupRequest:(SSLookupRequest *)arg1 ;
-(id)initWithAppAdamID:(id)arg1 preferredArtworkSize:(CGSize)arg2 ;
-(void)setPreferredArtworkSize:(CGSize)arg1 ;
@end

