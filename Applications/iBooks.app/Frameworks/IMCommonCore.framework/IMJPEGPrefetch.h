/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:59:24 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /Applications/iBooks.app/Frameworks/IMCommonCore.framework/IMCommonCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <IMCommonCore/IMCommonCore-Structs.h>
#import <IMCommonCore/IMImagePrefetch.h>

@protocol OS_dispatch_queue, OS_dispatch_group;
@class NSObject, NSString;

@interface IMJPEGPrefetch : NSObject <IMImagePrefetch> {

	BOOL _dataIsLoading;
	CGSize _optimalSize;
	NSObject*<OS_dispatch_queue> _sync;
	NSObject*<OS_dispatch_group> _requestGroup;
	AB _cancelled;
	CGImageRef _cachedImage;
	unsigned long long _requestID;
	unsigned long long _options;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithData:(id)arg1 optimalSize:(CGSize)arg2 options:(unsigned long long)arg3 ;
-(void)_startDecodeWithData:(id)arg1 ;
-(id)_decodeSessionOptionsWithOptimalSize:(CGSize)arg1 highPriority:(BOOL)arg2 ;
-(BOOL)isPrefetchCancelled;
-(id)initWithData:(id)arg1 optimalSize:(CGSize)arg2 ;
-(CGImageRef)cachedImageIfAvailable;
-(void)cancelPrefetchRequest;
-(void)addImageHandler:(/*^block*/id)arg1 queue:(id)arg2 ;
-(void)dealloc;
-(void)_cancel;
-(void)_uncancel;
-(CGImageRef)cachedImage;
-(void)loadData:(id)arg1 ;
@end

