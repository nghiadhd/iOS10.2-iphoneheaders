/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:37:04 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DACardDAV.framework/DADaemonCardDAV.bundle/DADaemonCardDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DADaemonCardDAV/DADaemonCardDAV-Structs.h>
#import <DADaemonCardDAV/CardDAVDaemonAccount.h>
#import <libobjc.A.dylib/NSURLConnectionDelegate.h>

@class NSMutableData, NSError, NSString, NSMutableURLRequest;

@interface CardDAViCloudDaemonAccount : CardDAVDaemonAccount <NSURLConnectionDelegate> {

	int _fetchingImageDataRefCount;
	int _useSSLOverride;
	NSMutableData* _fetchedImageData;
	NSError* _fetchImageError;
	NSString* _hostOverride;
	long long _portOverride;
	NSMutableURLRequest* _urlRequest;

}

@property (assign,nonatomic) int fetchingImageDataRefCount;                 //@synthesize fetchingImageDataRefCount=_fetchingImageDataRefCount - In the implementation block
@property (nonatomic,retain) NSMutableData * fetchedImageData;              //@synthesize fetchedImageData=_fetchedImageData - In the implementation block
@property (nonatomic,retain) NSError * fetchImageError;                     //@synthesize fetchImageError=_fetchImageError - In the implementation block
@property (nonatomic,retain) NSString * hostOverride;                       //@synthesize hostOverride=_hostOverride - In the implementation block
@property (assign,nonatomic) int useSSLOverride;                            //@synthesize useSSLOverride=_useSSLOverride - In the implementation block
@property (assign,nonatomic) long long portOverride;                        //@synthesize portOverride=_portOverride - In the implementation block
@property (nonatomic,retain) NSMutableURLRequest * urlRequest;              //@synthesize urlRequest=_urlRequest - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setUseSSL:(BOOL)arg1 ;
-(id)host;
-(void)connection:(id)arg1 didFailWithError:(id)arg2 ;
-(void)connection:(id)arg1 didReceiveData:(id)arg2 ;
-(void)connectionDidFinishLoading:(id)arg1 ;
-(void)connection:(id)arg1 didReceiveResponse:(id)arg2 ;
-(long long)port;
-(void)setHost:(id)arg1 ;
-(void)_sendRequest:(id)arg1 ;
-(void)connection:(id)arg1 willSendRequestForAuthenticationChallenge:(id)arg2 ;
-(void)noteHomeSetOnDifferentHost:(id)arg1 ;
-(BOOL)shouldHandleHTTPCookiesForURL:(id)arg1 ;
-(BOOL)shouldSendClientInfoHeaderForURL:(id)arg1 ;
-(BOOL)shouldCompressRequests;
-(id)getAppleIDSession;
-(NSMutableURLRequest *)urlRequest;
-(BOOL)useSSL;
-(void)setUrlRequest:(NSMutableURLRequest *)arg1 ;
-(id)initWithBackingAccountInfo:(id)arg1 ;
-(void)resetAccountID;
-(BOOL)updateMeCardWithWithConsumer:(id)arg1 ;
-(BOOL)setBestMeCard;
-(BOOL)_handleOrphanarium:(CFArrayRef)arg1 toBeCreatedContainersByURL:(id)arg2 ;
-(void*)newABSourceForContainer:(id)arg1 ;
-(void)_reallySyncAddressBookURLsWithConsumer:(id)arg1 ;
-(id)copyImageContentsAtURL:(id)arg1 outError:(id*)arg2 ;
-(void)setHostOverride:(NSString *)arg1 ;
-(void)setUseSSLOverride:(int)arg1 ;
-(void)setPortOverride:(long long)arg1 ;
-(NSString *)hostOverride;
-(int)useSSLOverride;
-(long long)portOverride;
-(int)fetchingImageDataRefCount;
-(void)setFetchingImageDataRefCount:(int)arg1 ;
-(void)setFetchedImageData:(NSMutableData *)arg1 ;
-(void)setFetchImageError:(NSError *)arg1 ;
-(BOOL)_shouldWipeDataOnUpgradeFromAccountVersion:(int)arg1 ;
-(NSMutableData *)fetchedImageData;
-(NSError *)fetchImageError;
-(void)setPort:(long long)arg1 ;
-(id)connection:(id)arg1 willCacheResponse:(id)arg2 ;
@end

