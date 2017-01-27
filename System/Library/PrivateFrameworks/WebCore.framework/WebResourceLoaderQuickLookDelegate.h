/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:23 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WebCore/WebCore-Structs.h>
#import <libobjc.A.dylib/NSURLConnectionDelegate.h>
#import <WebCore/WebCoreResourceLoaderDelegate.h>

@class NSString;

@interface WebResourceLoaderQuickLookDelegate : NSObject <NSURLConnectionDelegate, WebCoreResourceLoaderDelegate> {

	RefPtr<WebCore::ResourceLoader>* _resourceLoader;
	BOOL _hasSentDidReceiveResponse;
	BOOL _hasFailed;
	QuickLookHandle* _quickLookHandle;

}

@property (assign,nonatomic) QuickLookHandle* quickLookHandle;              //@synthesize quickLookHandle=_quickLookHandle - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)connection:(id)arg1 didReceiveData:(id)arg2 lengthReceived:(long long)arg3 ;
-(void)connection:(id)arg1 didReceiveDataArray:(id)arg2 ;
-(void)_sendDidReceiveResponseIfNecessary;
-(void)detachHandle;
-(QuickLookHandle*)quickLookHandle;
-(void)setQuickLookHandle:(QuickLookHandle*)arg1 ;
-(void)connection:(id)arg1 didFailWithError:(id)arg2 ;
-(void)connectionDidFinishLoading:(id)arg1 ;
-(id)initWithResourceLoader:(PassRefPtr<WebCore::ResourceLoader>*)arg1 ;
@end

