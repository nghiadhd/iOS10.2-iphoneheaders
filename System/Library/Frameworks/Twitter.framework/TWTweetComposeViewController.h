/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:14 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/Twitter.framework/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>

@interface TWTweetComposeViewController : UIViewController

@property (nonatomic,copy) id completionHandler; 
+(BOOL)canSendTweet;
-(id)init;
-(id)completionHandler;
-(void)setCompletionHandler:(id)arg1 ;
-(BOOL)addImage:(id)arg1 ;
-(BOOL)removeAllImages;
-(/*^block*/id)addDownSampledImageDataByProxyWithPreviewImage:(id)arg1 ;
-(void)setLongitude:(double)arg1 latitude:(double)arg2 name:(id)arg3 ;
-(BOOL)addURL:(id)arg1 ;
-(BOOL)removeAllURLs;
-(BOOL)setInitialText:(id)arg1 ;
-(/*^block*/id)addURLWithProxyPreviewImage:(id)arg1 ;
@end

