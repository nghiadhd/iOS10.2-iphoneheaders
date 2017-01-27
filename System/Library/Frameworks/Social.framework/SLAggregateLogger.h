/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:13 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/Social.framework/Social
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface SLAggregateLogger : NSObject
+(void)logFacebookPost:(id)arg1 fromProcessWithPID:(int)arg2 ;
+(void)logTweetWithText:(id)arg1 attachments:(id)arg2 locationAttached:(BOOL)arg3 fromProcessWithPID:(int)arg4 ;
+(id)_logIdentifierForPID:(int)arg1 ;
+(BOOL)_twitterAttachmentsContainImage:(id)arg1 ;
+(BOOL)_twitterAttachmentsContainURL:(id)arg1 ;
+(BOOL)_weiboAttachmentsContainImage:(id)arg1 ;
+(BOOL)_weiboAttachmentsContainURL:(id)arg1 ;
+(BOOL)_tencentWeiboAttachmentsContainImage:(id)arg1 ;
+(BOOL)_tencentWeiboAttachmentsContainURL:(id)arg1 ;
+(void)logFacebookAppInstallChoice:(BOOL)arg1 ;
+(void)logTwitterAppInstallChoice:(BOOL)arg1 ;
+(void)logWeiboWithText:(id)arg1 attachments:(id)arg2 locationAttached:(BOOL)arg3 fromProcessWithPID:(int)arg4 ;
+(void)logTencentWeiboWithText:(id)arg1 attachments:(id)arg2 locationAttached:(BOOL)arg3 fromProcessWithPID:(int)arg4 ;
+(void)logWeiboAppInstallChoice:(BOOL)arg1 ;
+(void)logTencentWeiboAppInstallChoice:(BOOL)arg1 ;
+(void)logFlickrAppInstallChoice:(BOOL)arg1 ;
+(void)logVimeoAppInstallChoice:(BOOL)arg1 ;
@end

