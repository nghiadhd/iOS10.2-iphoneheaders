/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:45 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/HelpKit.framework/HelpKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HelpKit/HLPURLDataCacheController.h>

@class NSCache;

@interface HLPURLImageCacheController : HLPURLDataCacheController {

	NSCache* _inMemoryImageCache;

}

@property (nonatomic,retain) NSCache * inMemoryImageCache;              //@synthesize inMemoryImageCache=_inMemoryImageCache - In the implementation block
+(id)sharedInstance;
-(void)addInMemoryCacheForImage:(id)arg1 path:(id)arg2 cost:(unsigned long long)arg3 ;
-(NSCache *)inMemoryImageCache;
-(id)imageFromMemoryCacheForPath:(id)arg1 ;
-(id)newDataCache;
-(void)getImageForURL:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)setInMemoryImageCache:(NSCache *)arg1 ;
-(void)unload;
@end

