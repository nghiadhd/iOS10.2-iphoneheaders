/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:05 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CFNetwork/NSURLProtocol.h>

@class MFAttachment, MFPromise;

@interface MFMessageURLProtocol : NSURLProtocol {

	MFAttachment* _attachment;
	MFPromise* _promise;

}

@property (nonatomic,retain) MFAttachment * attachment;              //@synthesize attachment=_attachment - In the implementation block
@property (nonatomic,retain) MFPromise * promise;                    //@synthesize promise=_promise - In the implementation block
+(void)initialize;
+(BOOL)canInitWithRequest:(id)arg1 ;
+(id)canonicalRequestForRequest:(id)arg1 ;
+(BOOL)requestIsCacheEquivalent:(id)arg1 toRequest:(id)arg2 ;
-(void)dealloc;
-(void)stopLoading;
-(void)setAttachment:(MFAttachment *)arg1 ;
-(MFAttachment *)attachment;
-(MFPromise *)promise;
-(id)initWithRequest:(id)arg1 cachedResponse:(id)arg2 client:(id)arg3 ;
-(id)_cachedResponseWithData:(id)arg1 mimeType:(id)arg2 error:(id*)arg3 ;
-(void)setPromise:(MFPromise *)arg1 ;
-(void)startLoading;
@end

