/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:10 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesStore/ISURLOperation.h>

@protocol TVImageDecrypter;
@class NSURL;

@interface _TVURLImageLoadRequest : ISURLOperation {

	NSURL* _url;
	id<TVImageDecrypter> _decrypter;
	/*^block*/id _completionHandler;

}

@property (nonatomic,retain) NSURL * url;                                 //@synthesize url=_url - In the implementation block
@property (nonatomic,retain) id<TVImageDecrypter> decrypter;              //@synthesize decrypter=_decrypter - In the implementation block
@property (nonatomic,copy) id completionHandler;                          //@synthesize completionHandler=_completionHandler - In the implementation block
-(NSURL *)url;
-(id)completionHandler;
-(void)setCompletionHandler:(id)arg1 ;
-(void)setUrl:(NSURL *)arg1 ;
-(id<TVImageDecrypter>)decrypter;
-(void)setDecrypter:(id<TVImageDecrypter>)arg1 ;
-(id)initWithURL:(id)arg1 headers:(id)arg2 decrypter:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
@end

