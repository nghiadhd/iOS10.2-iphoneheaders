/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:09 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol TVImageLoader <NSObject>
@required
-(id)imageKeyForObject:(id)arg1;
-(id)loadImageForObject:(id)arg1 scaleToSize:(CGSize)arg2 cropToFit:(BOOL)arg3 completionHandler:(/*^block*/id)arg4;
-(void)cancelLoad:(id)arg1;

@end

